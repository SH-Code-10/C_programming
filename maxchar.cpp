#include<iostream>
using namespace std;
int main(){
   string word="hel  met";
   int len=word.size();
   for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
        if(word[i]>word[j]){
            swap(word[i],word[j]);
        }
        if(word[i]==word[j]){
            cout<<word[i]<<endl;
        }
    
    }
        
   }
   
   cout<<word;
   cout<<endl;
   
}