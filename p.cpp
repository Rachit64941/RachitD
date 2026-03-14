// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     int ans;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     ans=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(ans<arr[i]){
//             ans=arr[i];
//         }
//     }
//     cout<<ans<<endl;
//     return 0;

// }
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     int ans;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     ans=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(ans>arr[i]){
//             ans=arr[i];
//         }
//     }
//     cout<<ans<<endl;
//     return 0;

// }
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     int ans=0;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++){
        
//             ans+=arr[i];
        
//     }
//     cout<<ans<<endl;
//     return 0;
// }
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int og=n;
    int sum=0;
    int l=0;
    while(temp!=0){
        temp=temp%10;
        l++;
    }
    while(n!=0){
        int k=n%10;
        sum=sum+pow(k,l);
        n=n/10;
    }
    if(og==sum){
        cout<<" Armstrong"<<endl;
    }
    else{
        cout<<"not a armstrong"<<endl;
    }
    return 0;
}
