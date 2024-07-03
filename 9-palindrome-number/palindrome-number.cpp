class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long rev = 0;
        int y=x;
        while(y>0){
            int ld = y%10;
            rev = (rev*10)+ld;
            y/=10;
        }
        // if(rev==x){
        //     cout<<"true";
        // }else{
        //     cout<<"false";
        // }


        return rev==x;
    }
};