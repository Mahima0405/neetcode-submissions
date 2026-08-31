class Solution {
public:
    int maxArea(vector<int>& heights) {
        int startIdx=0;
        int endIdx= heights.size()-1;
        int maxArea= INT_MIN;

        while(startIdx < endIdx)
        {
            int area= min(heights[startIdx], heights[endIdx])*(endIdx-startIdx);
            maxArea= max(maxArea, area);

            if(heights[startIdx] >= heights[endIdx])
            {
                endIdx--;
            }
            else startIdx++;
        }

        return maxArea;
    }
};
