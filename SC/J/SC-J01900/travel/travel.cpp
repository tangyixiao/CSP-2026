#include<bits/stdc++.h>
#define frein(x) freopen(x".in","r",stdin)
#define freout(x) freopen(x".out","w",stdout)
#define cinios cin.tie(0)->ios::sync_with_stdio(0)
using namespace std;
using ll=long long;
const int N=1e5+10;
int a[N];
int main(){
	frein("travel");
	freout("travel");
	cinios;
	string r1,r2,x1,x2;cin>>r1>>r2>>x1>>x2;
	if(r1[0]==x1[0] and r1[1]==x1[1]) cout<<1;
	else{
		cout<<"0000";	
		return 0;
	}
	if(r2[0]==x2[0] and r2[1]==x2[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if((r2[2]=='A' and (x2[2]=='B' or x2[2]=='C'))or(r2[2]=='B' and (x2[2]=='A' or x2[2]=='C'))or(r2[2]=='C' and (x2[2]=='A' or x2[2]=='B'))or(r2[2]=='D' and x2[2]=='E')or(r2[2]=='E' and x2[2]=='D')) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if((r2[2]+x2[2]==('A'+'B'))or(r2[2]+x2[2]==('B'+'C'))or(r2[2]+x2[2]==('D'+'E'))) cout<<1;
	else cout<<0;
	return 0;
}