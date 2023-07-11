# Ardity Arm
## Prerequisites
* [Ardity](https://assetstore.unity.com/packages/tools/integration/ardity-arduino-unity-communication-made-easy-123819)
* Unity version 22.3

## Unity Setup
* API compatibility ->  <b>.NET Framework </b> ....(/build_settings/player_settings)
* Ardity Import -> import ardity assets
* Use Prefab ->  <b>SerialController </b>....    (Assets/Ardity/Prefabs/SerialController.prefab)
* connect arduino and upload [code](https://github.com/adijams01/Unity/blob/main/ardity_arm/ardity_arm.ino) to arduino from Arduino IDE
* check ports (COM5) and baud rate (9600) is same at both places in arduino and unity
* click on play
* press a for action 1, press b for action 2...
