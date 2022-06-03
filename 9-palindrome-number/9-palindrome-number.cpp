class Solution {
public:
    
    bool isPalindrome(int x) {
      if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int rem , reverse=0;
        while(reverse<x){
        rem = x%10;
        reverse = reverse*10+ rem;
        x = x/10;
        }
        return reverse==x || reverse/10==x ;  
    }
};