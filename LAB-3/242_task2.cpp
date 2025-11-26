#include<iostream>
using namespace std;


class RatioQuota{
    private:
        int num;
        int den;
    
    public:
        void setRatio(int p,int q){
            if(q==0){
                cout <<"Denominator cannot be zero."<<endl;
                return;
            }
            num=p;
            den=q;
        }
        double asDecimal(){
            double ratio =(double)num/(double)den;
            return ratio;
        }
        void reciprocal(){
            if(num==0){
                cout <<"Reciprocal failed: zero cannot be a denominator"<<endl;
                return;
            }
            int temp=num;
            num=den;
            den=temp;
        }
        void show(){
            cout <<num<<"/"<<den<<endl;
        }
};