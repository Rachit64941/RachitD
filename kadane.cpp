#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int arr[100];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int currentsum=0;
     int maxsum=arr[0];
     for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum>maxsum){
            maxsum=currentsum;
        }
        if(currentsum<0){
            currentsum=0;

        }
        cout<< maxsum<<endl;
     }
     return 0;

}