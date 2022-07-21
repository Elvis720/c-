#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){

    long long a,b,c,d;
    scanf("%lld.%lld.%lld.%lld",&a,&b,&c,&d);
    long long addr;
    cin >> addr;
    long long ans;
    ans = (a<< 24) + (b << 16) + (c << 8) + d;
    cout <<   ans<<endl;
    // 下一步
    cout << ((addr>> 24)&0xff) <<'.' << ((addr>>16)&0xff) << '.'<<((addr>> 8)&0xff) <<'.' << (addr & 0xff);
    
    return 0;
}