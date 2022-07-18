#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while(1){
    int flag = 0;
    cin >> str;
    if(str.size()<9){
        cout << "NG" << endl;
        continue;
    }
    int type[4] = {0,0,0};
    //判断类型数
    for(int i= 0; i < str.size(); i++){
        if(isdigit(str[i])){
            type[0] =1;
        }
        else if(islower(str[i])){
            type[1] = 1;
        }
        else if(isupper(str[i])){
            type[2] = 1;
        }
        else{
            type[3] = 1;
        }
    }
    int sum = 0;
    for(int i = 0; i <4;i++){
        sum += type[i];
    }
    if(sum < 3){
        cout << "NG" << endl;
        continue;
    }
    //子串重复
    for(int i = 0; i < str.size(); i++){
        for(int j = i + 1; j < str.size();j++){
            for(int temp = 0;temp + j <str.size();temp++){
                if(temp >= 2){
                   flag = 1;
                    break;
                }
                if(str[i+temp] != str[j+temp]){
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(flag){
        cout << "NG" << endl;
    }
    else{
        cout << "OK"<<endl;
    }
    }
    return 0;
}