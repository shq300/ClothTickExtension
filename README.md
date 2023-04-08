# ClothTickExtension
Simple Unreal Engine plugin, which adds an ability to Set Cloth Simulation to be Tickable even when the Game is Paused - callable from Blueprints.

## General Information
Current Engine options doesn't allow to change the Cloth Simulation *bTickEvenWhenPaused* parameter inside BPs - this plugin will help with that!  
It's useful for example when you need to pause the game and still want to keep SkeletalMesh ticking including Cloth Physics.  

## Installation
***Pre-compiled (Win64)***  
Clone or download the repository into your project's Plugin directory and relaunch the Editor.

## Usage
In order to set Tickable When Paused for the Cloth you need to pass an Array of SkeletalMesh Components.  
Make sure that the option 'Tick Even When Paused' is checked for the connected SkeletalMesh and the owning Actor itself.
![Image](/docs/ClothTickPrev.png)  
Functions from the BPLibrary under *Cloth Tick Extension* Category:  
- ***Set Tickable when Paused Cloth***  
- ***Is Tickable when Paused Cloth***

## Compatibility
This plugin has been tested using: *Windows*.  
Tested Compatible Engine versions:  
- 4.26  
- 4.27  
- 5.0
- 5.1

## License
This software is under the MIT License.
