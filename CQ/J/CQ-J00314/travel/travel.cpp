#include<bits/stdc++.h>
using namespace std;
int a,b,g=0;
string n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> n >> b >> m;
	if(a==b){
		cout << 1;
		g=1;
	}
	else cout << 0;
	if(g==0) cout << 0;
	else if(n[0]==m[0]&&n[1]==m[1]){
		cout << 1;
		g=1;
	}
	else{
		cout << 0;
		g=0;
	}
	if(g==0) cout << 0;
	else if((n[2]<='C'&&m[2]<='C')||(n[2]>'C'&&m[2]>'C')) cout << 1;
	else cout << 0;
	if(g==0) cout << 0;
	else if((n[2]-m[2]==1||m[2]-n[2]==1)&&((n[2]=='D'&&m[2]=='C')||(m[2]=='D'&&n[2]=='C'))) cout << 0;
	else if(n[2]-m[2]==1||m[2]-n[2]==1) cout << 1;
	else cout << 0;
	return 0;
}

