#include <bits/stdc++.h>
using namespace std;
int a,c,ab,cd;
string b,d;
int main(){
	freopen("trevel.in","r",stdin);
	freopen("trevel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if (a==c) cout<<1;
	else cout<<0;
	ab=(b[0]-'0')*10+(b[1]-'0');
	cd=(d[0]-'0')*10+(d[1]-'0');
	if (a==c and ab==cd) cout<<1;
	else cout<<0;
	if (a==c and ab==cd and ((b[2]>='A' and b[2]<='C' and d[2]>='A' and d[2]<='C') or (b[2]>='D' and b[2]<='E' and d[2]>='D' and d[2]<='E'))){
		cout<<1;
	}
	else cout<<0;
	if ((b[2]==d[2]+1 or b[2]+1==d[2]) and a==c and ab==cd and ((b[2]>='A' and b[2]<='C' and d[2]>='A' and d[2]<='C') or (b[2]>='D' and b[2]<='E' and d[2]>='D' and d[2]<='E'))){
		cout<<1;
	}
	else cout<<0;
	return 0;
} 
