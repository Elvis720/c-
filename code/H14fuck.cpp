#include<vector>

#include<iostream>

using namespace std;
int main(){
    vector<string> arry;
    int n;
    cin >> n;
    for(int i=0;i < n;i++){
        string str;
        cin >> str;
        arry.emplace_back(str);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0;j < n - 1 -i;j++){
            if(arry[j].compare(arry[j+1])){
                swap(arry[j],arry[j+1]);
            }
        }
    }
    for(string ans:arry){
        cout << ans << endl;
    }
    return 0;
}
