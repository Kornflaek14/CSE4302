#include<iostream>
using namespace std;

typedef struct{
    int num;
    int den;
} fraction;

int main(){
    fraction f1,f2,f3;
    char dummychar;
    cout << "Enter first fraction: ";
    cin >> f1.num >> dummychar >> f1.den;
    cout << "Enter second fraction: ";
    cin >> f2.num >> dummychar >> f2.den;
    f3.num =((f1.num *f2.den)+(f1.den*f2.num));
    f3.den= f1.den*f2.den;
    cout << "Sum: "<<f3.num<<"/"<<f3.den<<endl; 
    return 0;

}