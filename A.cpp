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