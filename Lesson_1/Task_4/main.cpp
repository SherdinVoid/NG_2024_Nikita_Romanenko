#include <iostream>
using namespace std;
int main(){
    int zpmoney;
    cout <<"You salary:";
    cin >>zpmoney;
    int bober = zpmoney / 1000;
    switch (bober){
    case 0:
        cout <<"Work harder!";
        break;
    case 1 ... 999:
        cout <<"Well done!";
        break;
    default:
        cout <<"You are a millionaire!!!";
        break;
    }
}
