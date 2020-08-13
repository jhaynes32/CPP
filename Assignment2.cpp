
// Assignment 2

#include <iostream>
 #include <math.h>

   using namespace std;

// A. 
 /*
   int main()
   {
       const double PI = 3.14;
       double radius, area, circumference, volume, surface_area;
       
       cout << "This program calculates the area and  circumference of a circle, as well as the volume and surface area of a sphere given a particular radius. \n"; 
       cout << "What is the radius: ";
       cin >> radius;


    // Circle
       area = PI * pow(radius, 2);
       cout << "The area of the circle is: " << area << endl; 

       circumference = PI * radius * 2;
       cout << "The circfumerence of the circle is: " << circumference << endl; 

    // Sphere 
       volume = (4 * PI * pow(radius, 3))/3;
       cout << "The volume of the sphere is: " << volume << endl; 

       surface_area = 4 * PI * pow(radius, 2);
       cout << "The surface area of the sphere is: " << surface_area << endl; 
       return 0;
   }
  

Output: 
jhaynes-m02:cpp jhaynes$ cd "/Users/jhaynes/cpp/Assignments/" && g++ Assignment2.cpp -o Assignment2 && "/Users/jhaynes/cpp/Assignments/"Assignment2
This program calculates the area and  circumference of a circle, as well as the volume and surface area of a sphere given a particular radius. 
What is the radius: 7.5
The area of the circle is: 176.625
The circfumerence of the circle is: 47.1
The volume of the sphere is: 1766.25
The surface area of the sphere is: 706.5
jhaynes-m02:Assignments jhaynes$ 
  
*/



// B. This program directs cashier's on how to give change.

  int main(){

    double amount_due, amount_recieved, change; 
    int  dollars, quarters, dimes, nickels, pennies;

    cout << "How much does the item cost? ";
    cin >> amount_due;

    cout << "How much did the customer pay? ";
    cin >> amount_recieved;

    
    change = amount_recieved  - amount_due; 
    dollars = static_cast<int>(change);
    quarters = (change - dollars) / .25;
    dimes = (change - (dollars + (quarters * .25))) / .10; 
    nickels = ((change - (dollars + (quarters * .25) + (dimes * .10))) / .05); 
    pennies = (change - (dollars + (quarters * .25) + (dimes * .10) + (nickels * .05))) / 0.01 ;

    cout << "Pay customer " << dollars << " dollars" << endl;
    cout << "Pay customer " << quarters << " quarters" << endl;
    cout << "Pay customer " << dimes << " dimes" << endl;
    cout << "Pay customer " << nickels << " nickels" << endl;
    cout << "Pay customer " << pennies << " pennies" << endl;

  }


/*

Output:
jhaynes-m02:Assignments jhaynes$ cd "/Users/jhaynes/cpp/Assignments/" && g++ Assignment2.cpp -o Assignment2 && "/Users/jhaynes/cpp/Assignments/"Assignment2

How much does the item cost? 95.32
How much did the customer pay? 100
Pay customer 4 dollars
Pay customer 2 quarters
Pay customer 1 dimes
Pay customer 1 nickels
Pay customer 3 pennies

jhaynes-m02:Assignments jhaynes$
*/



