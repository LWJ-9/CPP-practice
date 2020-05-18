#include <iostream>
#include "Burrito.h"
using namespace std;

void printCrap(int x = 5){
    cout << "the paramater is " << x << endl;
    }

int addNumbers(int x, int y){
    int answer = x + y;
    return answer;
}
int recur(int x, int y){
    return y==0? x : recur(y,x%y) ;
}
class LisClass{
public:
    LisClass(string z){
        cout << "LisClass constructer initualized \n";
        setName(z);
    }
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }

    coolSaying(){
        cout << name << " is saying " << "fake it until you make it!" << endl;
    }
private:
    string name;
};

void averageAge(){
    int xx = 1;
    int number;
    int total = 0;

    while(xx <= 5 ){
        cout << "Enter a number you want add" << endl;
        cin >> number;
        total = total + number;
        xx++;
    }

    cout << "Your total is " << total << endl;
}
void peopleEntered(){
    int age1;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first persons age or -1 to quit"  << endl;
    cin >> age1;

    while (age1 != -1){
        ageTotal += age1;
        numberOfPeopleEntered += 1;

            cout << "Enter first persons age or -1 to quit" << endl;
            cin >> age1;
    }

    cout << "Number of people entered: " << numberOfPeopleEntered << endl;
    cout << "Average of age:" << ageTotal << endl;

}
void theSwitchStmt(){

    int age;
    cout << "input a age" << endl;
    cin >> age;

    switch(age){
    case 16:
        cout << "hey you can drive now!" << endl;
        break;
    case 18:
        cout << "go buy some lotto tickets~!" << endl;
    case 21:
        cout << "buy me some beer" << endl;
        break;
    default:
        cout << "sorry you get nothing" << endl;
    }

}

int main()
{
    printCrap();
    cout << addNumbers(43, 86) << endl;

    LisClass lisObject("some name");
    lisObject.coolSaying();

    string  st = "Li Weijie";
    lisObject.setName(st);
    cout << lisObject.getName() << endl;
    lisObject.coolSaying();


    LisClass lo2("Sally mcSalad");
    cout << lo2.getName() << endl;
    lo2.coolSaying();

    Burrito bo;

    //!!--if statement--
    int x = 11;
    if(x > 10 && x < 12){
        cout <<  "omg i am preggy" << endl;;;
    }

    int age = 110;

    if(age > 60){
        cout << "wow you are old" << endl;

            if(age >= 100){
                cout << "why are you still alive?" << endl;
            }
    }else{
        cout << "you are young ,get a job!" << endl;
    }

    cout << recur(231,15) << endl ;


    //!!--while statement--

    int bacon = 0 ;

    while(bacon < 5){
        cout << "bacon in " << bacon <<endl;
        bacon++;
    }
    int pp=100;
    cout << pp++ << pp << pp++  << ++pp <<endl;
    cout << pp << endl;

    //! cin


    //averageAge();
    //peopleEntered();
    theSwitchStmt();


    //return 0;
}

