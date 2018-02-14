#ifndef SETUP_C
#define SETUP_C

void setup() {
#pragma config(Sensor, in1,    rightPot,       sensorAnalog)
#pragma config(Sensor, in2,    leftPot,        sensorAnalog)
#pragma config(Sensor, in3,    lClawPot,        sensorAnalog)
#pragma config(Sensor, in4,    yaw,            sensorNone)
#pragma config(Sensor, in5,    xAxis,          sensorAccelerometer)
#pragma config(Sensor, in6,    yAxis,          sensorAccelerometer)
#pragma config(Sensor, in7,    zAxis,          sensorAccelerometer)
#pragma config(Sensor, in8,    rClawPot,       sensorPotentiometer)
#pragma config(Sensor, dgtl1,  leftEn,         sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  rightEn,        sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  autonSwitch,    sensorTouch)
#pragma config(Sensor, dgtl6,  fieldSide,      sensorTouch)
#pragma config(Sensor, dgtl7,  skillsSwitch,   sensorTouch)
#pragma config(Motor,  port1,           fL,            tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           bL,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           topL,          tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           clawL,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           clawR,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           botL,          tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           botR,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           topR,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           bR,            tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          fR,            tmotorVex393_HBridge, openLoop, reversed)
}
//Right outer lift motor is in port 1
//Back left drive is in port 2
//Top left lift is in port 3 (C)
//Left claw motors are in port 4
//Right Claw is in port 5 (A)
//Bottom left lift
//Bottom right lift motors are in port 7 (D)
//Front right drive is in port 8
//Back right drive is in port 9 (B)
//Outer right is in port 10

//X axis is front and back
//Y axis is left and right
//Z axis is up and down

#endif SETUP_C
