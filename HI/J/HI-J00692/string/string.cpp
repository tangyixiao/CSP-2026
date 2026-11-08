#include<bits/stdc++.h>
using namespace std;
string s;
long long n,mid,cnt=1,ans;
struct rec
{
	long long num;
	char letter;
}a[200200];
int main()
{
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i].num>>a[i].letter;
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=cnt;j<=cnt+a[i].num-1;j++) s[j]=a[i].letter;
		cnt+=a[i].num;
	}
	cnt-=1;
	//cout<<cnt<<"\n";
	//for(int i=1;i<=cnt;i++) cout<<s[i]<<" ";
	mid=(cnt+1)/2;
	for(long long i=1;i<=mid;i++)
	{
		if(s[i]!=s[cnt+1-i]) ans++;
	}
	cout<<ans<<"\n";
	return 0;
	
	fclose(stdin);
	fclose(stdout);
	
}
