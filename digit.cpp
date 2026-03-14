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