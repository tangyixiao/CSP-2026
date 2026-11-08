#include<bits/stdc++.h>
#define int long long
using namespace std;
string a,x,b,y;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
	if(a==b){
		cout<<1;
		if(x[0]==y[0]&&x[1]==y[1]){
			cout<<1;
			if((x[2]>'C'&&y[2]>'C')||(x[2]<='C'&&y[2]<='C')) cout<<1;
			else cout<<0;
		}
		else cout<<"00";
		if((abs((x[0]-48)*10+x[1]-48-(y[0]-48)*10-y[1]+48)==1&&x[2]==y[2])||(abs(y[2]-x[2])==1&&!((y[2]=='D'&&x[2]=='C')||(x[2]=='D'&&y[2]=='C'))&&x[0]==y[0]&&x[1]==y[1])) cout<<1;
		else cout<<0;
	}
	else cout<<"0000";
	return 0;
}

