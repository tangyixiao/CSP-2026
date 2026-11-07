#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool f=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	if(a==c) cout << 1;
	else{
		cout << 0;
		f=0;
	}
	if(b[0]==d[0]&&b[1]==d[1]&&f==1) cout << 1;
	else{
		cout << 0;
		f=0;
	}
	if( ( (b[2]<='C'&&d[2]<='C') || (b[2]>='D'&&d[2]>='D') )&&f==1) cout << 1;
	else{
		cout << 0;
		f=0;
	}
	if(f==1 && abs(b[2] + 0 -d[2] )== 1) cout << 1;
	else{
		cout << 0;
		f=0;
	}
	return 0;
} 
