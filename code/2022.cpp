#include<iostream>
#include<vector>
using namespace std;

//自底向上 dp

int minimumTotal(vector<vector<int>>& triangle) {
	
        int m = triangle.size();
        int n = triangle[m-1].size();
	
        vector<vector<int>> dp(m,vector<int>(n,0));
    
        for(int i = 0; i < n; i++){
            dp[m-1][i] = triangle[m-1][i];
        }    
	
        for(int i = m-2; i >= 0; i--){
			
            n = triangle[i].size();
			
            for(int j = 0; j < n; j++){
				
                dp[i][j] = min(dp[i+1][j],dp[i+1][j+1]) + triangle[i][j];

        	}
        }
    return dp[0][0];
}

int main(){

    int n;
    cin >> n;
    vector<vector<int>> map;
    for(int i = 1;i <=n;i++){
        vector<int> ele;
        for(int j = 0;j < i;j++){
            int temp;
            cin >> temp;
            ele.emplace_back(temp);
        }
        map.emplace_back(ele);
    }
    cout << minimumTotal(map);

    return 0;
}
