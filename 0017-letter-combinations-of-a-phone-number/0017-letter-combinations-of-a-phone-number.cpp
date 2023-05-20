class Solution {
public:
vector<string> output_final;
string letters(int num)
{
    string result;
    switch(num)
    {
        case 2: result = "abc";
                break;
        case 3: result = "def";
                break;
        case 4: result = "ghi";
                break;
        case 5: result = "jkl";
                break;
        case 6: result = "mno";
                break;
        case 7: result = "pqrs";
                break;
        case 8: result = "tuv";
                break;
        case 9: result = "wxyz";
                break;
     }
    return result;
}
void helper(int num, string output)
{
    if(num == 0)
    {
        output_final.push_back(output);
        return;
    }
    else
    {
        int last_digit = num % 10;
        string temp = letters(last_digit);
        num = num / 10;
        for(int i = 0; i < temp.length(); i++)
        {
            helper(num, temp[i]+output);
        }
        return;
    }
}
vector<string> letterCombinations(string digits) 
{
    if(digits.length() == 0)
        return {};
    string output = "";
    helper(stoi(digits),output);
    return output_final;
}
};