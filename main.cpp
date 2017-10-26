#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    std::vector<int> twoSum(vector<int>& nums, int tareget) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {

            res.push_back(i);
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == tareget) {
                    res.push_back(j);
                    return res;
                }
            }
            res.clear();
        }
        res.clear();
        return res;
    }
};

int main() {
    vector<int> num;
    vector<int> res;
    for(int i = 0; i < 7; i++) {
        num.push_back(i);
    }
    Solution solu;
    res = solu.twoSum(num, 8);
    for(int i = 0; i < 2; i++) {
        cout << res[i] << "\t";
    }
    //std::cout << "Hello, World!" << std::endl;

    return 0;
}