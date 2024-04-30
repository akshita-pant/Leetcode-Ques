class Solution {
public:
    string removeOccurrences(string s, string part) {
        int position= s.find(part);
        while(s.length() != part.length())
        {
            s.erase(position , part.length());
            position= s.find(part);
        }
        return s;
    }
};