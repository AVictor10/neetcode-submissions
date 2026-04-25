class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0;
        int j=n-1;

        int ans=INT_MIN;
        while(i<n && j>0)
        {
            if(heights[i] >= heights[j])
            {
                int d=j-i;
                ans=max(ans,(d*heights[j]));
                j--;
            }
            else{
                int d=j-i;
                ans=max(ans,(d*heights[i]));
                i++;
            }
        }
        return ans;
    }
};
