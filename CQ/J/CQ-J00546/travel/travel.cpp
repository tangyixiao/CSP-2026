#include <bits/stdc++.h>
//#define int long long
using namespace std;
string a,b,c,d;
int bj[1005];
int bj1[1005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	bj['A']=bj['B']=bj['C']=1,bj['D']=bj['F']=2;
	bj1['A']=1,bj1['B']=2,bj1['C']=3,bj1['D']=5,bj1['F']=6;
	if(a!=c){cout<<"0000\n";return 0;}
	if(b[0]!=d[0] || b[1]!=d[1]){cout<<"1000\n";return 0;}
	if(bj[b[2]]!=bj[d[2]]){cout<<"1100\n";return 0;}
	if(bj1[b[2]]+1==bj1[d[2]] || bj1[d[2]]+1==bj1[b[2]]){cout<<"1111\n";return 0;}
	cout<<"1110\n";
	return 0;
} 
