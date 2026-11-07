#include<bits/stdc++.h>
using namespace std;
int x,y;
char a,b,c,d,e,f;
int main(){
	freopen("travel.in,","r",stdin);
	freopen("travel.out,","w",stdout);
	cin>>x>>a>>b>>c>>y>>d>>e>>f;
	if(x==y){
		cout<<1;
		if(a==d&&b==e){
			cout<<1;
			if(c=='E'&&f=='D'||c=='D'&&f=='E')  cout<<11;
			else if(c=='A'&&f=='B'||c=='B'&&f=='A')  cout<<11;
			else if(c=='B'&&f=='C'||c=='C'&&f=='B')  cout<<11;
			else if(c=='A'&&f=='C'||c=='C'&&f=='A')  cout<<10;
			else  cout<<"00";
		}
		else  cout<<"000";
	}
	else  cout<<"0000";
	return 0;
}