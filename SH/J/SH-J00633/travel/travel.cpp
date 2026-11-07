#include<bits/stdc++.h>
using namespace std;

int ans[10];

int str2int(string s) {
	int res = 0;
	for(auto p : s) {
		if(p < '0' || p > '9') continue;
		res *= 10;
		res += p - '0';
	}
	return res;
}

int main() {
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out","w",stdout);
	
	int ac, as, ap, bc, bs, bp;
	string acs, ass, bcs, bss;
	
	cin>>acs>>ass>>bcs>>bss;
	
	ac = str2int(acs);
	ap = str2int(ass);
	as = ass[2] - 'A' + 1;
	bc = str2int(bcs);
	bp = str2int(bss);
	bs = bss[2] - 'A' + 1;
	
//	cout<<ac<<' '<<ap<<' '<<as<<endl;
//	cout<<bc<<' '<<bp<<' '<<bs<<endl;

	if(ac == bc)
	{
		ans[0] = 1;
		if(ap == bp)
		{
			ans[1] = 1;
			if(as <= 3 && bs <= 3)
			{
				ans[2] = 1;
				if(abs(as - bs) == 1)
				{
					ans[3] = 1;
				}
			}
			else if(as > 3 && bs > 3)
			{
				ans[2] = 1;
				if(abs(as - bs) == 1)
				{
					ans[3] = 1;
				}
			}
		}
	}
	
	for(int i = 0; i < 4; i ++)
	{
		cout<<ans[i];
	}
	cout<<endl;
	return 0;
}
