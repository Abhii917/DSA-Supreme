#include<iostream>
#include <vector>
using namespace std;

void pair(vector<int> arr, int target){
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        for (int j = i+1; j < arr.size(); j++)
        {
           if(element + arr[j] == target){
            cout<<element<<" "<<arr[j]<<endl;
            break;
           }
        }
        
    }
    
}

int main(){
    vector<int>arr{5,3,9,6,7,2};
    int target = 9 ;
    pair(arr,target);

}