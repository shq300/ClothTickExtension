# ClothTickExtension
Simple Unreal Engine plugin, which adds an ability to Set Cloth Simulation to be Tickable even when the Game is Paused - callable from Blueprints.

## General Information
Current Engine options doesn't allow to change the Cloth Simulation *bTickEvenWhenPaused* parameter inside BPs - this plugin will help with that!  
It's useful for example when you need to pause the game and still want to keep SkeletalMesh ticking including Cloth Physics.  

## Installation
- ## Clone from Github
Clone this repository into your project's /Plugins folder, make one if it doesn’t exist, then open your project.

- ## Download from Marketplace
Download Cloth Tick Extension from [Marketplace Link] and install it in the Engine through Epic Games Launcher.

- ## Setup
Open your project and Enable the plugin in **Edit→Plugins→Project/Cloth Simulation**.
![cloth-tick-extension-enable](https://res.cloudinary.com/dimxcvzvb/image/upload/v1768945667/ClothTickExt_enableplugin_v08hsc.png)

## Usage
This plugin is primarily intended for Paused Game scenarios, most commonly in conjunction with UI systems.
Typical use cases include paused menus such as Inventory, Character, or Player Preview screens, where the game world is paused but cloth simulation must remain active on the player or other displayed characters.

- In order to set Tickable When Paused for the Cloth you need to pass an Array of SkeletalMesh Components that actually uses (or may use) Cloth Simulation when the game will be paused. 
- Make sure that the option 'Tick Even When Paused' is checked for the connected SkeletalMesh and the owning Actor itself.
- You can call the function only once on Begin Play (like in the example below) or toggle it at any given time when the game is running.
![Image](https://res.cloudinary.com/dimxcvzvb/image/upload/v1768907000/ClothTickPrev_hhc1ea.png)  
⚠️ When using Scene Capture Components, ensure that Tick Even When Paused is enabled and that the Tick Interval remains at its default value (0.0).

Functions from the BPLibrary under *Cloth Tick Extension* Category:  
- ***Set Tickable when Paused Cloth***  
- ***Is Tickable when Paused Cloth***

## Compatibility
This plugin has been tested using: *Windows*.  
Tested Compatible Engine versions:  
**4.26 - 5.7**

## License
This software is under the MIT License.
