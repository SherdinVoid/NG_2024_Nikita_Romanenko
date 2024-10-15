#include <iostream>
using namespace std;
int main(){
    int s,v;
    s=0;
    v=0;
    while (true) {
    char a;
    cin>>s>>v>>a;
    switch (a) {
    case '*':
        cout<<s*v;
        break;
    case '/':
        cout<<s/v;
        break;
    case '+':
        cout<<s+v;
        break;
    case '-':
        cout<<s-v;
        break;

    default:
        return 0;
        }
    }
}
