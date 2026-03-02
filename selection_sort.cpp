#include <bits/stdc++.h>
using namespace std;


class Solution {
    private:
    void swap(vector<int>& nums , int i , int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j]=temp;
    }

public:
    vector<int> selectionSort(vector<int>& nums) {
            int n = nums.size();
            for(int i= 0 ;i < n ; i++){
                    int min_index = i;
                for(int j = i+1 ; j<n ; j++){
                    if(nums[j]<=nums[min_index]){
                        min_index = j;
                    }
                }
                swap(nums,i,min_index);
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
   vector<int> sortedArray = s1.selectionSort(arr);
   cout<<"Sorted Array"<<" ";
   for(int num : sortedArray){
    cout<<num<<" ";
   }
   
}