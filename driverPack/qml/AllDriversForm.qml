import QtQuick 2.0
import QtQuick.Controls 2.5

import Driver 1.0

Rectangle{
    gradient: Gradient{
        GradientStop{position: 0.0;color: "#ffffff"}
        GradientStop{position: 1.0;color: "#b7b7b7"}
    }

    ScrollView{
        id:scrollForm
        anchors.centerIn: parent

        width: parent.width/1.1
        height: parent.height/1.1
        ListView{
            anchors.fill: parent
            model: DriverModel{
                list:driverList
            }
            spacing:parent.height/30
            delegate: DriverForm{
                width: scrollForm.width/1.1
                height: scrollForm.height/6
                name:model.name
                middleName:model.middleName
                photo:model.photo

                idDriver:model.id
            }
        }
    }
}
