#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
const int MAXN = 200000+5;
int n;
struct line{
	long long l,r;
	char s;
};

line a[MAXN];
int lon[MAXN];
char moni[5000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	a[0].r =0;
	for(int i=1;i<=n;i++)
	{
		a[i].l=a[i-1].r+1;
		cin>>lon[i];
		a[i].r=a[i].l+lon[i]-1;
		cin>>a[i].s;
	}
	int p=0;
	for(int i= 1;i<=a[n].r;i++){
		if(i>=a[p].r) p++;
		moni[i]=a[p].s;
	}
	int ans=0;
	for(int i=1;i<=a[n].r/2+1;i++)
	{
		if(moni[i]!=moni[n-i+1]){
			moni[n-i+1]=moni[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}