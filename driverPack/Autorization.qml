import QtQuick 2.0
import QtQuick.Controls 2.5

Rectangle{
    id:root
    Rectangle{
        id:loginRec

        color: "#DCDCDC"
        radius: 8

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top:parent.top
        anchors.topMargin: parent.height/20

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

    Rectangle{
        id:passwdRec

        color: "#DCDCDC"
        radius: 8

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top:loginRec.bottom
        anchors.topMargin: parent.height/20

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
    }
}
