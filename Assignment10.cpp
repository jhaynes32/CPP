#include<iostream>
#include<string.h>
#include<cctype>
#include<stdio.h>

using namespace std;

/*
bool palindrome(string);


int main(){

    string strg;

    cout << "Enter a word: ";

    getline(cin, strg);

    if(palindrome(strg)){
        cout << "\"" << strg << "\" is a palindrome" << endl; 
    }
    else{
        cout << "\"" << strg << "\" is not a palindrome" << endl;
    }
    return 0;
}



bool palindrome(string str){

    for(int i = 0; i < str.length(); ++i){

        if(str[i] != str[str.length() - i - 1]){
            return false;
        }
    }
    return true;
}
*/


/*
Output:
Enter a word: level
"level" is a palindrome

Enter a word: robot
"robot" is not a palindrome
*/


int main(){

    int n = 20, i, j;
    char W[20][100];
    char temp[100];

    // Read input strings
    cout << "Enter 20 strings: \n";
    for(i = 0; i < n; i++){

        cin >> W[i];
    }

    // Sort
    for(int j = 0; j < n-1; j++){

        for(int i = j+1; i < n; i++){

            if(strcmp(W[j], W[i]) > 0){

                //Swap strings
                strcpy(temp, W[j]);
                strcpy(W[j], W[i]);
                strcpy(W[i], temp);
            }
        }
    }

    cout << "\nSorted List:\n";

    for(int i = 0; i < n; i++){
        cout << W[i] << endl;
    }
    return 0;

}



/* 
Output:

Enter 20 strings: 
peter
tom
tim
abby
lull
tall
book
strap
pole
jd
krean
klje
been
over
ther
before
named
and
tim
leel

Sorted List:
abby
and
been
before
book
jd
klje
krean
leel
lull
named
over
peter
pole
strap
tall
ther
tim
tim
tom


*/