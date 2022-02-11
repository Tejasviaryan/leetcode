class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> v;
        for(int i=0; i<(int)nums.size(); i++){
            if(!m.count(nums.at(i))  && !m.count((target-nums.at(i)))){
                m[nums.at(i)]=(i);
            }
            else if(m.count((target-nums.at(i)))){
                v.push_back(m[(target-nums.at(i))]);
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};