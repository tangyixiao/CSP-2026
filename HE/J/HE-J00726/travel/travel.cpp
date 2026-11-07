#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int in[200];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	in['A']=in['B']=in['C']=1;
	in['D']=in['F']=2;
	cin>>a>>b>>c>>d;
	cout<<(a==c);
	cout<<(a==c&&b[0]==d[0]&&b[1]==d[1]);
	cout<<(a==c&&b[0]==d[0]&&b[1]==d[1]&&in[b[2]]==in[d[2]]);
	bool f=(a==c&&b[0]==d[0]&&b[1]==d[1]&&in[b[2]]==in[d[2]]);
	if (!f) cout<<0;
	else{
		if (b[2]>d[2]) swap(b[2],d[2]);
		if (in[b[2]]==1){
			if (b[2]=='A'&&d[2]=='B'){cout<<1;return 0;}
			if (b[2]=='B'&&d[2]=='C'){cout<<1;return 0;}
		}else if (b[2]=='D'&&d[2]=='F'){
			cout<<1;return 0;
		}
		cout<<0;
	}
	return 0;
}

/*
能展我嘛？

做好事不留名。 
*/
