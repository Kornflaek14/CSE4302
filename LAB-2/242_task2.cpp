#include<iostream>
using namespace std;

enum etype{
    laborer, secretary, manager, accountant, executive, researcher
};

int main(){
    char c;
    enum etype var;
    cout << "Enter employee type(first letter only):";
    cin >> c;
    switch(c){
        case 'l':
            var = laborer;
            break;
        case 's':
            var = secretary;
            break;
        case 'm':
            var = manager;
            break;
        case 'a':
            var = accountant;
            break;
        case 'e':       
            var = executive;
            break;
        case 'r':
            var = researcher;
            break;
        default:
            cout << "Invalid input"<<endl;
            break;
    }
    string emp;
    switch(var){
        case 0:
            emp = "laborer";
            break;
        case 1:
            emp = "secretary";
            break;
        case 2:
            emp = "manager";
            break;
        case 3:
            emp = "accountant";
            break;
        case 4:       
            emp  = "executive";
            break;
        case 5:
            emp = "researcher";
            break;
        default:
            cout << "Invalid input"<<endl;
            break;
    }

    cout << "Employee type is "<<emp<<endl;

}