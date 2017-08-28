import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtCharts 2.1
import QtQuick.Dialogs 1.1

ApplicationWindow {
    id: stationPage
    visible: true
    width: 1920
    height: 1080
    title: qsTr("Station Page")
    property int initialX
//    ControlPanel{
//        id: myControlPanel
//        anchors.top: parent.top
//        anchors.bottom: parent.bottom
//        anchors.right: parent.right
//        anchors.rightMargin: 150
//        width: 250
//    }

//        StationPage{
//            id: chartView
//            anchors.top: parent.top
//            anchors.bottom: parent.bottom
//            anchors.left: parent.left
//            width: 1400
//        }

//    Button
//    {
//        id:testBUtton
//        width: 200
//        height: 100

//        x:50
//        y: 50
//    }


    Repeater
    {
        id: thisRepeater
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        width: 1000
        model: myStationModel
        Button
                {
                    id: station
                    height:50
                    width: 50
                    text: model.modelData.stationName
                    x: model.modelData.left
                    y: model.modelData.top
                    onClicked:
                    {
                        popup.x = station.x
                        popup.y = station.y
                        popup.open()
                        informLabel.text = station.text
                    }

                }
    }

    Popup {
          id: popup
          x: 200
          y: 300
          width: 600
          height: 600
          modal: true
          focus: true
          closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent

          ColumnLayout
          {
              anchors.fill: parent

                      StationPage{
                          id: chartView
                          anchors.top: parent.top
                          anchors.left: parent.left
                          anchors.leftMargin: 40
                          anchors.topMargin: 20
                          width: 500
                          height: 500
                      }

                      Label
                      {
                          id: informLabel

                      }
              Button
              {
                  text:"Close"
                  onClicked:
                  {
                      popup.close()
                  }
              }
          }




      }

//    GridView{
//        id: thisList
//        anchors.top: parent.top
//        anchors.bottom: parent.bottom
//        anchors.left: parent.left
//        width: 1000

//        model: myStationModel
//        delegate: Button
//        {
//            id: index
//            height:50
//            width: 50
//            text: model.modelData.stationName
//            x: model.modelData.left
//            y: model.modelData.top
//        }
//    }

//    Label
//    {
//        id: testLabel
//        text: "Test"
//        font.pixelSize: 40
//        color: "white"
//    }

}

