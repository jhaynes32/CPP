#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;


void printSquares(int);

int main(){
    printSquares((81));
}

void printSquares(int num){
    //Set a limit on the function call below
    if (num == 0) {
        return;
    }
    printSquares(num - 1);
    // Call the function within itself to perform action below on number above.
    cout << num << " " << num * num << " " << sqrt(num) << endl;
}