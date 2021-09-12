import QtQuick 2.0
import QtQuick.Controls 2.5

Rectangle{
    id:root

    Text {
        id:loginText
        text: qsTr("логин:")
        font.pointSize: parent.height/40

        anchors.top: parent.top
        anchors.left: loginRec.left
        anchors.topMargin: parent.height/20
    }

    Rectangle{
        id:loginRec

        color: "#DCDCDC"
        radius: 8

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top:loginText.bottom
        //anchors.topMargin: parent.height/30

        width: parent.width/1.3
        height: parent.height/15

        TextInput{
            id:login
            font.pointSize: parent.height/2
            maximumLength: 30
            horizontalAlignment: Text.AlignHCenter


            anchors.fill: parent
        }
    }

    Text {
        id:passwdText
        text: qsTr("пароль:")
        font.pointSize: parent.height/40

        anchors.top: loginRec.bottom
        anchors.left: passwdRec.left
        anchors.topMargin: parent.height/30
    }

    Rectangle{
        id:passwdRec

        color: "#DCDCDC"
        radius: 8

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top:passwdText.bottom
        //anchors.topMargin: parent.height/20

        width: parent.width/1.3
        height: parent.height/15

        TextInput{
            id:passwd
            font.pointSize: parent.height/2
            maximumLength: 30
            horizontalAlignment: Text.AlignHCenter


            anchors.fill: parent
        }
    }
    Button{
        id:comeIn
        text: qsTr("autorization")

        anchors.right: passwdRec.right
        anchors.top: passwdRec.bottom
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


        width: passwdRec.width

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





















