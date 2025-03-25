#include<iostream>
using namespace std;
int main(){
	int n,s=0,t=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		s+=i*t;
		t=t*i;
	}
	cout<<s;
}
