#include<iostream>>
using namespace std;


class Zombie{
    private:
        int zombie_health;
        static int zombie_count;
    public:
    Zombie(int health){
        zombie_health=health;
        zombie_count++;
        cout<<"A new zombie rises! Total count: "<<zombie_count<<endl;
    }
    
    void takeDamage(int damage){
        if(zombie_health-=damage <=0){
            zombie_health=0;
            cout<<"Zombie is 'down'"<<endl;
        }
        else{
            zombie_health-=damage;
        }
        return;
    }
    
    int getHordeCount() const{
        return zombie_count;
    }
    
    ~Zombie(){
        zombie_count--;
        cout<<"Zombie eliminated. Total remaining: "<<zombie_count<<endl;
    }
};

int Zombie::zombie_count=0;