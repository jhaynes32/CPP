#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;



/*
int main () {
    // Chapter 3 - generating and limiting random numbers
    unsigned seed = time(0);
    srand(seed);


    // Create an array of 10 elements with the name "counters", which is a variable that holds the starting location of the array.

    int counters[10];


    // Initialize counters to 0
    for (int num = 0; num < 10; num++){
        counters[num] = 0;
    }


    for (int i = 0; i < 10000; i++){
        // rand() returns random number between 0 and largest int computer holds. Limit this number to < 1 by dividing by RAND_MAX, and view the number by making it a double. 

        double x = (double)rand()/ RAND_MAX;
        
        if (x < 0.1){
            counters[0]++;   
        }
        else if (x < 0.2){
            counters[1]++;
        }
        else if (x < 0.3){
            counters[2]++;
        }
        else if (x < 0.4){
            counters[3]++;
        }
        else if (x < 0.5){
            counters[4]++;
        }
        else if (x < 0.6){
            counters[5]++;
        }
        else if (x < 0.7){
            counters[6]++;
        }
        else if (x < 0.8){
            counters[7]++;
        }
        else if (x < 0.9){
            counters[8]++;
        }
        else{
            counters[9]++;
        }

        // cout << x << endl;
        
    }

    // Loop ten times through. Each time through the loop, output one star for every time j is incremented before reaching the element value/n. 

     for(int i = 0; i < 10; i++){

        // cout << "counter " << i + 1 << "\t";
        for(int j = 0; j < counters[i] / 100; j++)
        cout << "*";
        cout << endl;  
    }
    

    

}


Output for j < counters[i] / 100
***********
***********
**********
***********
**********
***********
***********
***********
***********
**********



1b. 


int main() {

    // create seed for random number generator and counter array of 10 elements.     
    unsigned seed = time(0);
    srand(seed);
    int counters[10];

    // initialize array elements to 0.
    for (int num = 0; num < 10; num++){
        counters[num] = 0;
    }



    // Loop 10,000 through. 
    for (int i = 0; i < 10000; i++){

        // declare sum up here so that it can be incremented in the loop below and used in the logic.
        double sum = 0.0;


        // During each of the 10k i-loops, loop through 10 times, generating a random number less than 1, and add that number to the value of sum. This will create a higher frequency of increments for counters 5 and 6 since most of the sum values will be between 6 and 7.
        for (int j = 0; j < 10; j++){

        double x = (double)rand() / RAND_MAX;
        sum += x;
        // cout << x << "+" << endl;
        }

        // cout << "= " << sum << endl;
        // cout << endl;

        if (sum < 1){
            counters[0]++;   
        }
        else if (sum < 2){
            counters[1]++;
        }
        else if (sum < 3){
            counters[2]++;
        }
        else if (sum < 4){
            counters[3]++;
        }
        else if (sum < 5){
            counters[4]++;
        }
        else if (sum < 6){
            counters[5]++;
        }
        else if (sum < 7){
            counters[6]++;
        }
        else if (sum < 8){
            counters[7]++;
        }
        else if (sum < 9){
            counters[8]++;
        }
        else{
            counters[9]++;
        }
     
    }



    // Loop ten times through. Each time through the loop, output one star for every time j is incremented before reaching the final element value (which is incremented between 0 ~ 3,600 times for every loop that 'sum' falls within the element bounds). Divide final element values by n for a more visible chart. 
    for(int i = 0; i < 10; i++){
        
        cout << "counter " << i + 1 << "\t";
        for(int j = 0; j < counters[i] / 50.0; j++)
        cout << "*";
        cout << endl;
        cout << counters[i] << endl;  
    }
    

    

}
*/



/*
Output: 

*
***
*************************
************************************************************************
**************************************************************************
*************************
***
*


*/





/*
2. Square Root

*/

double num, NG, LG = 1.0, approx;
void exchange (int *, int);

int main() {

    cout << "This program determines the square root of a number. \n";
    cout << "Please enter a number: ";
    cin >> num;

    int number, y;

    cout << "y = " << y << endl;
    // error checking
    if (num < 0) {
        cout << "Error" << endl;
    }  

    // by incrementing LG by a number < 1, the sqaure roots of small numbers > 1 (namely 2) can be calculated using the loop and given equation. 
    for(LG = 1; LG < num; LG+=0.1){

        NG = 0.5 * (LG + num/LG);
        approx = NG - LG;
    
        if(approx < 0.00001){
            cout << NG << endl; 
            break;
        }
    }

    // The square roots of numbers between 0 and 1 can be calculated similar to other numbers by temporarily multiplying, and subsequently dividing them by various powers of 10. 
    if (num == 0){
        cout << 0 << endl;
    }
    if(num < 1) {

        num *= 1000000;

        for(LG = 1; LG < num; LG+=0.01){
        NG = 0.5 * (LG + num/LG);
        approx = NG - LG;
    
        if(approx < 0.00001){
            cout << NG/1000 << endl; 
            break;
            }
        }
    }
    else if (num == 1){
        cout << num << endl;
    }   

    exchange(&number, y);

}


void exchange(int *xp, int y){

    cout << "*xp = " << *xp << " location of *xp =  " << &*xp << " " << xp << endl;
    cout << "\n";

    cout << "y = " << y << " location of y = " << &y << endl;
    cout << "\n";

    int x = *xp;

    cout << "x ="  << x << " and x address = " << &x; 
    
    // << "\nWhile *xp = " << *xp << "and the address of *xp is: " << &*xp << endl;

    cout << "\n";

    *xp = y;

    cout << "After y, *xp value is: " << *xp << "\n" 
    << "While the address of *xp is: " 
    << &*xp << "\n"
    << xp; 
   
}

/*
Output: 

This program determines the square root of a number. 
Please enter a number: 25
5

This program determines the square root of a number. 
Please enter a number: 24
4.89898

Please enter a number: 13
3.60555

This program determines the square root of a number. 
Please enter a number: -1
Error

This program determines the square root of a number. 
Please enter a number: .86
0.927362

This program determines the square root of a number. 
Please enter a number: .25
0.5
*/




/*
3. Common Errors

1. Not terminating loop conditions with brackets, or statements within the loop with semicolons. 
2. Forgetting the parenthesis of loop headers, or adding semicolons to the last for-loop header expression. 
AVOID (1) & (2) BY: Reviewing code prior to running it for syntax errors.

3. Expressing loop inequalities with wrong number of "=" symbols. 
AAVOID BY: Rememebering that one "=" symbol is used to declare a variable, while two "==" symbols are used for inqualities, and expressions like "+=" have one "=" symbol used for increments and decrements. Also review code for syntatical erros.

4. Attempting to use local variables of one loop inside a different loop.
AVOID BY: Mapping out what variables will need to be global prior to writing and running code. 


5. Forgetting to break out of an if-else or switch case statements.
AVOID BY: Remembering that infinite loops can sometimes occur without these statements, and these may cause big problems. Check code prior to running it. 

6. Potentially forgetting to increment a variable at the end of a while loop. 
AVOID BY: Using for-loops where possible, checking code, and remembering that the loop will sometimes only run once without it. 

7. Forgetting the "while" condition of a do-while loop, or forgetting semi-colons at the end of the "while".
AVOID BY: Remember that the "do" statements will not work without the "while", and the while statement requires semicolon termination. Review and check code before running. 

8. Adding a semicolon at the end of the opening switch-case integer expressions (e.g. "switch (choice);").
AVOID BY: Remembering that the integer expression at the beginning of a switch case is similar to for and while loop headers, in that they are openings to loop statements that do require semicolons.




*/