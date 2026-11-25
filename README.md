# Campus Shuttle Fare Calculator

## About the Project

This is a simple **Campus Shuttle Fare Calculator** made using C language.

The main purpose of this project is to calculate the fare of a passenger travelling from one stop to another. The program also gives a **20% discount to students**.

## Stops Available

The program contains the following stops:

1. Campus
2. Clock Tower
3. ISBT
4. Rajpur Road
5. Railway Station
6. Airport

## How the Program Works

First, the program shows all the available stops.

The user has to enter the boarding stop and destination stop.

After that, the program asks whether the passenger is a student or not.

- Enter `1` for Yes
- Enter `0` for No

If the passenger is a student, a **20% discount** is given on the normal fare.

Finally, the program displays:

- Base Fare
- Student Concession
- Final Fare

## Example

```text
CAMPUS SHUTTLE FARE CALCULATOR

DESTINATIONS
1. CAMPUS
2. Clock Tower
3. ISBT
4. Rajpur Road
5. Railway Station
6. Airport

Enter your boarding stop: 1
Enter destination stop: 4

Are you a student ? (1 for Yes, 0 for No): 1

Journey from Stop 1 to Stop 4
Base fare: Rs. 300.00
Concession: Rs. 60.00
Final Fare: Rs. 240.00
```

## Concepts Used

In this project, I have used some basic concepts of C programming:

- Variables
- `if` statements
- 2D Array
- `scanf()`
- `printf()`
- Arithmetic operations

## Student Discount

Students get a **20% concession** on the base fare.

For example, if the fare is Rs. 300:

```text
Discount = 20% of 300 = Rs. 60
Final Fare = 300 - 60 = Rs. 240
```

## Language Used

C Programming Language

## Conclusion

This project helped me understand how basic C concepts like arrays, conditions, user input and calculations can be used to make a simple real-life application.
