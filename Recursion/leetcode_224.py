class Solution:
    def calculate(self, s: str) -> int:
        def solve(i):
            if not s: 
                return 0 
            result = 0 
            sign = 1 
            num = 0 


            while(i < len(s)):
                if(s[i].isdigit()):
                    num = 0 

                    while(i < len(s) and s[i].isdigit()):
                        num = num * 10 + int(s[i])
                        i += 1 
                    
                    result += num * sign 
                    continue 

                
                elif(s[i] == '('):
                    value  , i = solve(i+1)

                    result += value * sign 
                elif(s[i] == ')'):
                    return result , i + 1 

                elif (s[i] =='+'):
                    sign = 1 
                    i += 1 

                elif(s[i] == '-' ):
                    sign = -1 
                    i += 1  

                else:
                    i += 1 

            return result , i 

        return solve(0)[0]




