class Solution {
public:
    bool isPalindrome(int x) {
       int  y=x;
        if(y<0){
            return false;
        }
        long  long num=0;
        while(y!=0){
            int digit=y%10;
            num=num*10+digit;
             y=y/10;
        }
        if(num==x){
            return  true;
        }
        return false;
    }
};