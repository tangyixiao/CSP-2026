#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a, b, c, d;
	cin>>a>>b>>c>>d;
	bool f=1, ff=1;
	if(a==c)cout<<1;
	else cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1])cout<<1;
	else cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1]){
		if((b[2]=='F'&&d[2]=='D')||(b[2]=='D'&&d[2]=='F')){
			cout<<1;
		}
		else if(b[2]=='C'){
			if(d[2]=='B'||d[2]=='A')cout<<1;
			else{
				cout<<0;
				ff=0;
			}
		}
		else if(b[2]=='B'&&ff==1){
			if(d[2]=='C'||d[2]=='A')cout<<1;
			else{
				cout<<0;
				ff=0;
			}
		}
		else if(b[2]=='A'&&ff==1){
			if(d[2]=='C'||d[2]=='B')cout<<1;
			else{
				cout<<0;
				ff=0;
			}
		}
		else if(ff==1){ 
			cout<<0;
			f=0;
		}
	}
	else{
		cout<<0;
		f=0;
	}
	if((f==0||ff==0)||(f==0&&ff==0))cout<<0;
	else{
		if(min(b[2],d[2])+1==max(b[2],d[2]))cout<<1;
		else{
			cout<<0;
		}
	}
	return 0;
}