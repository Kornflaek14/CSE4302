#include<iostream>
using namespace std;

class BatteryMonitor{
    private:
        double currentBattery=100.0;
        double criticalThreshold=15.0;
    public:
        void setCriticalThreshold(double percent){
            if(percent< 5.0 || percent > 25.0){
                cout <<  "Invalid threshold; must be 5-25%"<<endl;
            }
            else{
                criticalThreshold=percent;
            }
        }
        void drain(double amount){
            if(amount <0){
                cout<< "Invalid drain amount"<<endl;
            }
            else if(currentBattery-amount<0){
                currentBattery=0;
                cout<<"Battery depleted"<<endl;
            }
        }
        void recharge(double amount){
            if(amount <0){
                cout<< "Invalid recharge amount"<<endl;
            }
            else if(currentBattery+amount>100){
                currentBattery=100;
                cout<<"Battery fully charged"<<endl;
            }
        }
        bool needsCharging(){
            if(currentBattery<=criticalThreshold){
                return true;
            }
            else return false;
        }
        void status(){
            cout<<"Battery: "<<currentBattery<<"%";
            if(needsCharging){
                cout<<"CRITICAL"<<endl;
            }
            else cout<<"OK"<<endl;
        }
};