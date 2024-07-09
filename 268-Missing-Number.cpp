#include <iostream>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=(n*(n+1))/2;
        int t=0;
        for (int num : nums){
            t+=num;
        }
        return s-t;   
    }
};
