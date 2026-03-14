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
//         if(ans<arr[i]){
//             ans=arr[i];
//         }
        
//     }
//     cout<<ans<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main() {
	int n,d;
	cin>>n>>d;
	 int count=0;
	 while(n>0){
		 int digit=n%10;
		if(digit==d){
			count++;
		}
		n=n/10;
		
	 }
	 cout<<count;
	return 0;
}