#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
    vector<string> str = {}; //input here
    int n= str.size();
    if(n==1){
        cout<<str[0];
        return 0 ;
    }
    string answer = "";
    // sorting strings in alphabetical order
    for(int i =0;i<(n-1);i++){
        int j_min = i;
        for(int j = i+1;j<(n);j++){
            
            if(str[j]<str[i]){
                j_min = j;
            }
        }
        if(j_min!=i){
            swap(str[i],str[j_min]);
        }
    }

    //finding longest common prefix
    int traverse_length = min(str[0].size(),str[n-1].size());
    for(int i = 0;i<traverse_length;i++){
        if(str[0][i]==str[n-1][i]){
            answer+= str[0][i];
        }else{
            break;
        }
    }
    
    cout<<answer;

    return 0;
}