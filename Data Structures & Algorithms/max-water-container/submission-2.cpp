class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxArea = 0;
        while(i<j)
        {
            int min_h = min(heights[i], heights[j]);
            int area = (j - i) * min_h;
            maxArea = max(maxArea, area);
            if(heights[i] <= heights[j]){
                i++;
            }
            else {
                j--;
            }
            //cout<<maxArea<<" ";
        }
        return maxArea;
    }
};
