#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    if(n==0){
        cout<<"[]";
        return 0;
    }
    else{
        cout<<"Enter the elements of array: ";
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }

        int low =0,mid=0,high =(n-1);
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            } else if(arr[mid]==1){
                mid++;
            } else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }

        for(int i = 0;i<n;i++){
            cout<<arr[i];
        }
    }



    return 0;
}