#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
 	int a,b;
	string c,d;
	cin>>a>>c>>b>>d;
	if(a==b) cout<<1;
		else{
		cout<<"0000";
		return 0;
	}
	if(c[0]==d[0]&&c[1]==d[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if('D'-c[2]>0&&'D'-d[2]>0||c[2]-'D'>=0&&d[2]-'D'>=0) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(c[2]=='A'&&d[2]=='C'||c[2]=='C'&&d[2]=='A') cout<<0;
	else cout<<1;
	return 0;
} 
