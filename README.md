# read-serial    
Reading serial port in c++/python/shell programs    

The repo contains code for reading serial port in C++/python/shell programs. It can be very useful in communication with embedded devices or sensors.    

#  C++    
## Compile     
g++ serialRead.cpp -o main    

## Usage    
./main serial_port     
(Sample:  ./main /dev/ttyUSB0 , where /dev/ttyUSB0 is the port to be read)     

#  Python    
## Usage   
python serialRead.py /dev/USB0    

#  Shell    
## Usage    
./serialRead.sh /dev/ttyUSB0    

