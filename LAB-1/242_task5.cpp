#include<iostream>

using namespace std;

int main(){
    int n;
    cout <<"Enter geese count:";
    cin >>n;
    int total=n;
    for(int i=0;i<n;i++){
        int egg=total*13;
        if(egg%2==0){
            egg=egg/2;
            total=total+egg;
        }
        else{
            egg= (egg/2)+1;
            total=total+egg;
        }
        cout <<"Geese count after year"<<i+1<<":"<<total<<endl; 
    }


}