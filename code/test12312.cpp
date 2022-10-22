#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int> & arry);
int main(){
  int n;
  cin >> n;
  vector<int> array;
  int count = 0;
  while(n > 0){
    int num;
    cin >> num;
    if(num == 0){
      count++;
    }
    array.emplace_back(num);
    n--;
  }
  int s = sum(array);
  int ans = count;
  if(count == 0){
    if(sum == 0){
      cout << 1;
    }
  }
  else{
    cout << ans;
  }
  return 0;
}
int sum(vector<int> & arry){
  int ans = 0;
  for(int i =0;i < arry.size();i++){
    ans += arry[i];
  }
  return ans;
}