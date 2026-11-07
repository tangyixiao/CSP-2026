#include<bits\stdc++.h>
using namespace std;
#define int long long
int x=1,y=1,p1=0,p2=0,p3=0;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2) x=1;
	else x=0;
	for (int i=0;i<=1;i++){
		if (s1[i]!=s2[i]) y=0;
	}
	if ('A'<=s1[2] && s1[2]<='C') p1=1;
	if ('A'<=s2[2] && s2[2]<='C') p2=1;
	if (p1==p2 && abs(s2[2]-s1[2]==1)) p3=1;
	if (x==1) cout<<1;
	else cout<<0;
	if (x==1 && y==1) cout<<1;
	else cout<<0;
	if (x==1 && y==1 && p1==p2) cout<<1;
	else cout<<0;
	if (x==1 && y==1 && p1==p2 && p3==1) cout<<1;
	else cout<<0;
	return 0;
} 
