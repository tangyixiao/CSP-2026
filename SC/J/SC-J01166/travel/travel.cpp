#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel".in,'r',std.in);
	freopen("travel".out,'w',std.out);
	string n,m,x,y;
	cin>>n>>m>>x>>y;
	if(n!=x){
		cout<<"0000";
	}
	else{
		if(m[0]!=y[0]||m[1]!=y[1]){
			cout<<"1000";
		}
		else{
			int c,d;
			if(m[2]=='A'||m[2]=='B'||m[2]=='C')
			c=1;
			else
			c=0;
			if(y[2]=='A'||y[2]=='B'||y[2]=='C')
			d=1;
			else
			d=0;
			if(c!=d)
			cout<<"1100";
			else{
				if((m[2]=='A'&&y[2]=='B')||(m[2]=='B'&&(y[2]=='A'||y[2]=='C'))||(m[2]=='C'&&y[2]=='B')||(m[2]=='D'&&m[2]=='F')||(m[2]=='F'&&y[2]=='D'))
				cout<<"1111";
				else
				cout<<"1110";
			}
		}
	}
	return 0;
}