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

int productOfOtherNumbers(vector<int> nums, int idx){
    int product = 0;
    int vectorSize = nums.size();

    for (int i = 0; i < vectorSize; i++){
        if (i != idx && product == 0){
            product = nums[i];
        }
        else if (i != idx){
            product *= nums[i];
        }
    }
    return product;
}

vector<int> createVectorOfProducts(vector<int> nums){
    vector<int> products{};
    int numsSize = nums.size();

    for (int i = 0; i < numsSize; i++){
        products.push_back(productOfOtherNumbers(nums, i));
    }
    return products;
}

int main(){
    vector<int> nums{1, 2, 3, 4, 5};
    vector<int> products = createVectorOfProducts(nums);

    cout << "Numbers:\t";
    printVectorInt(nums);
    cout << ".\nProducts:\t";
    printVectorInt(products);
    cout << ".";
}