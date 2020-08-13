 #include <iostream>
 #include <math.h>

   using namespace std;

// A. 
   int main()
   {
       cout << "                   ANNUAL CONFERENCE \n";
       cout << "NAME:\n";
       cout << "ORGANIZATION\n";

        cout << 5+4*6; 
        cout << 7/4;

        


   }
/*
Output: 
jhaynes-m02:cpp jhaynes$ cd "/Users/jhaynes/cpp/" && g++ firstc.cpp -o firstc && "/Users/jhaynes/cpp/"firstc

                   ANNUAL CONFERENCE 
NAME:
ORGANIZATION
jhaynes-m02:cpp jhaynes$ 
*/



// B. 
// int main() {
//     double x1, x2, y1, y2, d;

//     cout << "x1: \n";
//     cin >> x1;

//     cout << "x2: \n";
//     cin >> x2;

//     cout << "y1: \n";
//     cin >> y1;

//     cout << "y2: \n";
//     cin >> y2;

//     d = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    
//     cout << "The distance equals: " << d << endl;
// }

/*
Output

jhaynes-m02:cpp jhaynes$ cd "/Users/jhaynes/cpp/" && g++ firstc.cpp -o firstc && "/Users/jhaynes/cpp/"firstc
x1: 
2
x2: 
3
y1: 
8
y2: 
-5
The distance equals: 13.0384
jhaynes-m02:cpp jhaynes$ 

*/ 


/* C. 
Searching 
1. Find the first letter of the person's last name. 
2. Go to that letter's section of the phone book.
3. Find the next letter of the person's last name.
4. Go to the area of the section with the same next letter.
5. Repeat steps 3 and 4 until last name match is found. 
6. Find the first letter of the person's first name. 
7. Go to the section of the last names you've already found that also matches the first letter of the person's first name. 
8. Find the next letter of the person's first name.
9. Go to the area of the section you're in with the same next letter.
10. Repeat steps 8-9 until whole name is matched. 
11. Find number corresponding to whole name. 

Selection 
1. Define an integer array 'n'.
2. Define an integer variable 'm'.
3. Initialize at the first array number and loop through the array.
4. If the next number in the array list is larger than the previous number, (and has x numbers smaller than it) remember only the smaller number. 
5. Print smallest number. 
*/