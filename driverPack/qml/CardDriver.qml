import QtQuick 2.0
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.2

Rectangle{
    property int idDriver: 0
    property string photo: ""

    property var _photos
    property int _countPhotos: 0

    property bool isRoot: false

    Connections{
        target: driverList
        function onGetDetails(_idDriver,_name,_middleName,_passportSerial,_passportNumber,
                              _postcode,_address,_addressLife,_company,
                              _jobname,_phone,_email,_photo,_description){
            idDriver = _idDriver
            nameInput.text = _name
            middleNameInput.text  = _middleName
            passportSerialInput.text  = _passportSerial
            passportNumberInput.text = _passportNumber
            postcodeInput.text  = _postcode
            addressInput.text  = _address
            addressLifeInput.text  = _addressLife
            companyInput.text  = _company
            jobnameInput.text  = _jobname
            phoneInput.text  = _phone
            emailInput.text  = _email
            photo  = _photo
            descriptionInput.text  = _description
        }
    }

    Connections{
        target: appEngine
        function onToRootModeSignal(){
            isRoot = true
        }
    }


    StackView{
        id:mainStackView
        initialItem: page1
        anchors.fill: parent
    }

    Page{
        id:page1
        visible: true

        Image {
            id: ava
            source: photo
            fillMode: Image.PreserveAspectFit

            anchors.top: parent.top
            anchors.left: parent.left
            anchors.margins: parent.width/20

            width: parent.width/10
            height: width
        }
        Button{
            text: qsTr("изменить")
            visible: isRoot

            anchors.top:ava.bottom
            anchors.left: ava.left
            anchors.topMargin:parent.height/40

            width: ava.width
            height: parent.height/25

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }

            onClicked: {
                driverList.setProfileImageSlot()
                selectImage.visible = true
            }
        }

        Rectangle{
            id:selectImage
            visible: false

            anchors.left: parent.left
            anchors.top: parent.top

            height: parent.height
            width: parent.width/9

            ScrollView{
                anchors.fill: parent
                ListView{
                    id:viewAllSelectedImages
                    anchors.fill: parent
                    model: _countPhotos
                    spacing: parent.height/30
                    delegate: Button{
                        property var _fileName: _photos[model.index]
                        width: parent.width/1.1
                        height: width

                        background: Image {
                            source: "qrc:/resApp/photo/"+_fileName
                        }
                        onClicked: {
                            photo = "qrc:/resApp/photo/"+_fileName
                            selectImage.visible = false
                        }
                    }
                }

                Connections{
                    target: driverList
                    function onSetProfileImageSignal(photos,countPhotos){
                        _photos = photos.split(";")
                        _countPhotos = countPhotos
                    }
                }
            }
        }

        Text {
            id: nameText
            text: qsTr("имя :")
            font.pointSize: parent.height/40

            anchors.top:ava.top
            anchors.left: nameInput.left
        }
        TextField{
            id:nameInput
            font.pointSize: height/2.7
            readOnly: !isRoot

            horizontalAlignment: Text.AlignHCenter
            anchors.left: ava.right
            anchors.top:nameText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Text {
            id: middleNameText
            text: qsTr("отчество :")
            font.pointSize: parent.height/40

            anchors.top: nameInput.bottom
            anchors.left: nameInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:middleNameInput
            font.pointSize: height/2.7
            readOnly: !isRoot

            horizontalAlignment: Text.AlignHCenter
            anchors.left: ava.right
            anchors.top:middleNameText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Text {
            id: passportSerialText
            text: qsTr("серия паспорта :")
            font.pointSize: parent.height/40

            anchors.top: middleNameInput.bottom
            anchors.left: nameInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:passportSerialInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.left: ava.right
            anchors.top:passportSerialText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Text {
            id: passportNumberText
            text: qsTr("номер паспорта :")
            font.pointSize: parent.height/40

            anchors.top: passportSerialInput.bottom
            anchors.left: nameInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:passportNumberInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.left: ava.right
            anchors.top:passportNumberText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Text {
            id: postcodeText
            text: qsTr("почтовый индекс :")
            font.pointSize: parent.height/40

            anchors.top: passportNumberInput.bottom
            anchors.left: nameInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:postcodeInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.left: ava.right
            anchors.top:postcodeText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }

        }

        Text {
            id: addressText
            text: qsTr("адрес регистрации :")
            font.pointSize: parent.height/40

            anchors.top: postcodeInput.bottom
            anchors.left: nameInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:addressInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.left: ava.right
            anchors.top:addressText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Button{
            id:nextPage
            text:qsTr("->")

            anchors.bottom: parent.bottom
            anchors.right: parent.right
            anchors.margins: parent.width/40

            width:height
            height:parent.height/9

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }

            onClicked: {
                mainStackView.push(page2)
            }
        }

        Button{
            id:saveButton1
            visible: isRoot

            anchors.top: parent.top
            anchors.right: parent.right
            anchors.margins: parent.width/40

            width:height
            height:parent.height/9
            text: qsTr("save")

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }

            onClicked: {
                driverList.saveDataUser(idDriver,nameInput.text,middleNameInput.text,
                                        passportSerialInput.text,passportNumberInput.text,
                                        postcodeInput.text,addressInput.text,addressLifeInput.text,
                                        companyInput.text,jobnameInput.text,phoneInput.text,
                                        emailInput.text, photo,descriptionInput.text)
            }
        }

        Button{
            id:exit

            anchors.top: saveButton1.bottom
            anchors.right: parent.right
            anchors.margins: parent.width/40

            width:height
            height:parent.height/9
            text: qsTr("exit")

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }

            onClicked: {
                appEngine.toAllDriversFormSlot();
                idDriver = 0
                nameInput.text = ""
                middleNameInput.text  = ""
                passportSerialInput.text  = ""
                postcodeInput.text  = ""
                addressInput.text  = ""
                addressLifeInput.text  = ""
                companyInput.text  = ""
                jobnameInput.text  = ""
                phoneInput.text  = ""
                emailInput.text  = ""
                photo  = ""
                descriptionInput.text  = ""
                isRoot = false
            }
        }

    }
    Page{
        id:page2
        visible: false

        Text {
            id: addressLifeText
            text: qsTr("адрес проживания :")
            font.pointSize: parent.height/40

            anchors.top: parent.top
            anchors.left: companyInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:addressLifeInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top:addressLifeText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Text {
            id: companyText
            text: qsTr("место работы :")
            font.pointSize: parent.height/40

            anchors.top: addressLifeInput.bottom
            anchors.left: companyInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:companyInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top:companyText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Text {
            id: jobnameText
            text: qsTr("должность :")
            font.pointSize: parent.height/40

            anchors.top: companyInput.bottom
            anchors.left: jobnameInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:jobnameInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top:jobnameText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Text {
            id: phoneText
            text: qsTr("мобильный телефон :")
            font.pointSize: parent.height/40

            anchors.top: jobnameInput.bottom
            anchors.left: phoneInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:phoneInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top:phoneText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }
        Text {
            id: emailText
            text: qsTr("email :")
            font.pointSize: parent.height/40

            anchors.top: phoneInput.bottom
            anchors.left: emailInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:emailInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top:emailText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Text {
            id: descriptionText
            text: qsTr("замечания :")
            font.pointSize: parent.height/40

            anchors.top: emailInput.bottom
            anchors.left: descriptionInput.left
            anchors.topMargin: parent.height/20
        }
        TextField{
            id:descriptionInput
            font.pointSize: height/2.7
            readOnly: !isRoot
            horizontalAlignment: Text.AlignHCenter

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top:descriptionText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

        Button{
            id:backPage
            text:qsTr("<-")

            anchors.bottom: parent.bottom
            anchors.right: parent.right
            anchors.margins: parent.width/40

            width:height
            height:parent.height/9

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }

            onClicked: {
                mainStackView.pop()
            }
        }

        Button{
            id:saveButton2
            text:qsTr("save")
            visible: isRoot

            anchors.top: parent.top
            anchors.right: parent.right
            anchors.margins: parent.width/40

            width:height
            height:parent.height/9

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }

            onClicked: {
                driverList.saveDataUser(idDriver,nameInput.text,middleNameInput.text,
                                        passportSerialInput.text,passportNumberInput.text,
                                        postcodeInput.text,addressInput.text,addressLifeInput.text,
                                        companyInput.text,jobnameInput.text,phoneInput.text,
                                        emailInput.text, photo,descriptionInput.text)
            }
        }
    }

}
