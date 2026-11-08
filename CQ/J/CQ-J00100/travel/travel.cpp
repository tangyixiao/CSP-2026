#include<bits/stdc++.h>
using namespace std;





string a,b,c,d;
bool res[4];



signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	
	
	cin>>a>>b>>c>>d;
	
	res[0]=(a==c);
	res[1]=(res[0] && b[0]==d[0] && b[1]==d[1]);
	res[2]=(res[1] && !(b[2]<=67 ^ d[2]<=67)); 
	res[3]=(res[2] && (b[2]>67 || (b[2]<=67 && (d[2]==b[2]+1 || d[2]==b[2]-1))));
	
	cout<<res[0]<<res[1]<<res[2]<<res[3];
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
