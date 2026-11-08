#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],L=0;
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		char t;
		cin>>t;
		for(int j=0;j<a[i];j++){
			L++;
			c[L]=t;
		} 
	}
	bool p=0;
	for(int i=1;i<=L;i++){
		if(c[i]!=c[L+1-i]){
			p=1;
			break;
		}
	}
	if(p==0) cout<<0;
	return 0;
}

