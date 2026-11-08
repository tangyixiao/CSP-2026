#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	unsigned int cnt=0;
	string h="";
	for(int i=1;i<=n;i++)
	{
		long long y;
		char s;
        cin>>y>>s;
		cnt+=y;
		while(y!=0)
		{
			y--;
			h+=s;
		}
	}
	int ans=0;
	
		for(int i=0;i<=cnt/2-1;i++)
		{
			char t=h[cnt-i-1];
			if(t!=h[i])
			{
				ans++;
				
			}
		}
	
	
	cout<<ans;
	fclose(stdin);
   fclose(stdout);
	return 0;
}
