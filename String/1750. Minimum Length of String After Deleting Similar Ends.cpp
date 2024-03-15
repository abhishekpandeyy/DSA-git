#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int minimumLength(string str) {
        int n=str.length();
        int s=0,e=n-1,cnt=0;
         char pp='p',ps='q';
         cout<<n<<endl;
        while(s<e)
        {
            
            if(str[s]==str[e]){
                pp=str[s];
                ps=str[e];
                s++;e--;
                cnt+=2;
            }
            else if(str[s]==pp||str[e]==ps)
            {
                if(str[s]==pp){
                    cnt++;
                    s++;
                }
                if(str[e]==ps){
                e--;
                cnt++;
                }
            }
            else
            break;
        }
        if(s==e &&(str[s]==pp ||str[s]==ps))
        return 0;
       
        return n-cnt;
        

    }
};