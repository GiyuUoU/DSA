class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        
        int great_candie = *max_element(candies.begin(), candies.end());
        
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= great_candie){
                result.push_back(true);
            }
            else{ 
                result.push_back(false);
            }
        }
        
        return result;
    }
};
