#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "";//input here
    int n= str.length();
    string answer ="";

    reverse(str.begin(),str.end());

    for(int i =0;i<n;i++){
        string word ="";
        while(str[i]!=' ' && i<n){
            word+= str[i];
            i++;
        }
        if(word.length()>0){
            reverse(word.begin(),word.end());
            answer+= " " + word;
        }
    }

    if(answer.size()>0){
        cout<<answer.substr(1);
    } else {
        cout<<"";
    }
    return 0;
}