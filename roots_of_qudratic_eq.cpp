#include<iostream>
#include<cmath>
using namespace std;
void roots(){
    int a,b,c,d;
    cout << "enter values of a, b and c" << endl;
    cin >> a >> b >> c;
    d=b*b-4*a*c;
    float f_root = (-b-sqrt(d))/(2*a);
    float s_root = (-b+sqrt(d))/(2*a);
    cout << "first root = " << f_root << endl;
    cout << "second root = " << s_root << endl;
}


int main() {
    roots();
    return 0;
}
