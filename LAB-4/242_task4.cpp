#include<iostream>
using namespace std;

class CreditCard{
    private:
        const double credit_limit;
        double balance_Owed; 

    public:
        CreditCard(double limit): balance_Owed(0),credit_limit(limit) {}
        ~CreditCard(){
            cout<<"Card destroyed"<<endl;
        }
        void makePurchase(double amount){
            if(amount > credit_limit){
                cout<<"Declined"<<endl;
                return;
            }
            else{
                balance_Owed+=amount;
            }
        }

        bool compareAvailibity(CreditCard card2) const{
            if(credit_limit-balance_Owed>card2.credit_limit-card2.balance_Owed){
                return true;
            }
            else{
                return false;
            }
        }

        void displayInfo()const{
            cout<<"Credit Limit: "<<credit_limit<<endl;
            cout<<"Current Balance: "<<balance_Owed<<endl;
            cout<<"Available Credit: "<<credit_limit-balance_Owed<<endl;
        }


};