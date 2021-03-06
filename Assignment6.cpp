#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

// 1. Stars

/*
String method allows strings to be initialized with a value. This allows a character to be printed as many times as necessary. The second argument within the method may be an integer-operation such as 'pow'. Using this allows characters to be printed in succession exponentially.


void star (char, int);

int main () {
    int n = 0;
    char c = '*';
    star(c, pow(2, n));
    star(c, pow(2, n + 1));
    star(c, pow(2, n + 2));
    star(c, pow(2, n + 3));
    star(c, pow(2, n + 4));
    star(c, pow(2, n + 5));
    star(c, pow(2, n + 6));

}

void star (char c, int n) {
    cout << string (n, c) << endl;    
}

Output: 
*
**
****
********
****************
********************************
****************************************************************
*/


// 2. Simple Squares

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


/*
Output: 
1 1 1
2 4 1.41421
3 9 1.73205
4 16 2
5 25 2.23607
6 36 2.44949
7 49 2.64575
8 64 2.82843
9 81 3
10 100 3.16228
11 121 3.31662
12 144 3.4641
13 169 3.60555
14 196 3.74166
15 225 3.87298
16 256 4
17 289 4.12311
18 324 4.24264
19 361 4.3589
20 400 4.47214
21 441 4.58258
22 484 4.69042
23 529 4.79583
24 576 4.89898
25 625 5
26 676 5.09902
27 729 5.19615
28 784 5.2915
29 841 5.38516
30 900 5.47723
31 961 5.56776
32 1024 5.65685
33 1089 5.74456
34 1156 5.83095
35 1225 5.91608
36 1296 6
37 1369 6.08276
38 1444 6.16441
39 1521 6.245
40 1600 6.32456
41 1681 6.40312
42 1764 6.48074
43 1849 6.55744
44 1936 6.63325
45 2025 6.7082
46 2116 6.78233
47 2209 6.85565
48 2304 6.9282
49 2401 7
50 2500 7.07107
51 2601 7.14143
52 2704 7.2111
53 2809 7.28011
54 2916 7.34847
55 3025 7.4162
56 3136 7.48331
57 3249 7.54983
58 3364 7.61577
59 3481 7.68115
60 3600 7.74597
61 3721 7.81025
62 3844 7.87401
63 3969 7.93725
64 4096 8
65 4225 8.06226
66 4356 8.12404
67 4489 8.18535
68 4624 8.24621
69 4761 8.30662
70 4900 8.3666
71 5041 8.42615
72 5184 8.48528
73 5329 8.544
74 5476 8.60233
75 5625 8.66025
76 5776 8.7178
77 5929 8.77496
78 6084 8.83176
79 6241 8.88819
80 6400 8.94427
81 6561 9

*/