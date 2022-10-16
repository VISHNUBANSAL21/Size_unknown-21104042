// To search for an element in an array whose size is unknown?

#include"bits/stdc++.h"
using namespace std;

#define n 100

int find(vector<int> vec,int target){
    int low = 0;
    int high = 1;
    while(vec[high]<target){
        low = high;
        high = high<<1;
    }
    while(low<=high){
        int mid = (low+high)/2;
        if(vec[mid]==target){
            return mid;
        }
        else if(vec[mid] > target){
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int number,target;

    cout<<"Enter number of elements in array:";
    cin>>number;

    cout<<"Enter the elements of array separated by space: ";
    vector<int> vec(n,INT_MAX);
    for(int i=0;i<number;i++){
        cin>>vec[i];
    }

    cout<<"Enter number we need to find in array:";
    cin>>target;
    
    cout<<"Elements is at " <<find(vec,target);
    return 0;
}