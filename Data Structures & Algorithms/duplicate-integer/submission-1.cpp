class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       int n=nums.size();
    
       unordered_set<int> check;

       for(auto& ch : nums)
       {
        if(check.count(ch))
        {
            return true;
        }
        check.insert(ch);
       }
       return false;
    }
}; 