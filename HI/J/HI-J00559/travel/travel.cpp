#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m,s=0,l=0;
	string a,b;
	cin>>n>>a>>m>>b;
	if(n==m){
		cout<<1;
		l=1;
	}
	else{
		cout<<0;
		l=0;
	}
	if(l==1&&a[0]==b[0]&&a[1]==b[1]){
		cout<<1;
		s=1;
	}
	else{
		cout<<0;
		s=0;
	}
	if(s==1&&((a[2]=='A'&&b[2]=='B')||(a[2]=='A'&&b[2]=='C')||(a[2]=='B'&&b[2]=='A')||(a[2]=='B'&&b[2]=='C')||(a[2]=='C'&&b[2]=='A')||(a[2]=='C'&&b[2]=='B')||(a[2]=='D'&&b[2]=='F')||(a[2]=='F'&&b[2]=='D'))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s==1&&((a[2]=='A'&&b[2]=='B')||(a[2]=='B'&&b[2]=='A')||(a[2]=='B'&&b[2]=='C')||(a[2]=='C'&&b[2]=='B')||(a[2]=='D'&&b[2]=='F')||(a[2]=='F'&&b[2]=='D'))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
