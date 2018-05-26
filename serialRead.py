#!/usr/bin/python2
import serial
import sys

device_port = serial.Serial(sys.argv[1], 9600, timeout=30)
while 1:
    text_file = open("flag.txt", "w")
    answer = device_port.read(6)
    print answer
    text_file.close()
   
device_port.close()

