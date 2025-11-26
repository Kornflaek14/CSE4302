#include<iostream>
using namespace std;

class SnackProfile{
    private:
        string itemName;
        string maker;
        double MRP=0.0;
        double discount=7.0;

    public:
        void setLabels(const string item , const string makerName){
            itemName=item;
            maker=makerName;
        }
        void setMRP(double price=0.0){
            if(price==0){
                cout <<"Invalid MRP; set to 0.0"<<endl;
                return;
            }
            else
                MRP=price;
        }
        void setDiscount(double percent=7.0){
            if(percent< 0 || percent >25 ){
                cout <<"Invalid"<<endl;
            }
            else{
                discount=percent;
            }
        }
        double getUnitPrice(){
            double sellingPrice=MRP*(1-(discount)/100.00);
            return sellingPrice;
        }
        double getTotalPrice(int qty=1){
            if(qty<0){
                cout <<"Invalid quantity"<<endl;
                return 0.0;
            }
            else{
                double sellingPrice=getUnitPrice();
                double total=qty*sellingPrice;
                return total;
            }
        }
        void info (){
            cout<<itemName<<" by "<<maker<<": MRP "<<MRP<<", Discount "<<discount<<"%, Unit "<<getUnitPrice<<endl; 
        }

};