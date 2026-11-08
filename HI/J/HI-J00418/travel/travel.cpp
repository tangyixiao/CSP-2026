#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	int sum1 = (a1[0]-'0')*10+(a1[1]-'0');
	int sum2 = (b1[0]-'0')*10+(b1[1]-'0');
	int ans1 = (a2[0]-'0')*10+(a2[1]-'0');
	int ans2 = (b2[0]-'0')*10+(b2[1]-'0');\
	if(sum1 == sum2){
		cout<<1;
		if(ans1 == ans2){
			cout<<1;
			if((a2[2]<='C'&&b2[2]<='C') || ((a2[2]>'C'&&b2[2]>'C'))) cout<<1;
			else cout<<0;
		}
		else{
			cout<<0;
			cout<<0;
		}
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
	}
	if(sum1==sum2 && ans1==ans2 && ((a2[2]<='C'&&b2[2]<='C') || (a2[2]>'C'&&b2[2]>'C'))){
		if(a2[2]+1==b2[2] || a2[2]-1==b2[2]) cout<<1;
		else cout<<0;
	}else cout<<0;
	
	return 0;
}
