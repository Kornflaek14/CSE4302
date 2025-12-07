#include <iostream>>
using namespace std;

class SmartElevator
{
private:
    int currentFloor;
    double weight;
    int maxFloor;

public:
    SmartElevator(int floor_no)
    {
        maxFloor = floor_no;
        currentFloor = 0;
        weight = 0.0;
    }
    void boardPassenger(double add_weight)
    {
        if (weight + add_weight > 4302)
        {
            cout << "Overload! Someone must exit." << endl;
            return;
        }
        weight += add_weight;
        return;
    }

    void goToFloor(int new_floor)
    {
        if (currentFloor + new_floor > maxFloor)
        {
            cout << "Error 404: Floor not found. Try reality instead." << endl;
            return;
        }
        else if (new_floor == 0)
        {
            cout << "Staying put engaged. Enjoy the view!" << endl;
            return;
        }
        else
        {
            currentFloor += new_floor;
            return;
        }
    }

    void displayPanel() const
    {
        cout << "Floor: " << currentFloor << "\nWeight: " << weight << endl;
    }

    ~SmartElevator()
    {
        cout << "Elevator system entering maintenance mode." << endl;
    }
};