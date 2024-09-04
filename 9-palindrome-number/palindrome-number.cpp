class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long reverse = 0;
        int y = x;

        while(y>0){
            int z = y%10;
            reverse = (reverse*10) + z;
            y = y/10;
        }
        if(reverse == x) return true;
        else return false;
    }
};