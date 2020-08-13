#include<iostream>
#include<math.h>

using namespace std;

/*
class sphere{

    int x; 
    int y;
    int z;
    float radius;

    public:

    void set_and_getx(){
        int a;
        cout << "\nEnter the value of x: ";
        cin >> a;
        x = a;
    }

    void set_and_gety(){

        int b;
        cout << "\nEnter the value of y: ";
        cin >> b;
        y = b;
    }

    void set_and_getz(){

        int c;
        cout << "\nEnter the value of z: ";
        cin >> c;
        z = c;
    }

    void set_and_getRad(){

        float r;
        r = (x * x) + (y * y) + (z * z);
        radius = sqrt(r);
        cout << "\nThe radius is: " << radius << endl;
    }

    void display(){

        cout << "\nCenter coordinates: (" << x << ", " << y << ", " << z << ")" << endl;

    }

    void getVolume(){
    
        float temp;
        temp = (3.14 * 4 * (radius * radius * radius)) / 3;
        cout << "\nThe volume is: " << temp << endl;
    }

    void getArea(){

        float temp;
        temp = 3.14 * 4 * (radius * radius);
        cout << "\nThe surface area is: " << temp << endl;
    }

};

int main(){

    sphere s;

    s.set_and_getx();
    s.set_and_gety();
    s.set_and_getz();
    s.display();
    s.set_and_getRad();
    s.getVolume();
    s.getArea();
    
    return 0;

}


Output: 

Enter the value of x: 32

Enter the value of y: 45

Enter the value of z: 34

Center coordinates: (32, 45, 34)

The radius is: 64.846

The volume is: 1.14161e+06

The surface area is: 52814.8

*/


class Person{

    private:
    string firstName;
    string lastName;
    int ID;
    
    public:

    Person(){
        
        firstName = "";
        lastName = "";
        ID = 0;
    }

    Person(string first, string last, int id){

        firstName = first;
        lastName = last;
        ID = id;
    }

    string getFirstName(){
        
        return firstName;
    }
    
    string getLastName(){

        return lastName;
    }

    
    int getID(){

        return ID;
    }

    string getFullName(){

        return firstName+" "+lastName;
    }

    void print(){

        cout << firstName << " " << lastName << "\n";
        cout << "ID: " << ID << "\n";
    }

};

int main(){

    Person person("Jeremiah", "Haynes", 2113);

    cout << "getName and getID methods: \n";
    cout << person.getFirstName() << " " << person.getLastName() << "\nID: " << person.getID() << "\n"; 
    cout << endl;

    cout << "getFullName method: \n";
    cout << person.getFullName() << "\n";
    cout << endl;

    cout << ".print method: \n";
    person.print();
    cout << endl;
    return 0;
}


/*
Output: 

getName and getID methods: 
Jeremiah Haynes
ID: 2113

getFullName method: 
Jeremiah Haynes

.print method: 
Jeremiah Haynes
ID: 2113

*/