class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pattern string字符串 
     * @param str string字符串 
     * @return bool布尔型
     */
    bool testMatch(string pattern, string str) {
        // write code here
        int n = pattern.size();
        int m = str.size();
        int index = 0;
        string tempstr;
        vector<string> vec;
        for(int i = 0;i < m;i++){
            if(str[i] == ' '){
                vec.emplace_back(tempstr);
                tempstr.clear();
            }
            tempstr = tempstr + str[i];
        }
        
        
        for(int i = 0; i < 4;i++){
            for(int j = i; j < 4;j++){
                if((pattern[i]==pattern[j]) != (vec[i]==vec[j])){
                    return false;
                }
            }
        }
        return true;
    }
};





class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pattern string字符串 
     * @param str string字符串 
     * @return bool布尔型
     */
    bool testMatch(string pattern, string str) {
        // write code here
        int n = pattern.size();
        int m = str.size();
        int index = 0;
        string str1;
        string str2;
        string str3;
        string str4;
        for(int i = 0;i < m;i++){
            if(str[i] == ' '){
                index++;
            }
            else{
                switch(index){
                    case 0:
                        str1 = str1 +str[i];
                        break;
                    case 1:
                        str2 = str2 +str[i];
                        break;
                    case 2:
                        str3 = str3 +str[i];
                        break;
                    case 3:
                        str4 = str4 +str[i];
                        break;
                }
            }
        }
        vector<string> vec;
        vec.emplace_back(str1);
        vec.emplace_back(str2);
        vec.emplace_back(str3);
        vec.emplace_back(str4);
        for(int i = 0; i < 4;i++){
            for(int j = i; j < 4;j++){
                if((pattern[i]==pattern[j]) != (vec[i]==vec[j])){
                    return false;
                }
            }
        }
        return true;
    }
};