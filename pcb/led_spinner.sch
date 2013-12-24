EESchema Schematic File Version 2
LIBS:w_microcontrollers
LIBS:power
EELAYER 24 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ATMEGA48_88_168_328P-32SMD U?
U 1 1 52B73885
P 5350 3700
F 0 "U?" H 5500 4650 60  0000 C CNN
F 1 "ATMEGA48_88_168_328P-32SMD" H 6150 4550 60  0000 C CNN
F 2 "" H 5350 3700 60  0000 C CNN
F 3 "" H 5350 3700 60  0000 C CNN
	1    5350 3700
	1    0    0    -1  
$EndComp
$Comp
L PWR_FLAG #FLG?
U 1 1 52B94C2D
P 700 7450
F 0 "#FLG?" H 700 7545 30  0001 C CNN
F 1 "PWR_FLAG" H 700 7630 30  0000 C CNN
F 2 "" H 700 7450 60  0000 C CNN
F 3 "" H 700 7450 60  0000 C CNN
	1    700  7450
	-1   0    0    1   
$EndComp
$Comp
L PWR_FLAG #FLG?
U 1 1 52B94C52
P 950 7500
F 0 "#FLG?" H 950 7595 30  0001 C CNN
F 1 "PWR_FLAG" H 950 7680 30  0000 C CNN
F 2 "" H 950 7500 60  0000 C CNN
F 3 "" H 950 7500 60  0000 C CNN
	1    950  7500
	1    0    0    -1  
$EndComp
$Comp
L +BATT #PWR?
U 1 1 52B94C6A
P 700 7450
F 0 "#PWR?" H 700 7400 20  0001 C CNN
F 1 "+BATT" H 700 7550 30  0000 C CNN
F 2 "" H 700 7450 60  0000 C CNN
F 3 "" H 700 7450 60  0000 C CNN
	1    700  7450
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 52B94C7E
P 950 7550
F 0 "#PWR?" H 950 7550 30  0001 C CNN
F 1 "GND" H 950 7480 30  0001 C CNN
F 2 "" H 950 7550 60  0000 C CNN
F 3 "" H 950 7550 60  0000 C CNN
	1    950  7550
	1    0    0    -1  
$EndComp
Wire Wire Line
	950  7500 950  7550
Wire Notes Line
	550  7250 1100 7250
Wire Notes Line
	1100 7250 1100 7700
Wire Notes Line
	1100 7700 550  7700
Wire Notes Line
	550  7700 550  7250
$EndSCHEMATC
