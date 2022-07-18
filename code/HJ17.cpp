#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
int judge(string &str);
int ans[2];
int main(){
    string temp,str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ';'){
            
            judge(temp);
            temp.clear();
        }
        else{
            temp = temp + str[i];
        }
    }
    cout<<ans[0]<<','<<ans[1];
    return 0;
}

int judge(string &str){
    int nums = 0;
    if(isdigit(str[1])){
        nums = str[1] - '0';
        if(str.size()==3){
            if(isdigit(str[2])){
                nums = (str[1] - '0') * 10+ (str[2]-'0');
            }
            else{
                nums = 0;
            }
        }

    }
    switch(str[0]){
        case 'A':
            ans[0] -= nums;
            break;
         case 'D':
            ans[0] += nums;
            break;
         case 'W':
            ans[1] += nums;
            break;
         case 'S':
            ans[1] -= nums;
            break;
        default:
            break;
    }
    return 0;
}