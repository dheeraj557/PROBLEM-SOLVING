class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int len = sentences.size();
        int max_length=0,length=0;
        int i=0,j=0;
        while(i<len)
        {
            if(sentences[i][j]==' ')
            {
               length++;
               j++;
            }
            else if(sentences[i][j]=='\0')
            {
                i++; j=0;
                max_length = max(max_length,length+1);
                length=0;
            }
            else
               j++;
        }
        return max_length;
    }
};