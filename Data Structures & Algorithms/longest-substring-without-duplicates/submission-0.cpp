class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();

        unordered_set<char> st;
        int left=0;
        int ans=0;
        for(int right=0; right<n; right++)
        {
            // if(st.count(s[right])){
            //     st.erase(s[right]);
            //     left++;
            // }
            while(st.count(s[right]))
            {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            int temp=st.size();
            ans=max(ans,temp);
        }
        return ans;
    }
};
