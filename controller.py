import serial
import time

arduino = serial.Serial(port='COM5', baudrate=115200, timeout=.1)


def write_read(x):
    arduino.write(bytes(x, 'utf-8'))
    time.sleep(0.1)
    return arduino.readline()


while True:
    arduino_input = input("Turn on LED (1-3): ")
    arduino_resp = write_read(arduino_input)
    print(str(arduino_resp))
