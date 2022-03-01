class Solution {
public:
    string addStrings(string num1, string num2) {
        int digit1=0, digit2=0, sum=0, carry=0, 
        n=num1.length(), m=num2.length(), i=n-1, j=m-1;
        string result="";
        while(i >= 0 || j >= 0){
            if(i >= 0){
                digit1 = digit1*10 + (num1[i] - '0');
                i--;
            }
            if(j >= 0){
                digit2 = digit2*10 + (num2[j] - '0');
                j--;
            }
            sum = digit1 + digit2 + carry;
            carry = sum / 10;
            sum %= 10;
            char c = sum + '0';
            result += c;
            digit1 = 0;
            digit2 = 0;            
        }//end while
        if(carry==1)
            result += (1 + '0');
        reverse(result.begin(), result.end());
        return result;
    }
};