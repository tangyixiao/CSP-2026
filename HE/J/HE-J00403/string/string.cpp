#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){
		int a;
		char b;
		cin>>a>>b;
		cout<<"0";
		return 0;
	}
	if(n==2){
		int a,b;
		char c,d;
		cin>>a>>c>>b>>d;
		if(c==d){
			cout<<"0";
			return 0;
		}else{
			if(a<=b){
				cout<<a;
				return 0;
			}else{
				cout<<b;
				return 0;
			}
		}
	}
	return 0;
}
