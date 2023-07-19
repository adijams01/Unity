# 6 DOF Robotic Arm integration with unity
## Prerequisites
* [Ardity](https://assetstore.unity.com/packages/tools/integration/ardity-arduino-unity-communication-made-easy-123819)
* Unity version 22.3

## Unity Setup
* API compatibility ->  <b>.NET Framework </b> ....(/build_settings/player_settings)
* Ardity Import -> import ardity assets
* Use Prefab ->  <b>SerialController </b>....    (Assets/Ardity/Prefabs/SerialController.prefab)
* connect arduino and upload [code](https://github.com/adijams01/Unity/blob/main/ardity_arm/6_DOF_ardity_arm/6_DOF_ardity_arm.ino) to arduino from Arduino IDE
* check ports (COM5) and baud rate (9600) is same at both places in arduino and unity
* click on play
* press A for action 1, press B for action 2...

## Circuit Diagram

<img width="432" alt="image" src="https://github.com/adijams01/Unity/assets/92617405/5137382e-ce1c-4b1c-baf6-4ac24875702b">

## Notes
* We have used Serial communication for this project, which gets user input from unity show output in real time through arduino (on Robotic arm)
