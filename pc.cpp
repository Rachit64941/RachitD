// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n,target;
//     cin>>n;
//     int arr[1000];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>target;
//     sort(arr,arr+n);
//     for(int i=0;i<n-2;i++){
//         if(i>0 && arr[i]==arr[i-1])
//         continue;
//         for(int j=i+1;j<n-1;j++){
//             if(j>i+1 && arr[j]==arr[j-1])
//             continue;
//             for(int k=j+1;k<n;k++){
//                 if(k>j+1 && arr[k]==arr[k-1])
//                 continue;
//                 if(arr[i]+arr[j]+arr[k]==target)
//                 cout<<arr[i]<<", "<<arr[j]<<"and"<<arr[k]<<endl;
//             }
//         }
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n, target;
    cin>>n>>target;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1])
            continue;
            for(int j=

            }


    }
        
    }
