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

    ScrollView{
        anchors.fill: parent

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

            anchors.bottom: nameRec.top
            anchors.left: nameRec.left
        }
        Rectangle{
            id:nameRec

            color: "#DCDCDC"
            radius: 8

            anchors.left: ava.right
            anchors.top:ava.top
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            TextInput{
                id:nameInput
                font.pointSize: parent.height/2
                maximumLength: 30
                horizontalAlignment: Text.AlignHCenter


                anchors.fill: parent
            }
        }

        Text {
            id: middleNameText
            text: qsTr("отчество :")
            font.pointSize: parent.height/40

            anchors.top: nameRec.bottom
            anchors.left: nameRec.left
            anchors.topMargin: parent.height/40
        }
        Rectangle{
            id:middleNameRec

            color: "#DCDCDC"
            radius: 8

            anchors.left: ava.right
            anchors.top:middleNameText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            TextInput{
                id:middleNameInput
                font.pointSize: parent.height/2
                maximumLength: 30
                horizontalAlignment: Text.AlignHCenter


                anchors.fill: parent
            }
        }

        Text {
            id: passportSerialText
            text: qsTr("серия и номер паспорта :")
            font.pointSize: parent.height/40

            anchors.top: middleNameRec.bottom
            anchors.left: nameRec.left
            anchors.topMargin: parent.height/40
        }
        Rectangle{
            id:passportSerialRec

            color: "#DCDCDC"
            radius: 8

            anchors.left: ava.right
            anchors.top:passportSerialText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            TextInput{
                id:passportSerialInput
                font.pointSize: parent.height/2
                maximumLength: 30
                horizontalAlignment: Text.AlignHCenter


                anchors.fill: parent
            }
        }

        Text {
            id: postcodeText
            text: qsTr("почтовый индекс:")
            font.pointSize: parent.height/40

            anchors.top: passportSerialRec.bottom
            anchors.left: nameRec.left
            anchors.topMargin: parent.height/40
        }
        Rectangle{
            id:postcodeRec

            color: "#DCDCDC"
            radius: 8

            anchors.left: ava.right
            anchors.top:postcodeText.bottom
            anchors.leftMargin: parent.width/20

            width: parent.width/1.6
            height: parent.height/15

            TextInput{
                id:postcodeInput
                font.pointSize: parent.height/2
                maximumLength: 30
                horizontalAlignment: Text.AlignHCenter


                anchors.fill: parent
            }
        }

    }
}
