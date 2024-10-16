#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
   
    int time_at_2x_speed = Y / 2;
    
    
    int remaining_time = X - Y;
    
    int total_time = time_at_2x_speed + remaining_time;
    
    cout << total_time << endl;
    
    return 0;
}
