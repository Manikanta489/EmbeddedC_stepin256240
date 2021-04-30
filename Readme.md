# Embedded C Mini Project

# Activities Description

|Activity|Description|
|:--:|:--:|
|Activity 1| Blink the LED when the passenger is in the seat and the heater is pressed|
|Activity 2| Convert the analog signal from the sensor to the digital value|
|Activity 3| Generate the PWM signal according to the converted digital value|
|Activity 4| Send the temperature value to the serial monitor using UART protocol|

# Activity 1

## In Action

|Case 1: When Both Switches are OFF|Case 2: When Switch 1 is OFF and Switch 2 is ON|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/61261829/115930043-6de23600-a4a6-11eb-9b26-7124facd5505.png)|![image](https://user-images.githubusercontent.com/61261829/115930127-92d6a900-a4a6-11eb-8543-bde89173b492.png)|

|Case 3: When Both Switch 1 is ON and Switch 2 is ON|Case 4: When Both Switches are ON|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/61261829/115930263-c6b1ce80-a4a6-11eb-9849-93b9a62fab5c.png)|![image](https://user-images.githubusercontent.com/61261829/115930289-d16c6380-a4a6-11eb-82f5-6a4c09a9c281.png)| ![image](https://user-images.githubusercontent.com/61261829/116689761-16782480-a9d6-11eb-886a-bb9877016e00.png)


# Activity 2 

## In Action

![image](https://user-images.githubusercontent.com/61261829/116450392-e0715e00-a878-11eb-81a1-1e15dda5220c.png)

# Activity 3

## In Action

|Case 1: Duty Ratio = 0.2 |
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116689398-b1243380-a9d5-11eb-9564-c2cd473cc5e9.png)|

|Case 2: Duty Ratio = 0.4|
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116689499-d5801000-a9d5-11eb-97b9-6c23e14f08a3.png)|


|Case 3: Duty Ratio = 0.7 |
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116689834-30196c00-a9d6-11eb-907d-9586ce5f3912.png)|

|Case 4: Duty Ratio = 0.95|
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116689962-5dfeb080-a9d6-11eb-80c5-823ee46b98d4.png)|





#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Build](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/build.yml/badge.svg)](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/build.yml)|[![Cpp_Check](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/cpp_check.yml/badge.svg)](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/cpp_check.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e5facfbcad3a46f283b859d701dbe235)](https://www.codacy.com/gh/Manikanta489/EmbeddedC_stepin256240/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Manikanta489/EmbeddedC_stepin256240&amp;utm_campaign=Badge_Grade)
