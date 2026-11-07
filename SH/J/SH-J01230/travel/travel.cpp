#include<bits/stdc++.h>
using namespace std;
char x;
int a1,a2,b1,b2,d1,d2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>x;
	a1+=10*(x-'0');
	cin>>x;
	a1+=(x-'0');
	cin>>x;
	b1+=10*(x-'0');
	cin>>x;
	b1+=(x-'0');
	cin>>x;
	d1=(x-'A'+1);
	cin>>x;
	a2+=10*(x-'0');
	cin>>x;
	a2+=(x-'0');
	cin>>x;
	b2+=10*(x-'0');
	cin>>x;
	b2+=(x-'0');
	cin>>x;
	d2=(x-'A'+1);
	cout<<(a1==a2?"1":"0");
	cout<<((a1==a2&&b1==b2)?"1":"0");
	cout<<((a1==a2&&b1==b2&&
		  ((d1>=4&&d2>=4)||(d1<=3&&d2<=3)))?
		  "1":"0");
	cout<<((a1==a2&&b1==b2&&(abs(d1-d2)==1
		  &&((d1>=4&&d2>=4)||(d1<=3&&d2<=3))))?
		  "1":"0");
	return 0;
} 
