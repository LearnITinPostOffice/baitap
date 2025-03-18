#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int t=0;
	for(int i=1;i<=n;i+=2)
	t+=i;
	cout<<t;
}