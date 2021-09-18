import QtQuick 2.0
import QtQuick.Controls 2.5

Rectangle{
    property string name: ""
    property string middleName: ""
    property string photo: ""

    property int idDriver: 0

    color: "#DCDCDC"
    radius: 14

    Image {
        id: ava
        source: photo

        width: height
        height: parent.height/1.3

        anchors.left: parent.left
        anchors.top: parent.top
        anchors.topMargin: parent.height/2 - width/2
        anchors.leftMargin: parent.width/20

    }
    Text {
        id: nameText
        text: name
        font.pointSize: parent.height/7

        anchors.top: ava.top
        anchors.left: ava.right
        anchors.leftMargin: parent.width/20
    }
    Text {
        id: middleNameText
        text: middleName
        font.pointSize: parent.height/7

        anchors.top: nameText.bottom
        anchors.left: ava.right
        anchors.leftMargin: parent.width/20
    }

    Button{
        id:moreDetails
        text: qsTr("подробнее")

        anchors.top: ava.top
        anchors.right: parent.right
        anchors.rightMargin: parent.width/20

        height: parent.height/3
        width: parent.width/6

        background: Rectangle{
            color: "#A9A9A9"
            radius: 8
        }

        onClicked: {
            driverList.moreDetails(idDriver)
            appEngine.toCardDriverFormSlot();
        }
    }

}
