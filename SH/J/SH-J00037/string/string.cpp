#include <bits/stdc++.h>
using namespace std;
#define int long long
struct node
{
	char x;
	int num;
};
node a[100005],b[200005];
int n,t=0,sum=0,cnt=0,ans=0;
bool flag=true;
void check(char x,int num)
{
	if(flag)
	{
		if(sum%2==1) a[t].num--;
		if(a[t].num==0) t--;
		flag=false;
	}
	while(num>0)
	{
		if(num>=a[t].num)
		{
			if(a[t].x!=x) ans+=a[t].num;
			num-=a[t].num;
			t--;
		}
		else
		{
			if(a[t].x!=x) ans+=num;
			a[t].num-=num;
			num=0;
		}
	}
}
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> b[i].num >> b[i].x;
		sum+=b[i].num;
	}
	for(int i=1;i<=n;i++)
	{
		if(cnt<(sum+1)/2)
		{
			t++;
			a[t].num=min((sum+1)/2-cnt,b[i].num);
			a[t].x=b[i].x;
			cnt+=a[t].num;
			b[i].num-=a[t].num;
			if(cnt>=(sum+1)/2) check(b[i].x,b[i].num);
		}
		else check(b[i].x,b[i].num);
	}
	cout << ans;
	return 0;
} 
