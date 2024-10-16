#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int X, Y; 
        cin >> X >> Y;
        
        
        int floorChef = (X - 1) / 10 + 1;
        int floorChefina = (Y - 1) / 10 + 1;
        
        
        int floorsToTravel = abs(floorChef - floorChefina);
        
        cout << floorsToTravel << endl;
    }
    
    return 0;
}
