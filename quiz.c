#include <stdio.h>
#include "/mnt/d/structuredPrograming2A/unit2/folderTest/utils.h"

int main (){

    ROBOT markovito;
    markovito.name = "markovito";
    markovito.type = "serviceRobot";
    markovito.heght = 1.2;
    markovito.weight = 2.5;
    markovito.degreesOffFredom = 3;

    markovito.sayHelloToRobot = sayHelloToRobot;

    ROBOT tiago;
    tiago.name = "tiago";
    tiago.type = "serviceRobot";
    tiago.heght = 1.7;
    tiago.weight = 2.8;
    tiago.degreesOffFredom = 7;
    tiago.sayHelloToRobot = sayHelloToRobot;

    markovito.sayHelloToRobot(tiago);
}