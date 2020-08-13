#include <iostream>

using namespace std;


/*
void Mystery(int array[], int n);

int main(){

   #define Nelements 5

 

     int list[Nelements];

 

     list[0] = 10;

     list[1] = 20;

     list[2] = 30;

     list[3] = 40;

     list[4] = 50;



    Mystery(list, Nelements);

    for(int i = 0; i < Nelements; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}

void Mystery(int array[], int n) { 

          int i, temp;

          temp = array[n - 1];

          for (i = 1; i < n; i++) {

                  array[i] = array [i - 1];

          }

          array[0] = temp;

}
*/



class Pizza
{

private:
int cheese_toppings, pepperoni_toppings;
string pizza_size;

public:
// default constructor
Pizza()
{
pizza_size = "small";
cheese_toppings = 1;
pepperoni_toppings = 0;
}

// parametr constructor
Pizza(string size_, int cheese, int pepperoni)
{
pizza_size = size_;
cheese_toppings = cheese;
pepperoni_toppings = pepperoni;
}

// get methods 
string getSize() {return pizza_size;}
int getCheeseToppings() {return cheese_toppings;}
int getPepperoniToppings() {return pepperoni_toppings;}

// set methods 
void setSize(string size_) {pizza_size = size_;}
void setCheeseToppings(int cheese) {cheese_toppings = cheese;}
void setPepperoniToppings(int pepperoni) {pepperoni_toppings = pepperoni;}

double calcCost()
{
double cost = 0.0;
// cost for a small pizza
if(pizza_size.compare("small") == 0){
cost = 10.0 + (getCheeseToppings() + getPepperoniToppings()) * 2;
}
// cost for a medium pizza
if(pizza_size.compare("medium") == 0){
cost = 12.0 + (getCheeseToppings() + getPepperoniToppings()) * 2;
}
// cost for a large pizza
if(pizza_size.compare("large") == 0){
cost = 12.0 + (getCheeseToppings() + getPepperoniToppings()) * 2;
}
return cost;
}
};

// driver function 
int main()
{

Pizza p1;
p1.setSize("small");
p1.setCheeseToppings(2);
p1.setPepperoniToppings(2);

Pizza p2("medium", 3, 3);

// print details
cout << "Pizza 1 Details:\n";
cout << "Size: " << p1.getSize() << endl;
cout << "Number of Cheese Toppings: " << p1.getCheeseToppings() << endl;
cout << "Number of Pepperoni Toppings: " << p1.getPepperoniToppings() << endl;
cout << "Cost: $" << p1.calcCost() << endl;
cout << endl;
cout << "Pizza 2 Details:\n";
cout << "Size: " << p2.getSize() << endl;
cout << "Number of Cheese Toppings: " << p2.getCheeseToppings() << endl;
cout << "Number of Pepperoni Toppings: " << p2.getPepperoniToppings() << endl;
cout << "Cost: $" << p2.calcCost() << endl;
return 0;
}

