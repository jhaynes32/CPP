#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;


// 1. Vowels and Consonants

/*
Problems to solve:
1. get ascii value of letters in word
2. determine whether the values match ascii vowel values
3. count vowels in word
4. count consonants in word
5. Declare output variables (used outside loop) as global.


int main () {
    string word;
    cout << "Please enter word: ";
    cin >> word;
    int vowels = 0; 
    int consonants = 0;

    for (int i = 0; i < word.length(); i++) {
       if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {     
           vowels++; 
       }
       else {   
           consonants++;
       }
       
    }

    cout << "The word has " << vowels << " vowels and " << consonants << " consonants." << endl;
}

OUTPUT: 
Please enter word: Jeremiah 
The word has 4 vowels and 4 consonants.
*******************************************
Please enter word: Melanie
The word has 4 vowels and 3 consonants.
*******************************************
Please enter word: Stanley
The word has 3 vowels and 4 consonants.
*/ 






// 2. Finonacci numbers

/*
1. Input Validation
2. Define output for first two sequence numbers.
3. Adjust counter test in loop for compensative shift of first two places.
*/

int main () {
    int num, x = 0, y = 1;
    
    cout << "This program calculates the 'nth' number in the Fibonacci sequence. \n";
    cout << "Tell me, how many Fibonacci numbers would you like to calculate up to? ";
    cin >> num;
    
    if (num < 0) {
        cout << "Please enter a number greater than or equal to zero: ";
        cin >> num;
    }
    if (num == 0 || num == 1) {
        y = 0;
    }
    else {    
        for (int count = 0; count <= (num - 3); count++) {    
            int z = x + y;
            x = y;
            y = z;      
        }
    }
    cout << y << endl;
}

/*
This program calculates the 'nth' number in the Fibonacci sequence. 
Tell me, how many Fibonacci numbers would you like to calculate up to? -6
Please enter a number greater than or equal to zero: 0
0
*****************************************************
This program calculates the 'nth' number in the Fibonacci sequence. 
Tell me, how many Fibonacci numbers would you like to calculate up to? -6
Please enter a number greater than or equal to zero: 1
0
*****************************************************
This program calculates the 'nth' number in the Fibonacci sequence. 
Tell me, how many Fibonacci numbers would you like to calculate up to? 2
1
*****************************************************
This program calculates the 'nth' number in the Fibonacci sequence. 
Tell me, how many Fibonacci numbers would you like to calculate up to? 4
2
*****************************************************
This program calculates the 'nth' number in the Fibonacci sequence. 
Tell me, how many Fibonacci numbers would you like to calculate up to? 7
8
*****************************************************
This program calculates the 'nth' number in the Fibonacci sequence. 
Tell me, how many Fibonacci numbers would you like to calculate up to? 9
21
*****************************************************
This program calculates the 'nth' number in the Fibonacci sequence. 
Tell me, how many Fibonacci numbers would you like to calculate up to? 10
34
*/








// 3. Interest and Mortgage Payment

// Write a program that caluculates the cost of a mortgage. The program should prompt for the initial values for the principal amount, the terms (in years), and the interest rate. 

//The program should output the mortgage amount per month. It should also show the amounts paid towards the principal amount and the amount of monthly interest for the first three years. Then determine the principal amount after the end of the first three years.

/*
int main() {


double principal, rate, monthlyPay, monthlyInterest, principalPay = 0;
int years;


cout << "Principal Amount: ";
cin >> principal;

cout << "Yearly Rate: ";
cin >> rate;

cout << "Number of Years: ";
cin >> years;


// Calculate monthly interest rate from yearly rate. 
double monthlyRate = ((rate / 100) / 12);

// Use monthly rate in monthly payment equation.
monthlyPay = (principal * monthlyRate / (1 - (1 / pow((1 + monthlyRate), (12 * years)))));


for (years = 1; years <= 3; years++){ 
    // Set Year demarcation
    cout << "------------------" << endl;
    cout << "Year: " << years << endl;
    cout << "------------------" << endl; 

    // Define monthly loop
    for (int month = 1; month <= 12; month++){

    // Accrue monthly payments as pay towards principal.
    principalPay += monthlyPay;

    // Accrue deduction of monthly pay from principal.
    principal -= monthlyPay;

    // Define monthly interest as a percentage of decremented principal over 12 months. 
    monthlyInterest = ((principal) * ((rate / 100) / 12));
   
    cout << fixed << showpoint << setprecision(2); 
    cout << "Month: " << month << endl;

    cout << "Mortgage: " << monthlyPay << endl;

    cout << "Principal: " << principal << endl;
    
    cout << "Paid to Principal: " << principalPay << endl;

    cout << "Monthly Interest: " << monthlyInterest << endl;
        cout << endl;
    }
}


}
*/

/*
Principal Amount: 250000
Yearly Rate: 6
Number of Years: 30 -----------------------------------
------------------
Year: 1
------------------
Month: 1
Mortgage: 1498.88
Principal: 248501.12
Paid to Principal: 1498.88
Monthly Interest: 1242.51

Month: 2
Mortgage: 1498.88
Principal: 247002.25
Paid to Principal: 2997.75
Monthly Interest: 1235.01

Month: 3
Mortgage: 1498.88
Principal: 245503.37
Paid to Principal: 4496.63
Monthly Interest: 1227.52

Month: 4
Mortgage: 1498.88
Principal: 244004.49
Paid to Principal: 5995.51
Monthly Interest: 1220.02

Month: 5
Mortgage: 1498.88
Principal: 242505.62
Paid to Principal: 7494.38
Monthly Interest: 1212.53

Month: 6
Mortgage: 1498.88
Principal: 241006.74
Paid to Principal: 8993.26
Monthly Interest: 1205.03

Month: 7
Mortgage: 1498.88
Principal: 239507.87
Paid to Principal: 10492.13
Monthly Interest: 1197.54

Month: 8
Mortgage: 1498.88
Principal: 238008.99
Paid to Principal: 11991.01
Monthly Interest: 1190.04

Month: 9
Mortgage: 1498.88
Principal: 236510.11
Paid to Principal: 13489.89
Monthly Interest: 1182.55

Month: 10
Mortgage: 1498.88
Principal: 235011.24
Paid to Principal: 14988.76
Monthly Interest: 1175.06

Month: 11
Mortgage: 1498.88
Principal: 233512.36
Paid to Principal: 16487.64
Monthly Interest: 1167.56

Month: 12
Mortgage: 1498.88
Principal: 232013.48
Paid to Principal: 17986.52
Monthly Interest: 1160.07

------------------
Year: 2
------------------
Month: 1
Mortgage: 1498.88
Principal: 230514.61
Paid to Principal: 19485.39
Monthly Interest: 1152.57

Month: 2
Mortgage: 1498.88
Principal: 229015.73
Paid to Principal: 20984.27
Monthly Interest: 1145.08

Month: 3
Mortgage: 1498.88
Principal: 227516.86
Paid to Principal: 22483.14
Monthly Interest: 1137.58

Month: 4
Mortgage: 1498.88
Principal: 226017.98
Paid to Principal: 23982.02
Monthly Interest: 1130.09

Month: 5
Mortgage: 1498.88
Principal: 224519.10
Paid to Principal: 25480.90
Monthly Interest: 1122.60

Month: 6
Mortgage: 1498.88
Principal: 223020.23
Paid to Principal: 26979.77
Monthly Interest: 1115.10

Month: 7
Mortgage: 1498.88
Principal: 221521.35
Paid to Principal: 28478.65
Monthly Interest: 1107.61

Month: 8
Mortgage: 1498.88
Principal: 220022.47
Paid to Principal: 29977.53
Monthly Interest: 1100.11

Month: 9
Mortgage: 1498.88
Principal: 218523.60
Paid to Principal: 31476.40
Monthly Interest: 1092.62

Month: 10
Mortgage: 1498.88
Principal: 217024.72
Paid to Principal: 32975.28
Monthly Interest: 1085.12

Month: 11
Mortgage: 1498.88
Principal: 215525.84
Paid to Principal: 34474.16
Monthly Interest: 1077.63

Month: 12
Mortgage: 1498.88
Principal: 214026.97
Paid to Principal: 35973.03
Monthly Interest: 1070.13

------------------
Year: 3
------------------
Month: 1
Mortgage: 1498.88
Principal: 212528.09
Paid to Principal: 37471.91
Monthly Interest: 1062.64

Month: 2
Mortgage: 1498.88
Principal: 211029.22
Paid to Principal: 38970.78
Monthly Interest: 1055.15

Month: 3
Mortgage: 1498.88
Principal: 209530.34
Paid to Principal: 40469.66
Monthly Interest: 1047.65

Month: 4
Mortgage: 1498.88
Principal: 208031.46
Paid to Principal: 41968.54
Monthly Interest: 1040.16

Month: 5
Mortgage: 1498.88
Principal: 206532.59
Paid to Principal: 43467.41
Monthly Interest: 1032.66

Month: 6
Mortgage: 1498.88
Principal: 205033.71
Paid to Principal: 44966.29
Monthly Interest: 1025.17

Month: 7
Mortgage: 1498.88
Principal: 203534.83
Paid to Principal: 46465.17
Monthly Interest: 1017.67

Month: 8
Mortgage: 1498.88
Principal: 202035.96
Paid to Principal: 47964.04
Monthly Interest: 1010.18

Month: 9
Mortgage: 1498.88
Principal: 200537.08
Paid to Principal: 49462.92
Monthly Interest: 1002.69

Month: 10
Mortgage: 1498.88
Principal: 199038.21
Paid to Principal: 50961.79
Monthly Interest: 995.19

Month: 11
Mortgage: 1498.88
Principal: 197539.33
Paid to Principal: 52460.67
Monthly Interest: 987.70

Month: 12
Mortgage: 1498.88
Principal: 196040.45
Paid to Principal: 53959.55
Monthly Interest: 980.20


**********************************************************

Principal Amount: 250000
Yearly Rate: 7.5 -----------------------------------------
Number of Years: 30
------------------
Year: 1
------------------
Month: 1
Mortgage: 1748.04
Principal: 248251.96
Paid to Principal: 1748.04
Monthly Interest: 1551.57

Month: 2
Mortgage: 1748.04
Principal: 246503.93
Paid to Principal: 3496.07
Monthly Interest: 1540.65

Month: 3
Mortgage: 1748.04
Principal: 244755.89
Paid to Principal: 5244.11
Monthly Interest: 1529.72

Month: 4
Mortgage: 1748.04
Principal: 243007.85
Paid to Principal: 6992.15
Monthly Interest: 1518.80

Month: 5
Mortgage: 1748.04
Principal: 241259.82
Paid to Principal: 8740.18
Monthly Interest: 1507.87

Month: 6
Mortgage: 1748.04
Principal: 239511.78
Paid to Principal: 10488.22
Monthly Interest: 1496.95

Month: 7
Mortgage: 1748.04
Principal: 237763.75
Paid to Principal: 12236.25
Monthly Interest: 1486.02

Month: 8
Mortgage: 1748.04
Principal: 236015.71
Paid to Principal: 13984.29
Monthly Interest: 1475.10

Month: 9
Mortgage: 1748.04
Principal: 234267.67
Paid to Principal: 15732.33
Monthly Interest: 1464.17

Month: 10
Mortgage: 1748.04
Principal: 232519.64
Paid to Principal: 17480.36
Monthly Interest: 1453.25

Month: 11
Mortgage: 1748.04
Principal: 230771.60
Paid to Principal: 19228.40
Monthly Interest: 1442.32

Month: 12
Mortgage: 1748.04
Principal: 229023.56
Paid to Principal: 20976.44
Monthly Interest: 1431.40

------------------
Year: 2
------------------
Month: 1
Mortgage: 1748.04
Principal: 227275.53
Paid to Principal: 22724.47
Monthly Interest: 1420.47

Month: 2
Mortgage: 1748.04
Principal: 225527.49
Paid to Principal: 24472.51
Monthly Interest: 1409.55

Month: 3
Mortgage: 1748.04
Principal: 223779.46
Paid to Principal: 26220.54
Monthly Interest: 1398.62

Month: 4
Mortgage: 1748.04
Principal: 222031.42
Paid to Principal: 27968.58
Monthly Interest: 1387.70

Month: 5
Mortgage: 1748.04
Principal: 220283.38
Paid to Principal: 29716.62
Monthly Interest: 1376.77

Month: 6
Mortgage: 1748.04
Principal: 218535.35
Paid to Principal: 31464.65
Monthly Interest: 1365.85

Month: 7
Mortgage: 1748.04
Principal: 216787.31
Paid to Principal: 33212.69
Monthly Interest: 1354.92

Month: 8
Mortgage: 1748.04
Principal: 215039.27
Paid to Principal: 34960.73
Monthly Interest: 1344.00

Month: 9
Mortgage: 1748.04
Principal: 213291.24
Paid to Principal: 36708.76
Monthly Interest: 1333.07

Month: 10
Mortgage: 1748.04
Principal: 211543.20
Paid to Principal: 38456.80
Monthly Interest: 1322.15

Month: 11
Mortgage: 1748.04
Principal: 209795.17
Paid to Principal: 40204.83
Monthly Interest: 1311.22

Month: 12
Mortgage: 1748.04
Principal: 208047.13
Paid to Principal: 41952.87
Monthly Interest: 1300.29

------------------
Year: 3
------------------
Month: 1
Mortgage: 1748.04
Principal: 206299.09
Paid to Principal: 43700.91
Monthly Interest: 1289.37

Month: 2
Mortgage: 1748.04
Principal: 204551.06
Paid to Principal: 45448.94
Monthly Interest: 1278.44

Month: 3
Mortgage: 1748.04
Principal: 202803.02
Paid to Principal: 47196.98
Monthly Interest: 1267.52

Month: 4
Mortgage: 1748.04
Principal: 201054.98
Paid to Principal: 48945.02
Monthly Interest: 1256.59

Month: 5
Mortgage: 1748.04
Principal: 199306.95
Paid to Principal: 50693.05
Monthly Interest: 1245.67

Month: 6
Mortgage: 1748.04
Principal: 197558.91
Paid to Principal: 52441.09
Monthly Interest: 1234.74

Month: 7
Mortgage: 1748.04
Principal: 195810.88
Paid to Principal: 54189.12
Monthly Interest: 1223.82

Month: 8
Mortgage: 1748.04
Principal: 194062.84
Paid to Principal: 55937.16
Monthly Interest: 1212.89

Month: 9
Mortgage: 1748.04
Principal: 192314.80
Paid to Principal: 57685.20
Monthly Interest: 1201.97

Month: 10
Mortgage: 1748.04
Principal: 190566.77
Paid to Principal: 59433.23
Monthly Interest: 1191.04

Month: 11
Mortgage: 1748.04
Principal: 188818.73
Paid to Principal: 61181.27
Monthly Interest: 1180.12

Month: 12
Mortgage: 1748.04
Principal: 187070.69
Paid to Principal: 62929.31
Monthly Interest: 1169.19





**********************************************************
Principal Amount: 250000
Yearly Rate: 6
Number of Years: 15 -----------------------------
------------------
Year: 1
------------------
Month: 1
Mortgage: 2109.64
Principal: 247890.36
Paid to Principal: 2109.64
Monthly Interest: 1239.45

Month: 2
Mortgage: 2109.64
Principal: 245780.72
Paid to Principal: 4219.28
Monthly Interest: 1228.90

Month: 3
Mortgage: 2109.64
Principal: 243671.07
Paid to Principal: 6328.93
Monthly Interest: 1218.36

Month: 4
Mortgage: 2109.64
Principal: 241561.43
Paid to Principal: 8438.57
Monthly Interest: 1207.81

Month: 5
Mortgage: 2109.64
Principal: 239451.79
Paid to Principal: 10548.21
Monthly Interest: 1197.26

Month: 6
Mortgage: 2109.64
Principal: 237342.15
Paid to Principal: 12657.85
Monthly Interest: 1186.71

Month: 7
Mortgage: 2109.64
Principal: 235232.51
Paid to Principal: 14767.49
Monthly Interest: 1176.16

Month: 8
Mortgage: 2109.64
Principal: 233122.86
Paid to Principal: 16877.14
Monthly Interest: 1165.61

Month: 9
Mortgage: 2109.64
Principal: 231013.22
Paid to Principal: 18986.78
Monthly Interest: 1155.07

Month: 10
Mortgage: 2109.64
Principal: 228903.58
Paid to Principal: 21096.42
Monthly Interest: 1144.52

Month: 11
Mortgage: 2109.64
Principal: 226793.94
Paid to Principal: 23206.06
Monthly Interest: 1133.97

Month: 12
Mortgage: 2109.64
Principal: 224684.30
Paid to Principal: 25315.70
Monthly Interest: 1123.42

------------------
Year: 2
------------------
Month: 1
Mortgage: 2109.64
Principal: 222574.65
Paid to Principal: 27425.35
Monthly Interest: 1112.87

Month: 2
Mortgage: 2109.64
Principal: 220465.01
Paid to Principal: 29534.99
Monthly Interest: 1102.33

Month: 3
Mortgage: 2109.64
Principal: 218355.37
Paid to Principal: 31644.63
Monthly Interest: 1091.78

Month: 4
Mortgage: 2109.64
Principal: 216245.73
Paid to Principal: 33754.27
Monthly Interest: 1081.23

Month: 5
Mortgage: 2109.64
Principal: 214136.08
Paid to Principal: 35863.92
Monthly Interest: 1070.68

Month: 6
Mortgage: 2109.64
Principal: 212026.44
Paid to Principal: 37973.56
Monthly Interest: 1060.13

Month: 7
Mortgage: 2109.64
Principal: 209916.80
Paid to Principal: 40083.20
Monthly Interest: 1049.58

Month: 8
Mortgage: 2109.64
Principal: 207807.16
Paid to Principal: 42192.84
Monthly Interest: 1039.04

Month: 9
Mortgage: 2109.64
Principal: 205697.52
Paid to Principal: 44302.48
Monthly Interest: 1028.49

Month: 10
Mortgage: 2109.64
Principal: 203587.87
Paid to Principal: 46412.13
Monthly Interest: 1017.94

Month: 11
Mortgage: 2109.64
Principal: 201478.23
Paid to Principal: 48521.77
Monthly Interest: 1007.39

Month: 12
Mortgage: 2109.64
Principal: 199368.59
Paid to Principal: 50631.41
Monthly Interest: 996.84

------------------
Year: 3
------------------
Month: 1
Mortgage: 2109.64
Principal: 197258.95
Paid to Principal: 52741.05
Monthly Interest: 986.29

Month: 2
Mortgage: 2109.64
Principal: 195149.31
Paid to Principal: 54850.69
Monthly Interest: 975.75

Month: 3
Mortgage: 2109.64
Principal: 193039.66
Paid to Principal: 56960.34
Monthly Interest: 965.20

Month: 4
Mortgage: 2109.64
Principal: 190930.02
Paid to Principal: 59069.98
Monthly Interest: 954.65

Month: 5
Mortgage: 2109.64
Principal: 188820.38
Paid to Principal: 61179.62
Monthly Interest: 944.10

Month: 6
Mortgage: 2109.64
Principal: 186710.74
Paid to Principal: 63289.26
Monthly Interest: 933.55

Month: 7
Mortgage: 2109.64
Principal: 184601.10
Paid to Principal: 65398.90
Monthly Interest: 923.01

Month: 8
Mortgage: 2109.64
Principal: 182491.45
Paid to Principal: 67508.55
Monthly Interest: 912.46

Month: 9
Mortgage: 2109.64
Principal: 180381.81
Paid to Principal: 69618.19
Monthly Interest: 901.91

Month: 10
Mortgage: 2109.64
Principal: 178272.17
Paid to Principal: 71727.83
Monthly Interest: 891.36

Month: 11
Mortgage: 2109.64
Principal: 176162.53
Paid to Principal: 73837.47
Monthly Interest: 880.81

Month: 12
Mortgage: 2109.64
Principal: 174052.89
Paid to Principal: 75947.11
Monthly Interest: 870.26




***********************************************************
Principal Amount: 250000
Yearly Rate: 6
Number of Years: 15
------------------
Year: 1
------------------
Month: 1
Mortgage: 2109.64
Principal: 247890.36
Paid to Principal: 2109.64
Monthly Interest: 1239.45

Month: 2
Mortgage: 2109.64
Principal: 245780.72
Paid to Principal: 4219.28
Monthly Interest: 1228.90

Month: 3
Mortgage: 2109.64
Principal: 243671.07
Paid to Principal: 6328.93
Monthly Interest: 1218.36

Month: 4
Mortgage: 2109.64
Principal: 241561.43
Paid to Principal: 8438.57
Monthly Interest: 1207.81

Month: 5
Mortgage: 2109.64
Principal: 239451.79
Paid to Principal: 10548.21
Monthly Interest: 1197.26

Month: 6
Mortgage: 2109.64
Principal: 237342.15
Paid to Principal: 12657.85
Monthly Interest: 1186.71

Month: 7
Mortgage: 2109.64
Principal: 235232.51
Paid to Principal: 14767.49
Monthly Interest: 1176.16

Month: 8
Mortgage: 2109.64
Principal: 233122.86
Paid to Principal: 16877.14
Monthly Interest: 1165.61

Month: 9
Mortgage: 2109.64
Principal: 231013.22
Paid to Principal: 18986.78
Monthly Interest: 1155.07

Month: 10
Mortgage: 2109.64
Principal: 228903.58
Paid to Principal: 21096.42
Monthly Interest: 1144.52

Month: 11
Mortgage: 2109.64
Principal: 226793.94
Paid to Principal: 23206.06
Monthly Interest: 1133.97

Month: 12
Mortgage: 2109.64
Principal: 224684.30
Paid to Principal: 25315.70
Monthly Interest: 1123.42

------------------
Year: 2
------------------
Month: 1
Mortgage: 2109.64
Principal: 222574.65
Paid to Principal: 27425.35
Monthly Interest: 1112.87

Month: 2
Mortgage: 2109.64
Principal: 220465.01
Paid to Principal: 29534.99
Monthly Interest: 1102.33

Month: 3
Mortgage: 2109.64
Principal: 218355.37
Paid to Principal: 31644.63
Monthly Interest: 1091.78

Month: 4
Mortgage: 2109.64
Principal: 216245.73
Paid to Principal: 33754.27
Monthly Interest: 1081.23

Month: 5
Mortgage: 2109.64
Principal: 214136.08
Paid to Principal: 35863.92
Monthly Interest: 1070.68

Month: 6
Mortgage: 2109.64
Principal: 212026.44
Paid to Principal: 37973.56
Monthly Interest: 1060.13

Month: 7
Mortgage: 2109.64
Principal: 209916.80
Paid to Principal: 40083.20
Monthly Interest: 1049.58

Month: 8
Mortgage: 2109.64
Principal: 207807.16
Paid to Principal: 42192.84
Monthly Interest: 1039.04

Month: 9
Mortgage: 2109.64
Principal: 205697.52
Paid to Principal: 44302.48
Monthly Interest: 1028.49

Month: 10
Mortgage: 2109.64
Principal: 203587.87
Paid to Principal: 46412.13
Monthly Interest: 1017.94

Month: 11
Mortgage: 2109.64
Principal: 201478.23
Paid to Principal: 48521.77
Monthly Interest: 1007.39

Month: 12
Mortgage: 2109.64
Principal: 199368.59
Paid to Principal: 50631.41
Monthly Interest: 996.84

------------------
Year: 3
------------------
Month: 1
Mortgage: 2109.64
Principal: 197258.95
Paid to Principal: 52741.05
Monthly Interest: 986.29

Month: 2
Mortgage: 2109.64
Principal: 195149.31
Paid to Principal: 54850.69
Monthly Interest: 975.75

Month: 3
Mortgage: 2109.64
Principal: 193039.66
Paid to Principal: 56960.34
Monthly Interest: 965.20

Month: 4
Mortgage: 2109.64
Principal: 190930.02
Paid to Principal: 59069.98
Monthly Interest: 954.65

Month: 5
Mortgage: 2109.64
Principal: 188820.38
Paid to Principal: 61179.62
Monthly Interest: 944.10

Month: 6
Mortgage: 2109.64
Principal: 186710.74
Paid to Principal: 63289.26
Monthly Interest: 933.55

Month: 7
Mortgage: 2109.64
Principal: 184601.10
Paid to Principal: 65398.90
Monthly Interest: 923.01

Month: 8
Mortgage: 2109.64
Principal: 182491.45
Paid to Principal: 67508.55
Monthly Interest: 912.46

Month: 9
Mortgage: 2109.64
Principal: 180381.81
Paid to Principal: 69618.19
Monthly Interest: 901.91

Month: 10
Mortgage: 2109.64
Principal: 178272.17
Paid to Principal: 71727.83
Monthly Interest: 891.36

Month: 11
Mortgage: 2109.64
Principal: 176162.53
Paid to Principal: 73837.47
Monthly Interest: 880.81

Month: 12
Mortgage: 2109.64
Principal: 174052.89
Paid to Principal: 75947.11
Monthly Interest: 870.26

*/

