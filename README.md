# Pairing-2-HC-05-Bluetooth-Module
This github includes the complete code and circuit for communicating between 2 Arduino Wirelessly by using 2 HC-05 Bluetooth Module.

Firstly we have to pair the 2 Bluetooth devices with each other and after that you have to procees with the above circuit and code.

AT Commands for Slave Bluetooth Module are:
1) AT
2) AT+ROLE=0
3) AT+ADDR?

AT Commands for Master Bluetooth Module are:
1) AT
2) AT+ROLE=1
3) AT+BIND=00XX,XX,XXXXXX (MAC Address of Slave Bluetooth Module)

To know more please watch out this Video: https://youtu.be/KEaU2RZ8WOI
