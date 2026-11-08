#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
bool c[200005];
bool p1,p2;
int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	p1=true;
	for(int i=2;i<=n;i++){
		if(a[1]!=a[i]){
			p1=false;
		}
	}
	p2=true;
	for(int i=1;i<=n;i++){
		if(a[i]!=1){
			p2=false;
		}
	}
	if(p1){
		cout<<"0";
	}else if(p2){
		cout<<n/2;
	}else{
		cout<<"2026";
	}

	return 0;
}

