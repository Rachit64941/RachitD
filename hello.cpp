// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int n=4;
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<i+1;j++){
// //             cout<<(" *");
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int n=4;
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<i+1;j++){
// //             cout<<i+1;
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     if(n>0){
//         cout<<"positive";

//     }
//     else if(n<0){
//         cout<<"negative";
//     }
//     else
//     {
//         cout<<"zero";
//     }
//     return 0;

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==0){
        cout << "Zero";
    }
    else{
        cout << "Non-Zero";
    }
    return 0;
}