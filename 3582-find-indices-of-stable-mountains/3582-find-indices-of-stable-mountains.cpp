class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> out;
        for(int i = 0; i < height.size(); i++){
            if(i != 0 && height[i-1] > threshold){
                out.push_back(i);
            }
        }
        return out;
    }
};