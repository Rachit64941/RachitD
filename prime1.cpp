#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            ans=false;
            break;
        }
    }
        if (!ans){
            
                cout<<"not a prime";
            }
            else{
                cout<<"prime";
            }
            
        
        return 0;
    
}