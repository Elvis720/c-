#include <vector>
#include <iostream>
using namespace std;

int main() {
    int k ;
    cin >> k;
    for(int i = 0;i < k;i++){
        int m,n;
        cin >>n;
        cin >> m;
        vector<vector<int>> arry(n,vector<int>(m,0));
        arry[0][0] = 1;
        //监测
        for(int row = 0;row < n;row++){
            for(int col = 0;col < m;col++){
                cout << arry[row][col] << ' ';
            }
            cout << endl;
        }
        for(int row = 0;row < n;row++){
            for(int col = 0;col < m;col++){
                // 纵向可达
               for(int j = 0;j < row;j++){
                   if((col - j) % 2 != 0){
                       arry[row][col] += arry[j][col];
                   }
               }
                
                 // 横向可达
               for(int j = 0;j < col;j++){
                   if((row - j) % 2 != 0){
                       arry[row][col] += arry[row][j];
                   }
               }
                
            }
        }
        //------------------------------------
         for(int row = 0;row < n;row++){
            for(int col = 0;col < m;col++){
                cout << arry[row][col] << ' ';
            }
            cout << endl;
        }
        cout << arry[n-1][m-1] << endl;
        
    }
    
    return 0;
}
// 64 位输出请用 printf("%lld")