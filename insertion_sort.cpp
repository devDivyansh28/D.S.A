#include <bits/stdc++.h>
using namespace std;

class Solution {

private : 
    void swap(vector<int>& nums , int j){
        int temp = nums[j-1];
        nums[j-1] = nums[j];
        nums[j] = temp;
    }

public:
    vector<int> insertionSort(vector<int>& nums) {
         int n = nums.size();
         
         for(int i=1 ; i < n ;i++){ // Loop will start from index 1
                 int key = nums[i];
                 int j = i-1;
            while(j>=0 && nums[j]>key){
                nums[j+1] = nums[j]; // Remember that swapping will not work here...
                j--;
            }
            nums[j+1]=key;
         }

         return nums;
    }
};
