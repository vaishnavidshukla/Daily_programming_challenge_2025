#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<unsigned int> inp_vec = {5}; //input here
    unsigned int i,last_leader;
    reverse(inp_vec.begin(),inp_vec.end());
    last_leader = inp_vec[0];
    vector<unsigned int> leaders;
    leaders.push_back(last_leader);
    for(i =1;i<inp_vec.size();i++){
        if(last_leader<inp_vec[i]){
            leaders.push_back(inp_vec[i]);
            last_leader = inp_vec[i];
        }
    }
    reverse(leaders.begin(),leaders.end());
    for(i=0;i<leaders.size();i++){
        cout<<leaders[i]<<" ";
    }
    
    return 0;
}