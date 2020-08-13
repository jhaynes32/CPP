#include<iostream>
#include<string.h>
#include<sstream>
#include<ctype.h>
using namespace std;

/*
void getDate(int *, int *, int *);


int main(){

   int dptr, mptr, yptr;

   getDate(&dptr,&mptr,&yptr);

   cout<<"Day : "<<dptr <<", Month : "<<mptr<<", Year : "<<yptr<<endl;
   return 0;
}

void getDate(int *dptr, int *mptr, int *yptr){

   int i = 0, d;

   string str;
   string str1 = "";

   cout << "Enter the date (dd-mmm-yyyy) : ";
   cin >> str;

   while(i < str.length()){

       if( str[i] != '-'){

           str1 = str1 + str[i];

       }
       else{

           istringstream (str1) >> d;
           *dptr = d;
           str1 = "";
           break;
       }  
       i++;
   }

   i += 1;

   while(i < str.length())
   {
       if(str[i] != '-')
       {
           str1 = str1 + str[i];
       }
       else
       {
           if((str1 == "jan")||(str1=="Jan"))
               *mptr = 1;
           else if((str1 == "feb")||(str1 == "Feb"))
               *mptr = 2;
           else if((str1 == "mar")||(str1 == "Mar"))
               *mptr = 3;
           else if((str1 == "apr")||(str1 == "Apr"))
               *mptr = 4;
           else if((str1 == "may")||(str1 == "May"))
               *mptr = 5;
           else if((str1 == "jun")||(str1 == "Jun"))
               *mptr = 6;
           else if((str1 == "jul")||(str1 == "Jul"))
               *mptr = 7;
           else if((str1 == "aug")||(str1 == "Aug"))
               *mptr = 8;
           else if((str1 == "sep")||(str1 == "Sep"))
               *mptr = 9;
           else if((str1 == "oct")||(str1 == "Oct"))
               *mptr = 10;
           else if((str1 == "nov")||(str1 == "Nov"))
               *mptr = 11;
           else if((str1 == "dec")||(str1 == "Dec"))
               *mptr = 12;

           str1 = "";
           break;
       }  
       i++;
   }
   i+=1;
   while(i < str.length())
   {
       str1 = str1 + str[i];  
       i++;
   }
   istringstream (str1) >> d;
   *yptr = d;
}
*/

/* Output:
1. 
Enter the date (dd-mm-yyyy) : 02-Aug-1986
Day : 2, Month : 8, Year : 1986
jhaynes-m02:Assignments jhaynes$ 


*/



int* expand (int*, int);

int main()
{
    // Initialize pointer "num" to array.
    {const int SIZE = 10;                                          
    int array [SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};               
    int* num = array;  

    // Print the contents of the array.
    cout << "Elements before expansion" << endl;
    for(int index = 0; index < SIZE; index++)
        cout << num[index];
    cout << endl;   

    // Change the value of num pointer to expand function
    num = expand(array, SIZE);   


    // Print the returned array values of the function num points to.
    cout<<"Elements after expansion"<<endl;
    for(int i = 0;i < SIZE * 2; i++)
        cout << num[i];
    cout << endl;

    delete[] num;   //
    num = 0;       //Used to point the unused elements of the second array with zero.

    return 0;}
}



// create pointer to function "expand" that will take an array pointer and integer as arguments. The array pointer will be placed in a loop that causes it to copy the values from the array pointed to into the elements of another array pointed to within the function. 
int* expand(int* arr, int size){

    int* expandArray = new int[size * 2];

    for(int index = 0; index < size; index++){
        expandArray[index] = arr[index];
    }

    for(int index = size; index < size * 2; index++){
        expandArray[index] = 0;
    }


    return expandArray;
}


/*

Output:
Elements before expansion
12345678911
Elements after expansion
123456789110000000000

*/