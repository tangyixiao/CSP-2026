#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,y,ax,by,flag;
string a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>a>>y>>b;
	if(x==y) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if((a[0]==b[0])&&(a[1]==b[1])) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(((a[2]=='A')||(a[2]=='B')||(a[2]=='C'))&&(b[2]=='A')||(b[2]=='B')||(b[2]=='C'))cout<<1;
	else if(((a[2]=='D')||(a[2]=='F'))&&((b[2]=='D')||(b[2]=='F'))){
		flag=1;
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(flag==0){
		if((a[2]=='A'&&b[2]=='B')||(a[2]=='B'&&b[2]=='C')||(a[2]=='B'&&b[2]=='A')||(a[2]=='C'&&b[2]=='B'))
			cout<<1;
		else cout<<0;
		return 0;
	}
	if((a[2]=='D'&&b[2]=='F')||(a[2]=='F'&&b[2]=='D')){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
}
