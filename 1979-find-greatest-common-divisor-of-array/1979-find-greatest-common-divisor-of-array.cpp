class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = *min_element(nums.begin(), nums.end());
        int largest  = *max_element(nums.begin(), nums.end());
        
        for(int i =0; i<nums.size(); i++){
            while(smallest >0 && largest >0){
                if(smallest > largest){
                    smallest %= largest;
                }else{
                    largest %=smallest;
                }
            }
        }
        if (smallest == 0) return largest;
        else return smallest ;

        

        
    }
};