#include "Burrito.h"
#include <iostream>
using namespace std;

Burrito::Burrito()
{
    cout << "i am a banana, man" << endl;
}
Burrito::~Burrito(){
    cout << "i am back to man, man" << endl;
}
Burrito::printCrap(){
    cout << "Dose someone said steak?" << endl;
    return 100;
}
void Burrito::printCrap2() const{
    cout << "i am a constant function" << endl;
}
