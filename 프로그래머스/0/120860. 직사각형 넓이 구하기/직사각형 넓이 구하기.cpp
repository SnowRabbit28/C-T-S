#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int mmX = -300;
    int mmY = -300;
    int mnX = 300;
    int mnY = 300;
    
    for(int i = 0; i < 4; i++){
        mmX = max(mmX,dots[i][0]);
        mmY = max(mmY,dots[i][1]);
        mnX = min(mnX,dots[i][0]);
        mnY = min(mnY,dots[i][1]);
    }
    return (mmX-mnX) * (mmY-mnY);
}