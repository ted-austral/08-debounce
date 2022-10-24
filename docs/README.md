#       Project 08-debounce

##      Hardware

    ESP32 development board  
    2 Tact switch  
    Jumper wire  
    Filter capacitor  

##      Connections

    From GND and from 3V3 on ESP32 development board to both negative (blue) and positive rails of one side  

    From GPIO18 to one side of Tact switch 0  
    From the other side of Tact switch to negative (blue) rail  
    From GPIO33 to one side of Tact switch 1  
    From the other side of Tact switch to negative (blue) rail  

    Between both power supply rails (red and blue, a capacitor in order to filter 3V3 power supply  

##      Web documents

   [The simplest button debounce solution](https://www.e-tinkers.com/2021/05/the-simplest-button-debounce-solution/)  
   [A Guide to debouncing. Part 2](http://www.ganssle.com/debouncing-pt2.htm)  

##      debounce library github

   [e-tinkers/button](https://github.com/e-tinkers/button)




