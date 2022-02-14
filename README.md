# AutonomousRoverMk2
## Introduction
Welcome to my Autonomous Rover Mk2 project, the Mk1 of this project is not available on github as it was me getting used to the basics of how to create an autonmous rover, now that i have the hang of things, i have decided to make Mk2 public, this will allow you to work with my project and help make it more autnomous than before. I personally started on this project over a year ago, with Mk1 being a successess i have found it suitable to move onto Mk2, where i have used classes and split up the code into multiple files, to make it easier to use and to process.
## Project Outline
* The Rover is to be fully Autonomous by using only sensor data and sensor fusion to be able to process all the information coming in from the sensors.
* Mk2 may require a larger board to process all of the information, with Mk1 using an Arduino Nano, Mk2 may require an Arduino Mega, with future generations, such as Mk3 potentially requiring an STM32 Nucleo board instead.
* The Rover is currently 2 Wheeled, and will remain so for Mk2 and potentially for Mk3, whilst we perfect the sensor data and sensor fusion.
* The current design of the rover will be revisited for Mk2 to improve accuracy, as Mk1 currently arcs when it moves in a straight line.
* Improvements on Power Management and Storage to be potentially made in Mk2, if not Mk3.
## Project Details
As explained in the Introduction, the Autonomous Rover started off with Mk1, which was a simple test bench to see how things would work, Mk2 is now taking sensor data a step further, by allowing for multiple sources of data to come into the rover, it will be able to make better decisions on where to move to. It will also not have to rely soley on just Ultrasonic Sensor now, which has been found to be problematic in crowded areas. The Autonomous rover, currently also uses a powerbank which stores 5000mAh, with newer varients, LiPo Batteries may be a better alternartive to the current PowerBank being used.
