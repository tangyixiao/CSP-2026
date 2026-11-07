#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int c1,c2,a,b;
	char n,m;
	cin>>c1>>a>>n>>c2>>b>>m;
	if(c1==c2) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(a==b) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(((n=='A'||n=='B'||n=='C')&&(m=='D'||m=='F'))||((m=='A'||m=='B'||m=='C')&&(n=='D'||n=='F'))){
		cout<<"00";
		return 0;
	}
	else cout<<"1";
	if(((n-1)==m)||((n+1)==m)) cout<<"1";
	else cout<<"0";
	return 0;
}