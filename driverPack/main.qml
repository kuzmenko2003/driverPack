import QtQuick 2.15
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

ApplicationWindow{
    width: 640
    height: 480
    visible: true
    title: qsTr("Driver Pack")

    StackView{
        id:mainStackView
        initialItem: carDriverPage
        anchors.fill: parent
    }

    Page{
        id:autorizationPage
        visible: false
        Autorization{
            anchors.fill: parent
        }
    }
    Page{
        id:carDriverPage
        visible: true
        CardDriver{
            anchors.fill: parent
        }
    }
}
