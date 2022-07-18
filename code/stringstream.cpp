#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int len = str.size();
    int ans = 0;
    for(int i = len -1;i >= 0 ;i--){
        char temp = str[i];
        int a =str[i];
        if(a == 32){
            break;
        }
        ans++;
    }
    cout << ans;
    return 0;
}