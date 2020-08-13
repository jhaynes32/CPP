#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

int main () {
/* 
1. Write a program to prompts for income, then displays the initial amount, the amount after deductions and the deducted amount.
*/


    const double tax1 = .10,
                 tax2 = .20,
                 tax3 = .30,
                 tax4 = .35,
                 tax5 = .40;

    
    double total_tax, gross_income, net_income;

    cout << "Please enter total income: $";
    cin >> gross_income;

    if (gross_income < 0) {
        cout << "You've lost money.";
    }

    if (gross_income >=0 && gross_income <= 30000) {
        net_income = gross_income; 
        cout << "Pre-tax income: $" << fixed << showpoint << setprecision(2) << gross_income <<  endl;
        cout << "Your net income will be: $" << fixed << showpoint << setprecision(2) << net_income << endl;   
    }

    else if (gross_income >=30000.01 && gross_income <= 50000) {
        total_tax = gross_income * tax1;
        net_income = gross_income - total_tax;
        cout << "Total Tax Amount: $" << total_tax << endl;
        cout << "Pre-tax income: $" << fixed << showpoint << setprecision(2) << gross_income <<  endl;
        cout << "Your net income will be: $" << fixed << showpoint << setprecision(2) << net_income << endl;
    }

    else if (gross_income >=50000.01 && gross_income <= 100000) {
        total_tax = (20000 * tax1) + ((gross_income - 50000) * tax2);
        net_income = gross_income - total_tax;
        cout << "Total Tax Amount: $" << total_tax << endl;
        cout << "Pre-tax income: $" << fixed << showpoint << setprecision(2) << gross_income <<  endl;
        cout << "Your net income will be: $" << fixed << showpoint << setprecision(2) << net_income << endl;
    }

    else if (gross_income >=100000.01 && gross_income <= 200000) {
        total_tax = (20000 * tax1) + (50000 * tax2) + ((gross_income - 100000) * tax3);
        net_income = gross_income - total_tax;
        cout << "Total Tax Amount: $" << total_tax << endl;
        cout << "Pre-tax income: $" << fixed << showpoint << setprecision(2) << gross_income <<  endl;
        cout << "Your net income will be: $" << fixed << showpoint << setprecision(2) << net_income << endl;
    }

    else if (gross_income >=200000.01 && gross_income <= 250000) {
        total_tax = (20000 * tax1) + (50000 * tax2) + (10000 * tax3) + ((gross_income - 200000) * tax4);
        net_income = gross_income - total_tax;
        cout << "Total Tax Amount: $" << total_tax << endl;
        cout << "Pre-tax income: $" << fixed << showpoint << setprecision(2) << gross_income <<  endl;
        cout << "Your net income will be: $" << fixed << showpoint << setprecision(2) << net_income << endl;
    }

    else {
        total_tax = (20000 * tax1) + (50000 * tax2) + (10000 * tax3) + (150000 * tax4) + ((gross_income - 250000) * tax5);
        net_income = gross_income - total_tax;
        cout << "Total Tax Amount: $" << total_tax << endl;
        cout << "Pre-tax income: $" << fixed << showpoint << setprecision(2) << gross_income <<  endl;
        cout << "Your net income will be: $" << fixed << showpoint << setprecision(2) << net_income << endl;
    }

    return 0;

}
/*

Output:

Please enter total income: $20000
Pre-tax income: $20000
Your net income will be: $20000.00

Please enter total income: $45000.50
Total Tax Amount: $4500.05
Pre-tax income: $45000.5
Your net income will be: $40500.45

Please enter total income: $75000.89
Total Tax Amount: $7000.18
Pre-tax income: $75000.9
Your net income will be: $68000.71

Please enter total income: $300000.50
Total Tax Amount: $87500.2
Pre-tax income: $300000
*/




/*
2. Write a program prompting user to enter points and determine grade based on given ranges.



    double points;
    char grade;

    cout << "Enter points earned for course: ";
    cin >> points;

    string D_F = "Try Harder Next Time";
    string C = "Good";
    string B = "Very Good";
    string A = "Excellent";

    if (points >=0 && points < 60) {
        grade = 'F';
    }
    else if (points >= 60 && points < 70) {
        grade = 'D';
    }
    else if (points >= 70 && points < 80) {
        grade = 'C';
    }
    else if (points >= 80 && points < 90) {
        grade = 'B';
    }
    else if (points >= 90 && points < 100) {
        grade = 'A';
    }

    switch (grade) {
        case 'F': cout << "Your grade is: " << grade << " " << D_F << endl;
                break;
        case 'D': cout << "Your grade is: " << grade << " " << D_F << endl;
                break;
        case 'C': cout << "Your grade is: " << grade << " " << C << endl;
                break;
        case 'B': cout << "Your grade is: " << grade << " " << B << endl;
                break;
        case 'A': cout << "Your grade is: " << grade << " " << A << endl;
            break;

    }

}

Output:

Enter points earned for course: 95
Your grade is: A Excellent

Enter points earned for course: 85
Your grade is: B Very Good

Enter points earned for course: 75
Your grade is: C Good

Enter points earned for course: 50
Your grade is: F Try Harder Next Time






3. Errors

Syntax errors occur when violating the rules of writing C++ syntax. Like Forgetting brackets or trying to print a variable value without first declaring the variable.

Runtime errors have occurred during program execution like if I accidentally try to divide by 0. 

Logic errors have occurred when the program runs but the desired output is not achieved. 
*/


