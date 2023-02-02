#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int firstMissingPosInt(vector<int> nums){
    int missing = 0;
    int max = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    vector<int> numsInArr;

    for (int i = 0; i <= max; i++) {
        numsInArr.push_back(0);
    }
    
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] >= 0){
            numsInArr[nums[i]] = true;
        }
    }
    for (int i = 1; i < numsInArr.size(); i++){
        if (numsInArr[i] == false){
            return i;
        }
    }
    return nums.size();
}


int main(){
    vector<int> nums {3, 4, -1, 1};
    cout << firstMissingPosInt(nums);

    return 0;
}