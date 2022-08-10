class Solution {

public:
string reverseWords(string s) 
{
    string k="";
    vector<string>v;
 for(int i=0;i<s.size();i++){
     if(s[i]!=' '){
         k+=s[i];
     }
     if(s[i]==' ' ||i==s.size()-1){
        if(k.size()!=0){
          v.push_back(k);
            k.clear();
        } 
     }
 }
    k.clear();
   for(int i=v.size()-1;i>=0;i--)
   {
      k+=v[i];
       if(i!=0){
           k.push_back(' ');
       }
       
   }
    return k;
}
};