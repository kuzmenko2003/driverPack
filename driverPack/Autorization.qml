import QtQuick 2.0
import QtQuick.Controls 2.5

Rectangle{
    id:root

    Text {
        id:loginText
        text: qsTr("логин:")
        font.pointSize: parent.height/40

        anchors.top: parent.top
        anchors.left: login.left
        anchors.topMargin: parent.height/20
    }

    TextField{
        id:login
        font.pointSize: height/2
        horizontalAlignment: Text.AlignHCenter

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top:loginText.bottom

        width: parent.width/1.3
        height: parent.height/15

        background: Rectangle{
            color: "#DCDCDC"
            radius: 8
        }
    }

    Text {
        id:passwdText
        text: qsTr("пароль:")
        font.pointSize: parent.height/40

        anchors.top: login.bottom
        anchors.left: passwd.left
        anchors.topMargin: parent.height/30
    }

        TextField{
            id:passwd
            font.pointSize:height/2
            maximumLength: 30
            horizontalAlignment: Text.AlignHCenter

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top:passwdText.bottom

            width: parent.width/1.3
            height: parent.height/15

            background: Rectangle{
                color: "#DCDCDC"
                radius: 8
            }
        }

    Button{
        id:comeIn
        text: qsTr("autorization")

        anchors.right: passwd.right
        anchors.top: passwd.bottom
        anchors.topMargin: parent.height/20

        width: parent.width/5
        height: parent.height/15

        background: Rectangle{
            color: "#DCDCDC"
            radius: 8
        }

        onClicked: {
            autorization.toAutorization(login.text,passwd.text);
        }
    }
    Text {
        id: messageBox
        text: qsTr("")
        font.pointSize: parent.height/40
        horizontalAlignment: Text.AlignHCenter
        wrapMode: Text.WordWrap


        width: passwd.width

        anchors.top: comeIn.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: parent.height/10

        Connections{
            target: autorization
            function onSentMessage(message){
                messageBox.text = message
            }
        }
    }
}





















