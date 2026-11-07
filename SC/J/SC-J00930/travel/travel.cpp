#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(x) (x).begin(),(x).end()
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a!=c)	cout<<"0000";
	else{
		if((b[0]+b[1])!=(d[0]+d[1]))	cout<<"1000";
		else{
			if((b[2]>='D' && b[2]<='F') && (d[2]>='D' && d[2]<='F'))	cout<<"1111";
			else if(((b[2]>='D' && b[2]<='F') && (d[2]>='A' && d[2]<='C')) || ((d[2]>='D' && d[2]<='F') && (b[2]>='A' && b[2]<='C')))	cout<<"1100";
			else if((b[2]=='A' && d[2]=='C') || (d[2]=='A' && b[2]=='C'))	cout<<"1110";
			else	cout<<"1111";
		}
	}
	return 0;
}