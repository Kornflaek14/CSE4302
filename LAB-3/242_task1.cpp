#include<iostream>
using namespace std;

class BatchMeter{
    private:
        int pulse=1;
        int total=0;
    public:
        void setPulseSize(int s){
            if(s<=0){
                cout << "Invalid pulse; must be > 0"<<endl;
            }
            else{
                pulse =s;
            }
            return;
        }
        int getTotal(){
            return total;
        }
        void addPulse(){
            total+=pulse;
            return;
        }
        void getClear(){
            total=0;
            return;
        }
};

