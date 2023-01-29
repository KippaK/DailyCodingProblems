#include <iostream>
#include <vector>

using namespace std;

void printVectorInt(vector<int> nums){
   for (int i = 0; i < nums.size() - 1; i++){
      cout << nums[i] << ", ";
   }
   cout << nums[nums.size() - 1];
   return;
}

vector<int> addTwoSum(vector<int> nums, int target){
   vector<int> output;
   for (int i = 0; i < nums.size() - 1; i++){
      for (int j = i + 1; j < nums.size(); j++){
         if (nums[i] + nums[j] == target){
            output.push_back(nums[i]);
            output.push_back(nums[j]);
            return output;
         }
      }
   }
   return output;
}

int main(){

   vector<int> nums{10, 15, 3, 7};
   int target = 17;
   vector<int> targetSum = addTwoSum(nums, target);

   cout << "Numbers: ";
   printVectorInt(nums);
   cout << "\nTarget: " << target;
   cout << "\naddTwoSum: ";
   printVectorInt(targetSum);
   return 0;
}