#include <bits/stdc++.h>
using namespace std;
long long sum,ans,c[200005];
string s,st;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld",&c[i]);
		cin >> s;
		st+=s;
	}
	st=' '+st;
	long long len=st.size()-1;
	for (int i=1;i<=len/2;i++)
	{
		if (st[i]!=st[len-i+1])
		{
			ans+=(c[i],c[len-i+1]);
		}
		
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}//Trick||Treat!
