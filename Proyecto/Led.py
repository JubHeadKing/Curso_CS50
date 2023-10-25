import RPi.GPIO as GPIO
import time

#GPIO.setwarnings(False)

#Board Type#
GPIO.setmode(GPIO.BCM)

#Target PIN#
LED_RED_PIN = 17
LED_YELLOW_PIN = 27
LED_GREEN_PIN = 22
BUZZER_PIN  = 23

#Pin Setup#
GPIO.setup(LED_RED_PIN, GPIO.OUT)
GPIO.setup(LED_YELLOW_PIN, GPIO.OUT)
GPIO.setup(LED_GREEN_PIN, GPIO.OUT)
GPIO.setup(BUZZER_PIN, GPIO.OUT)

#Inicianization#
GPIO.output(LED_RED_PIN, GPIO.LOW)
GPIO.output(LED_YELLOW_PIN, GPIO.HIGT)
GPIO.output(LED_GREEN_PIN, GPIO.LOW)
GPIO.output(BUZZER_PIN, GPIO.LOW)


def activarAlarma():
    GPIO.output(LED_RED_PIN, GPIO.HIGT)
    GPIO.output(LED_YELLOW_PIN, GPIO.LOW)
    GPIO.output(LED_GREEN_PIN, GPIO.LOW)
    GPIO.output(BUZZER_PIN, GPIO.HIGT)

def desactivarAlarma():
    GPIO.output(LED_RED_PIN, GPIO.LOW)
    GPIO.output(LED_YELLOW_PIN, GPIO.HIGT)
    GPIO.output(LED_GREEN_PIN, GPIO.HIGT)
    GPIO.output(BUZZER_PIN, GPIO.LOW)

def alarmaEspera():
    GPIO.output(LED_RED_PIN, GPIO.LOW)
    GPIO.output(LED_YELLOW_PIN, GPIO.HIGT)
    GPIO.output(LED_GREEN_PIN, GPIO.LOW)
    GPIO.output(BUZZER_PIN, GPIO.LOW)

#Final Clean Up
GPIO.cleanup()