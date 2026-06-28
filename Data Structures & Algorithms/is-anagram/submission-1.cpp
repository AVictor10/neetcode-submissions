class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        if(n != t.size())
        {
            return false;
        }
        unordered_map<char,int> check1;
        unordered_map<char,int> check2;

        for(int i=0; i<n; i++)
        {
            check1[s[i]]++;
            check2[t[i]]++;
        }

        return check1 == check2;


    }
};
