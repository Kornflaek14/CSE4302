#include<iostream>>
using namespace std;


class TaxEstimator{
    private:
        double annual_income;
        double deductible_expenses;
        double determineBracketRate()const{
            double net_income=annual_income-deductible_expenses;
            if(net_income<10000){
                return 0.0;
            }
            else if(net_income>10000 && net_income<50000){
                return 10.0;
            }
            else{
                return 20.0;
            }
        }

    public:
        void addIncomesource(double addl_inc){
            if(addl_inc<0){
                cout<< "Negative income is bad for the economy and my code."<<endl;
                return;
            }
            else{
                annual_income+=addl_inc;
                return;
            }
        }

        void addExpense(double addl_exp){
            deductible_expenses+=addl_exp;
        }

        void printTaxSlip(){
            double net_income=annual_income-deductible_expenses;
            double rate=determineBracketRate();
            double tax= (net_income/100.0)*rate;
            cout << tax<<endl;
            return;
        }


        TaxEstimator(){
            annual_income=0;
            deductible_expenses=0;
        }
        ~TaxEstimator(){
            cout<<"Tax session closed."<<endl;
        }


};