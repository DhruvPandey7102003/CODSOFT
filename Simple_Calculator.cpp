// develop a calculator program that performs basic arithmetic operations such as addition,substraction
// multiplication and division.allow the user to input two numbers and choose an operation to perform.


// Approach: 
//          step 1:- Ask the user to enter the choice as per your number of case.
//          step 2:- using switch case statement create number of case as per required here in my case 
//                   I have given to add,sub,mul and div so i have create 4 cases.

// Time Complexity :- O(1)
// Auxilary Space Complexity :- O(1)

    
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float Num_1, Num_2, Addition, Substraction, Multiplication, Division;
    int Choice;
    cout << "Enter First Num_1" << endl;
    cin >> Num_1;
    cout << "Enter Second Num_2";
    cin >> Num_2;
    cout << "Enter your Choice from 1 to 4";
    cin >> Choice;
    switch (Choice)
    {
    case 1:
        cout << "You Have Choosen Addition" << endl;
        Addition = Num_1 + Num_2;
        cout << Addition;
        break;

    case 2:
        cout << "You Have Choosen Substraction" << endl;
        Substraction = Num_1 - Num_2;
        cout << Substraction;
        break;

    case 3:
        cout << "You Have Choosen Multiplication" << endl;
        Multiplication = Num_1 * Num_2;
        cout << Multiplication;
        break;

    case 4:
        cout << "You Have Choosen Division" << endl;
        Division = Num_1 / Num_2;
        cout << Division;
        break;

    default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}
