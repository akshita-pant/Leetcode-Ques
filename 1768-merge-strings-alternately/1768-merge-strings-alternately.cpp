class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        vector<char> vecStr;
        int n= word1.length()+word2.length();
        int j=0,k=0;
        while(vecStr.size()<n)
        {
            if(j<word1.length())
            {
                vecStr.push_back(word1[j]);
                j++;
            }
            if(k<word2.length())
            {
                vecStr.push_back(word2[k]);
                k++;
            }
        }
        string str(vecStr.begin(), vecStr.end());
        return str;
    }
};