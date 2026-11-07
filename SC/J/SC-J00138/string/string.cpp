#include <bits/stdc++.h> 
using namespace std;
long long s,a[200005];
char c[200005],st[1000000005];
long long cnt=1,ans;
int main(){
	freopen("string.in","r",stdin);
	cin>>s;
	for(int i=1;i<=s;i++)
	{
		cin>>a[i]>>c[i];
		for (int j=1;j<=a[i];j++)
		{
			st[cnt]=c[i];
			cnt++;
		}
	}
	for(int i=1,j=cnt-1;i<=cnt/2,j>=cnt/2;i++,j--)
	{
		if(st[i]!=st[j]) ans++;
	}
	cout<<ans;
	freopen("string.out","w",stdout);
    return 0;
}