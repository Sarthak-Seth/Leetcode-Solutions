class WordDictionary 
{
public:
    vector<string>v;
    WordDictionary() 
    {
        
    }
    
    void addWord(string word) 
    {
        v.push_back(word);
    }
    
    bool search(string word) 
    {
        int count = 0;
        for(int i = 0;i<v.size();i++ )
        {
            if(v[i].size() == word.size())
            {
                for(int j=0;j<word.size();j++)
                {
                    if(v[i][j] == word[j] or word[j] == '.') count++;
                    else {count = 0;break;}
                }
                if(count == word.size()) return true;
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
