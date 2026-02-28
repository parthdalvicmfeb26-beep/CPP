#include<iostream>
using namespace std;

class TollBooth{
    int totalVehicles = 0;
    double totalRevenue = 0;
    
    public:
        void reset(){
            totalVehicles = 0;
            totalRevenue = 0;
        }
        void vehiclePayingToll(int vehicleType, double tollAmount){
            if(vehicleType == 1){
                totalRevenue += tollAmount;
            }
            else if(vehicleType == 2){
                totalRevenue += tollAmount;
            }
            else{
                totalRevenue += tollAmount;
            }
            totalVehicles++;
        }
        int getTotalVehicles() const{
            return totalVehicles;
        }
        int getTotalRevenue() const{
            return totalRevenue;
        }
    
};

int main(){
    TollBooth tb;
    int vehicle, choice;
    double tollamt;
    do{
        cout << "\n1. Add a standard car and collect toll." << endl;
        cout << "\n2. Add a truck and collect toll." << endl;
        cout << "\n3. Add a bus and collect toll." << endl;
        cout << "\n4. Display total cars passed." << endl;
        cout << "\n5. Display total revenue collected." << endl;
        cout << "\n6. Rest booth statistics." << endl;
        cout << "\n7. Exit!" << endl;

        cout << "\n-------------------------------------------------------------------------------------------------\n";

        cout << "\nEnter You\'re choice: ";
        cin >> choice;

        switch (choice){
            case 1:
                cout << "Enter the amount of toll: ";
                cin >> tollamt;
                vehicle = 1;
                tb.vehiclePayingToll(vehicle, tollamt);

                break;

            case 2:
                cout << "\nEnter the amount of toll: ";
                cin >> tollamt;
                vehicle = 2;
                tb.vehiclePayingToll(vehicle, tollamt);

                break;

            case 3:
                cout << "\nEnter the amount of toll: ";
                cin >> tollamt;
                vehicle = 3;
                tb.vehiclePayingToll(vehicle, tollamt);

                break;

            case 4:
                cout << "\nTotal Vehicles/Cars passed: " << tb.getTotalVehicles() << endl;
                
                break;

            case 5:
                cout <<"\n Total Revenue Collected: " << tb.getTotalRevenue() << endl;

                break;

            case 6:
                cout <<"\nResetting Booth Statics!" << endl;
                tb.reset();

                break;

            case 7:
                cout << "\nExiting Program!" << endl;
        }
    }while(choice != 7);
}