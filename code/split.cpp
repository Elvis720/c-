#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> split(string s,char a);
int main(){
    string str;
    getline(cin,str);
    vector<string> arry = split(str,' ');
   
    cout << arry[3] << endl;
    swap(arry[0],arry[3]);
    cout << arry[3];

    return 0;
}

vector<string> split(string s,char a){
    int len = s.size();
    int j = 0;
    string str;
    vector<string> ans;
    for(int i = 0; i < len;i++){
        if(s[i] == a){
            str = s.substr(j,i-j);
            ans.emplace_back(str);
            j = i +1;
        }

    }
    str = s.substr(j,len+1-j);
    ans.emplace_back(str);
    return ans;
}