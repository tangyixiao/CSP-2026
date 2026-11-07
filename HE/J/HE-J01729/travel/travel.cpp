#include<bits/stdc++.h>
using namespace std;
string n,m,x,y;
bool k(char c){
	return c>='A'&&c<='C';
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>m>>x>>y;
	if(n!=x) cout<<"0000";
	else{
		cout<<1;
		if(m[0]!=y[0]||m[1]!=y[1]) cout<<"000";
		else{
			cout<<1;
			if(k(m[2])!=k(y[2])) cout<<"00";
			else{
				cout<<1;
				if(m[2]+1==y[2]||m[2]-1==y[2]||(k(m[2])==0&&k(y[2])==0)) cout<<1;
				else cout<<0;
			}
		}
	}
	return 0;
}
