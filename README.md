# Basic-Input-Output-operations

AIM 1:
Write a program to print hello world



THEORY:
This simple C++ program demonstrates how to print "Hello World" to the console.
In C++, the `iostream` library is used to handle input and output operations. The `cout` object, part of the `iostream` library, is used to print data to the console. To print "Hello World," we use the `<<` operator to insert the string "Hello World" into the `cout` stream, and then we flush the stream to display the text on the console.




ALGORITHM:

1.#include : This line includes the Input/Output Stream library, which provides functions like cout and endl for input and output operations.

2.int main() { ... }: This is the main function of your C++ program. It is the entry point of your program, and execution begins here.

3.std::cout: This is the standard C++ output stream, which is used to display output on the console.

4."Hello, World!": This is the text you want to print. It is enclosed in double quotation marks to represent a string.

5.<<: This is the output stream operator, used to insert the string "Hello, World!" into the std::cout stream.

6.std::endl: This is used to insert a newline character and flush the output buffer. It ensures that "Hello, World!" is displayed on a new line.

7.return 0;: This line indicates the successful completion of the main function. In C++, it's a convention to return 0 to indicate a successful execution of the program.

8.Compile and run this code, and it will print "Hello, World!" to the console.









AIM 2: 

The aim of this program is to demonstrate how to create a simple calculator in C++ that can perform basic arithmetic operations.


THEORY:

In C++, we can create a basic calculator by taking input from the user, performing the desired arithmetic operation, and then displaying the result. This program uses standard input/output operations and basic C++ arithmetic operators to achieve this functionality.


ALGORITHM:

1.Start the program.

2.Display a menu to the user with options for different arithmetic operations (e.g., addition, subtraction, multiplication, division). Each option should be associated with a unique numeric code (e.g., 1 for addition, 2 for subtraction, etc.).

3.Prompt the user to enter the numeric code corresponding to the desired operation.

4.Read and store the user's choice.

5.Prompt the user to enter the first number for the calculation and store it in a variable (e.g., num1).

6.Prompt the user to enter the second number for the calculation and store it in another variable (e.g., num2).

7.Use a switch statement to perform the appropriate arithmetic operation based on the user's choice:

8.If the user's choice is 1, add num1 and num2 and store the result in a variable (e.g., result = num1 + num2).

9.If the user's choice is 2, subtract num2 from num1 and store the result in result.

10.If the user's choice is 3, multiply num1 and num2 and store the result in result.

11.If the user's choice is 4, check if num2 is not equal to zero. If it's not, divide num1 by num2 and store the result in result. If num2 is zero, display an error message indicating that division by zero is not allowed.

12.Display the result of the calculation to the user.

13.Ask the user if they want to perform another calculation or exit the program.

14.If the user chooses to perform another calculation, return to step 3. If the user chooses to exit, end the program.

15.End the program.

This algorithm outlines the basic structure of a calculator program using switch cases. It allows the user to choose an operation, enter two numbers, perform the calculation, and display the result. Additionally, it includes error handling for division by zero and provides the option to perform multiple calculations or exit the program.




