/*Sanya Jaitly, 22070123100*/
// Calculator
#include<iostream>
using namespace std;

int main() {
    int a, b, sum, sub, multi, div;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    sum = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;

    cout << "The sum of the two numbers is: " << sum << endl;
    cout << "The subtraction of the two numbers is: " << sub << endl;
    cout << "The multiplication of the two numbers is: " << multi << endl;
    cout << "The division of the two numbers is: " << div << endl;

    return 0;
}

/* Output:
Enter the first number: 678
Enter the second number: 765
The sum of the two numbers is: 1443
The subtraction of the two numbers is: -87
The multiplication of the two numbers is: 518670
The division of the two numbers is: 0*/
