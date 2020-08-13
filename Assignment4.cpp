#include <iostream> 
#include <math.h>

using namespace std;

int main() {
    

/*
// 1. Multiplication
    int x, y, add = 0;

    cout << "Enter x: \n"; cin >> x;
    cout << "Enter y: \n"; cin >> y;


    while (y != 0) 
    {
        add += x;
        y --;
        
    }
    cout << "Your answer is: " << add << endl;

 
Output: 
Enter x: 
3
Enter y: 
4




// 2. Reversing a number

    int num, reverse = 0, remain;

    cout << "Number: "; cin >> num; 

    while (num > 0) {
        reverse = (reverse * 10) + (num % 10);
        num = num/10; 
    
    }

    cout << "Your reverse number is: " << reverse << endl;


Output:

Number: 4576859
Your reverse number is: 9586754
*/



// 3. Stars


    int x;

    cout << "Enter x: "; 
    cin >> x;
    cout << endl;

    for (int i = 0; i <= x; i++) 
    {   // set rows = x
        for (int y = 1; y <= pow(2, i); y++) 
        {   
            if (i < x) {
            cout << "*";
            cout << endl;
        }
        else {
            i  ? i: 2 * ;
        }
        cout << endl;
    }
    }
//     for (int i = x-1; i >= 0; i--) 
//    {
//        for (int y = 1; y <= pow(2, i); y++) 
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }

    return 0;


/*
Output: 

Enter x: 3

*
**
****
********
****
**
*



Enter x: 6

*
**
****
********
****************
********************************
****************************************************************
********************************
****************
********
****
**
*
*/
}