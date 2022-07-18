#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <string.h>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    int ans = 0;
    int len = str.size();
    int p = len -1;
    for(int i = 2; i < len;i++){
        switch(str[i]){
            case '0':
                //do nothing
                break;
            case '1':
                ans += 1 * pow(16,p-i);
                break;
            case '2':
                ans += 2 * pow(16,p-i);
                break;
            case '3':
                ans += 3 * pow(16,p-i);
                break;
            case '4':
                ans += 4* pow(16,p-i);
                break;
            case '5':
                ans += 5 * pow(16,p-i);
                break;
            case '6':
                ans += 6 * pow(16,p-i);
                break;
            case '7':
                ans += 7 * pow(16,p-i);
                break;
            case '8':
                ans += 8 * pow(16,p-i);
                break;
             case '9':
                ans += 9 * pow(16,p-i);
                break;
            case 'A':
                ans += 10 * pow(16,p-i);
                break;
            case 'B':
                ans += 11 * pow(16,p-i);
                break;
            case 'C':
                ans += 12 * pow(16,p-i);
                break;
            case 'D':
                ans += 13 * pow(16,p-i);
                break;
            case 'E':
                ans += 14 * pow(16,p-i);
                break;
            case 'F':
                ans += 15 * pow(16,p-i);
                break;
           default:
                break;
        }
    }
    cout << ans;
    return ans;
}