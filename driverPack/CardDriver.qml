import QtQuick 2.0
import QtQuick.Controls 2.5

Rectangle{
    property string name: ""
    property string middleName: ""
    property string passportSerial: ""
    property string postcode: ""
    property string address: ""
    property string addressLife: ""
    property string company: ""
    property string jobname: ""
    property string phone: ""
    property string email: ""
    property string photo: ""
    property string description: ""

    Image {
        id: ava
        source: "file:///A:/Desktop/РЧ/Ресурсы/Сессия 2/drivers/drivers/photo/002-cool-5.png"
        fillMode: Image.PreserveAspectFit

        anchors.top: parent.top
        anchors.left: parent.left
        anchors.margins: parent.width/20

        width: parent.width/10
        height: width
    }
    Button{
        text: qsTr("изменить")

        anchors.top:ava.bottom
        anchors.left: ava.left
        anchors.topMargin:parent.height/40

        width: ava.width
        height: parent.height/25

        background: Rectangle{
            color: "#DCDCDC"
            radius: 8
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
        font.pointSize: height/2

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
        font.pointSize: height/2

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
        text: qsTr("серия и номер паспорта :")
        font.pointSize: parent.height/40

        anchors.top: middleNameInput.bottom
        anchors.left: nameInput.left
        anchors.topMargin: parent.height/20
    }
    TextField{
        id:passportSerialInput
        font.pointSize: height/2
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
        id: postcodeText
        text: qsTr("почтовый индекс :")
        font.pointSize: parent.height/40

        anchors.top: passportSerialInput.bottom
        anchors.left: nameInput.left
        anchors.topMargin: parent.height/20
    }
    TextField{
        id:postcodeInput
        font.pointSize: height/2
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
        font.pointSize: height/2
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

    Text {
        id: addressLifeText
        text: qsTr("адрес проживания :")
        font.pointSize: parent.height/40

        anchors.top: addressInput.bottom
        anchors.left: nameInput.left
        anchors.topMargin: parent.height/20
    }
    TextField{
        id:addressLifeInput
        font.pointSize: height/2
        horizontalAlignment: Text.AlignHCenter

        anchors.left: ava.right
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
        anchors.left: nameInput.left
        anchors.topMargin: parent.height/20
    }
    TextField{
        id:companyInput
        font.pointSize: height/2
        horizontalAlignment: Text.AlignHCenter

        anchors.left: ava.right
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
        anchors.left: nameInput.left
        anchors.topMargin: parent.height/20
    }
    TextField{
        id:jobnameInput
        font.pointSize: height/2
        horizontalAlignment: Text.AlignHCenter

        anchors.left: ava.right
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
        anchors.left: nameInput.left
        anchors.topMargin: parent.height/20
    }
    TextField{
        id:phoneInput
        font.pointSize: height/2
        horizontalAlignment: Text.AlignHCenter

        anchors.left: ava.right
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
        anchors.left: nameInput.left
        anchors.topMargin: parent.height/20
    }
    TextField{
        id:emailInput
        font.pointSize: height/2
        horizontalAlignment: Text.AlignHCenter

        anchors.left: ava.right
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
        text: qsTr("email :")
        font.pointSize: parent.height/40

        anchors.top: emailInput.bottom
        anchors.left: nameInput.left
        anchors.topMargin: parent.height/20
    }
    TextField{
        id:descriptionInput
        font.pointSize: height/2
        horizontalAlignment: Text.AlignHCenter

        anchors.left: ava.right
        anchors.top:descriptionText.bottom
        anchors.leftMargin: parent.width/20

        width: parent.width/1.6
        height: parent.height/15

        background: Rectangle{
            color: "#DCDCDC"
            radius: 8
        }

    }
}
