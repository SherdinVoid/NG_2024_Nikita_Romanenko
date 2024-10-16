#include <iostream>
using namespace std;
int main(){
    int Dodanok,Sosiska;
    Dodanok=0;
    Sosiska=0;
    while (true) {
    char Kavun;
    cin>>Dodanok>>Sosiska>>Kavun;
    switch (Kavun) {
    case '*':
        cout<<Dodanok*Sosiska;
        break;
    case '/':
        cout<<Dodanok/Sosiska;
        break;
    case '+':
        cout<<Dodanok+Sosiska;
        break;
    case '-':
        cout<<Dodanok-Sosiska;
        break;
    default:
        return 0;
        }
    }
}
