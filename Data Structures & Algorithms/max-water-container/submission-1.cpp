class Solution {
public:
    int maxArea(vector<int>& heights) {
    int maximum=0;
    int i,j;
    for(i=0;i<size(heights)-1;i++){
        for(j=i+1;j<size(heights);j++){
            int h = std::min(heights[i],heights[j]);
            if((h*(j-i))>maximum) {
                maximum=(h*(j-i));
            }
        }
    } 
    return maximum;   
    }
};
