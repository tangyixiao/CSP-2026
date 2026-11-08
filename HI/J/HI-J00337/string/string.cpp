#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n;
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	string isa;
	for(int i=1;i<=n;i++){
		long long a;
		cin>>a;
		char s;
		cin>>s;
		for(int i=1;i<=a;i++){
			isa+=s;
		}
	}
	long long bb=isa.size()/2;
	string l,r;
	for(int i=1;i<=bb;i++){
		l+=isa[i];
	}
	for(int i=isa.size();i>=(bb+1);i--){
		r+=isa[i];
	}
	if(l==r){
		cout<<0;
	}
	else{
		long long tlm=0;
		for(int i=1;i<=bb;i++){
			if(l[i]!=r[i]){
				tlm++;
			}
		}
		cout<<tlm;
	}
	return 0;
}
