#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<unsigned int> height ={}; //input here


    unsigned int n = height.size();
    unsigned int i=0,j=(n-1),
    left_max = 0,right_max = 0,
    ans =0;
    
    while(i<j){
        left_max = max(left_max,height[i]);
        right_max = max(right_max,height[j]);
        if(left_max<right_max){
            ans+= left_max - height[i];
            i++;
        } else{
            ans+= right_max - height[j];
            j--;
        }
    }
    cout<<"\nOutput: "<<ans;

    return 0;
}