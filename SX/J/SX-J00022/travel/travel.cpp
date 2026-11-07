#include <bits/stdc++.h>
using namespace std;
bool ans[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	string t1,t2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		ans[0] = 1;
		for(int i = 0;i<=1;i++) t1 += s1[i],t2 += s2[i];
		if(t1==t2)
		{
			ans[1] = 1;
			if((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D'))
			{
				ans[2] = 1;
				if((int)(s1[2]-s2[2])==1 || (int)(s1[2]-s2[2])==-1) ans[3] = 1;
			}
		}
	}
	for(int i = 0;i<=3;i++) cout<<ans[i];
	return 0;
}