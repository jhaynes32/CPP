#include <iostream>

using namespace std;

void printArray (int [], int);
int search (int [], int, int);
void oddFirst(int arr[], int);
void reverse (int [], int);


const int numCol = 2;
const int numRows = 2;
void readMatrix(int [numCol][numRows]);
void add(int [2][2], int [2][2], int [2][2]);
void subtract(int [2][2], int [2][2], int [2][2]);
void multiply(int [2][2], int [2][2], int [2][2]);
void printMatrix(int [2][2]);




int main() {

    int arr[] = {1, 4, 6, 5, 2, 7, 10};
    int matrix1[2][2], matrix2[2][2], matrix3[2][2];

    // Search
    cout << "1) \n";
    cout << search(arr, 7, 6) << endl;
    cout << search(arr, 7, 8) << endl;

    // Odd First
    oddFirst(arr, 7);

    // Reverse
    reverse(arr, 7);
    cout << endl;
    printArray(arr, 7);
    cout << endl;


    // Matrices
    cout << "2)\n";
    cout << "Input first matrix values\n";
    readMatrix(matrix1);

    cout << "Input second matrix values\n";
    readMatrix(matrix2);    


        // Operations
    cout << "Which operation would you like to perform? (+, -, *)";
    char op;
    cin >> op;
    if(op == '+'){
        add(matrix1, matrix2, matrix3);
    }
    else if(op == '-'){
        subtract(matrix1, matrix2, matrix3);
    }
    else if(op == '*'){
        multiply(matrix1, matrix2, matrix3);
    }
    else{
        cout << "invalid operation\n";
    }



        // Display
    cout << "matrix 1: \n";
    printMatrix(matrix1);
    cout << endl;

    cout << "matrix 2:\n";
    printMatrix(matrix2);
    cout << endl;

    cout << "matrix 1 " << op << " matrix 2: \n";
    printMatrix(matrix3);
    cout << endl;

    cout << endl;
 
    return 0;

}





void printArray(int arr[], int size){

    for (int i = 0; i < size; i++){

        cout << arr[i] << " ";
    }
    cout << endl;
}


int search(int arr[], int n, int val){

    int index = -1;          // create return index
    for (int i = 0; i < n; i++){    // loop through n values of array 
        if(arr[i] == val){          // 'n' is 2nd argument
        return i;
        }    
    }
    return index;
}


void reverse(int arr[], int size){

    bool reversed;

    for (int i = 0; i < size/2; i++) {
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;    
    }
    
}


void oddFirst(int arr[], int n){

    int newArr[n], x = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            newArr[x] = arr[i];
            x++;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            newArr[x] = arr[i];
            x++;
        }
    }

    for (int i = 0; i < n; i++){
        cout << newArr[i] << " ";
    }

}




// 2. 
void readMatrix(int matrix[2][2]){

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){
            
            cout << "Row " << i+1 << " and ";
            cout << "Column " << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }
}

// Add matrices 1 and 2 and store in matrix 3
void add(int matrix1[2][2], int matrix2[2][2], int result[2][2]){

    for(int i = 0; i < 2; i++){

        for (int j = 0; j < 2; j++){

            result[i][j] = matrix1[i][j] + matrix2[i][j];
            // each matrix index is added once in the loop 
        }
    }
}



// Subtract matrices 1 and 2 and store result in matrix 3
void subtract(int matrix1[2][2], int matrix2[2][2], int result[2][2]){
    for (int i = 0; i < 2; i++){
        
        for (int j = 0; j < 2; j++){

            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}



// Multiplye matrices 1 and 2 and store result in matrix 3
void multiply(int matrix1[2][2], int matrix2[2][2], int result[2][2]){

    // assign value of 0 to result matrix indeces
    for(int i = 0; i < 2; i++){
        
        for(int j = 0; j < 2; j++){
            
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < 2; ++i){
        
        for (int j = 0; j < 2; ++j){

            for (int k = 0; k < 2; ++k){

            result[i][j] += matrix1[i][j] * matrix2[i][j];
            }
        }
    }

}

void printMatrix(int matrix[2][2]){

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            cout << matrix[i][j] << " ";
        }
        
        cout << endl;
    }
}




/*

Output:

1) 
2
-1
1 5 7 4 6 2 10 
10 7 2 5 6 4 1 




2)

// Multiplication 
Input first matrix values
Row 1 and Column 1: 9
Row 1 and Column 2: 8
Row 2 and Column 1: 7
Row 2 and Column 2: 6
Input second matrix values
Row 1 and Column 1: 5
Row 1 and Column 2: 4
Row 2 and Column 1: 3
Row 2 and Column 2: 2
Which operation would you like to perform? (+, -, *)*
matrix 1: 
9 8 
7 6 

matrix 2:
5 4 
3 2 

matrix 1 * matrix 2: 
90 64 
42 24 



// Addition 
Input first matrix values
Row 1 and Column 1: 9
Row 1 and Column 2: 8
Row 2 and Column 1: 7
Row 2 and Column 2: 6
Input second matrix values
Row 1 and Column 1: 5
Row 1 and Column 2: 4
Row 2 and Column 1: 3
Row 2 and Column 2: 2
Which operation would you like to perform? (+, -, *)+
matrix 1: 
9 8 
7 6 

matrix 2:
5 4 
3 2 

matrix 1 + matrix 2: 
14 12 
10 8 




// Subtration 
Input first matrix values
Row 1 and Column 1: 9
Row 1 and Column 2: 8
Row 2 and Column 1: 7
Row 2 and Column 2: 6
Input second matrix values
Row 1 and Column 1: 5
Row 1 and Column 2: 4
Row 2 and Column 1: 3
Row 2 and Column 2: 2
Which operation would you like to perform? (+, -, *)-
matrix 1: 
9 8 
7 6 

matrix 2:
5 4 
3 2 

matrix 1 - matrix 2: 
4 4 
4 4 





*/