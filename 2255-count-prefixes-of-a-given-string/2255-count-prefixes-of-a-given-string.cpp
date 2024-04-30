class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(auto word : words)
        {
            if(isPrefix(word, s))
            {
                count++;
            }
        }
        return count;
    }
    bool isPrefix(string& word, string s)
    {
        if(word.length() > s.length())
        {return false;}
        for(int i=0; i<word.size(); i++)
        {
            if(word[i]!=s[i])
            {return false;}
        }
        return true;
    }
};