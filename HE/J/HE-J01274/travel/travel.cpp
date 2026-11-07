#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 2e3;
string r1,r2;
string x1,x2;
ll ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> r1 >> r2;
	cin >> x1 >> x2;
	char r,x;
	r = r2[2];
	x = x2[2];
	if(r1==x1)
	{
		ans++;
		if(r2[0]+r2[1]==x2[0]+x2[1])
		{
			ans++;
			if((r>='D'&&x>='D')||(r<='C'&&x<='C'))
			{
				ans++;
				if(r+1==x||r-1==x)
				{
					ans++;
				}
			}
		}
	}
	for(int i=1;i<=4;i++){
		if(ans!=0)
		{
			ans--;
			cout << 1;
		}else{
			cout << 0;
		}
	}
	return 0;
}
