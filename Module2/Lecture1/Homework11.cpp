#include <iostream>  
#include <vector>  
#include <algorithm>  

using namespace std;  

int main() {  
    int t;  
    cin >> t;  

    while (t--) {  
        int n, H, M;  
        cin >> n >> H >> M;  

        vector<int> alarms;  
        for (int i = 0; i < n; ++i) {  
            int h, m;  
            cin >> h >> m;  
            alarms.push_back(h * 60 + m);  
        }  

        int bedTime = H * 60 + M;  
        int minSleepTime = 1440;  

        for (int i = 0; i < n; ++i) {  
            int alarm = alarms[i];  
            if (alarm == bedTime) {  
                minSleepTime = 0;  
                break;  
            }  
            if (alarm > bedTime) {  
                minSleepTime = min(minSleepTime, alarm - bedTime);  
            } else {  
                minSleepTime = min(minSleepTime, (1440 - bedTime) + alarm);  
            }  
        }  

        int hours = minSleepTime / 60;  
        int minutes = minSleepTime % 60;  
        
        cout << hours << " " << minutes << endl;  
    }  

    return 0;  
}    
