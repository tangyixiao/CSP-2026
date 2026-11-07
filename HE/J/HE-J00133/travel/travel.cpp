#include<bits/stdc++.h>
#define int long long
using namespace std;

const int sum[]={1,1,1,0,0};

string c1,s1,c2,s2;
string t1,t2,r1,r2;

int32_t main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else cout<<0;
	t1=s1.substr(0,2);t2=s2.substr(0,2);
	if(c1==c2&&t1==t2) cout<<1;
	else cout<<0;
	bool fg=0;
	if(c1==c2&&t1==t2&&sum[s1[2]-'A']==sum[s2[2]-'A']){
		cout<<1;
		fg=1;
	}
	else cout<<0;
	if(fg&&abs(s1[2]-s2[2])==1) cout<<1;
	else cout<<0;
	return 0;
}

// Trick||Treat!
