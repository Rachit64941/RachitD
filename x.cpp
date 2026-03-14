// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int binary=0;
//     int place=1;
//     while(n>0){
//         int rem=n%2;
//         binary=binary+rem*place;
//         place=place*10;
//         n=n/2;
//     }
//     cout<<binary;
//     return 0;
// }
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(ans<arr[i])
//         ans=arr[i];
//     }
//     cout<<ans<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int num,og,rem;
    int result=0;
    cin>>num;
    og=num;
    while(num!=0){
        rem=num%10;
        result+=rem*rem*rem;
        num=num/10;

    }
    if(result==og){
        cout<<"armstrong hai"<<endl;
    }
    else{
        cout<<"armstrong nahi hAI"<<endl;
    }
    return 0;
}