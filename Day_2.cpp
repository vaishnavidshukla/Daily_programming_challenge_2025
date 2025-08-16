#include<iostream>

using namespace std;

int main(){
    unsigned int n;
    cout<<"Enter the size of array(n>=2): ";
    cin>>n;
    n--;

    unsigned int arr[n];
    cout<<"Enter the elements: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    if(n == 1) {
        if(arr[0]==1) cout<<"Missing number = "<<2;
        else cout<<"Missing number = "<<1;
        return 0;
    }

    bool flag =true;
    int leftidx = 0;
    unsigned int rightidx=n-1;
    unsigned int missing_num;
    while(flag){
        if(leftidx!=(arr[leftidx]-1)){
            missing_num =leftidx+1;
            flag=false;
        } else if(rightidx!=(arr[rightidx]-2)){
            missing_num = rightidx+2;
            flag =false;
        }
        leftidx++;
        rightidx--;
    }

    cout<<"Missing number  = "<<missing_num;

    return 0;
}