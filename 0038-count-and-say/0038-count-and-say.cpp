// class Solution {
// public:
//     string countAndSay(int n) {
        
//         /*
//             1.    1                   - one times 1
//             2.    1 1                 - two times 1 
//             3.    2 1                 - one times 2, one times 1
//             4.    1 2 1 1             - ....
//             5.    1 1 1 2 2 1         - ....
//             6.    3 1 2 2 1 1         -
//             7.    1 3 1 1 2 2 2 1     -
//         */
//         if(n==1) return "1";
//         if(n==2) return "11";
        
//         string res = "11";
        
//         for(int i=3; i<=n; i++){
//             res += '#';             //exra overhead for reading last char
//             string temp = "";
//             int count = 1;
//             for(int j=1; j<res.length(); j++){
//                 if(res[j]!=res[j-1]){
//                     // j++;
//                     temp = temp + to_string(count) + res[j-1];
//                     count = 1;
//                 }
//                 else count++;
//             }
//             res = temp;
//         }
//         return res;

//     }
// };

class Solution {
public:
    string countAndSay(int n) {
        
        /*
            1.    1                   - one times 1
            2.    1 1                 - two times 1 
            3.    2 1                 - one times 2, one times 1
            4.    1 2 1 1             - ....
            5.    1 1 1 2 2 1         - ....
            6.    3 1 2 2 1 1         -
            7.    1 3 1 1 2 2 2 1     -
        */
        if(n==1) return "1";
        
        string say = countAndSay(n-1);
        string result = "";
        for(int i=0; i<say.length(); i++){
            char ch = say[i];
            int count =1;
            while( i < say.length()-1 && say[i] == say[i+1]){
                count++;
                i++;
            }
            result += to_string(count) + string(1,ch);
        }
        return result;

    }
};
