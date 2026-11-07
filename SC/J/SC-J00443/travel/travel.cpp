#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m,b1=0,b2=0;
	string a,b;
	cin>>n>>a>>m>>b;
	if(n==m){
		cout<<1;
		b1=1;
	}else{
		cout<<0;
	}
	if(b1==1&&(a[0]-'0')*10+a[1]-'0'==(b[0]-'0')*10+b[1]-'0'){
		b2=1;
		cout<<1;	
	}else{
		cout<<0;
	}
	if(b2==1&&a[2]>'C'&&b[2]>'C'||b2==1&&a[2]<='C'&&b[2]<='C'){
		cout<<1;
	}else{
		cout<<0;
	}
	if(abs(a[2]-b[2])==1){
		if(a[2]=='C'&&b[2]=='D'||a[2]=='D'&&b[2]=='C'){
			cout<<0;
			return 0;
		}
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}