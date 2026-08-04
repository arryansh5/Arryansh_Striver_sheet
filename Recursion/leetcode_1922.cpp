class Solution {
public:
    const long long mod = 1000000007;
    long long power(long long base , long long exp){
        long long result = 1 ; 
        while(exp > 0){
            if(exp % 2 == 1){
                result = (result * base) % mod ; 
            }

            base = (base * base) % mod ; 
            exp /= 2 ; 
        }

        return result ; 
    }
    int countGoodNumbers(long long n) {
        

        if(n % 2 == 0) {
            long long even_answer = (power(5 , n/2 ) * power(4 , n/2)) % mod ; 
            return even_answer ; 
        }else{
            long long odd_answer = (power(5, (n+1)/2) * power(4 , (n-1)/2)) % mod; 
            return odd_answer ; 
        }
    }
};