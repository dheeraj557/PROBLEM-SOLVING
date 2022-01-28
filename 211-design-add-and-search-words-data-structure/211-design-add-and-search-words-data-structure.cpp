class node{
public:
    char data;
    bool isTerminal;
    unordered_map<char, node*> children;
    
    node(char data){
        this->data= data;
        isTerminal= false;
    }
};

class WordDictionary {
public:
    node* root;
    int count;
    
    WordDictionary() {
        this->root= new node('\0');
        count=0;
    }
    
    bool helper(string word, node* curr){
        int n= word.size();
        
        for(int i=0; i<n; i++){
            char ch= word[i];
            
            if(ch=='.'){
                for(char ch='a'; ch<='z'; ch++){
                    if(curr->children[ch]){
                        if(helper(word.substr(i+1), curr->children[ch]))
                            return true;
                    }
                }
                return false;
            }
            else{
                if(curr->children[ch]==NULL)
                    return false;
                curr= curr->children[ch];
            }
        }
        if(curr and curr->isTerminal)
            return true;
        return false;
        }
        
    
    void addWord(string word) {
        node* curr= root;
        int n= word.size();
        for(int i=0; i<n; i++){
            char ch= word[i];
            if(curr->children[ch]){
                curr= curr->children[ch];
            }
            else{
                node* t= new node(ch);
                curr->children[ch]= t;
                curr= t;
            }
        }
        curr->isTerminal= true;
        count++;
    }
    bool search(string word) {
        return helper(word, root);
    }
};