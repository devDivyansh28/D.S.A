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
    vector<int> bubbleSort(vector<int>& nums) {
         int n = nums.size();

         for(int i=0; i<n; i++){

            for(int j = 1 ; j<= n-i-1;j++){
                 if(nums[j-1]>nums[j]) swap(nums,j);
            }
         }

         return nums;
    }
};

int main(){
   vector<int> arr = {1,33,63,25,1,34,243,234,553,53};

   Solution s1;
   cout<<"Orginal Array"<<" ";
   for(int num : arr){
    cout<<num<<" ";
   }
 cout<<endl;
   vector<int> sortedArray = s1.bubbleSort(arr);
   cout<<"Sorted Array"<<" ";
   for(int num : sortedArray){
    cout<<num<<" ";
   }
   
}
