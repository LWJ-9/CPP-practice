#include <iostream>

using namespace std;

void printCrap(int x = 5){
    cout << "the paramater is " << x << endl;
    }

int addNumbers(int x, int y){
    int answer = x + y;
    return answer;
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
    return 0;
}

