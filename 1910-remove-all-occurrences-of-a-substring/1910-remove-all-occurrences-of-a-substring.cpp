class Solution {
public:
    string removeOccurrences(string s, string part) {
        int position= s.find(part);
        while(position  != -1)
        {
            s.erase(position , part.length());
            position= s.find(part);
        }
        return s;
    }
};