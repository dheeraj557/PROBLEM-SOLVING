class TrieNode {
public:
    bool isWord;
    TrieNode* children[26];    
    TrieNode() 
    {
        isWord = false;
        memset(children, 0, sizeof(children));
    }
};
class Trie
{
private:
    TrieNode* root;
    
public:
    Trie() 
    {
        root = new TrieNode();
    }
    void insert(string word) 
    {
        TrieNode* node = root;
        for (char c : word) 
        {
            if (node->children[c - 'a'] == nullptr)
            {
                node->children[c - 'a'] = new TrieNode();
            }
            node = node->children[c - 'a'];
        }
        node->isWord = true;
    }
    
    bool search(string word)
    {
        TrieNode* node = root;
        for (char c : word) 
        {
            if (node->children[c - 'a'] == nullptr)
            {
                return false;
            }
            node = node->children[c - 'a'];
        }
        return node->isWord;
    }
    bool startsWith(string prefix)
    {
        TrieNode* node = root;
        for (char c : prefix) 
        {
            if (node->children[c - 'a'] == nullptr)
            {
                return false;
            }
            node = node->children[c - 'a'];
        }
        return true;
    }
};
