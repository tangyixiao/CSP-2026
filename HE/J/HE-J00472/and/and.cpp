#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],ans=0,num=1,maxx;
bool cmp(int x,int y){
	return x%num>y%num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
		long long l=0,nn=a[i];
		while(nn>0)
		{
			nn/=2;
			l++;
		}
		maxx=max(maxx,l);
	}
	for(int i = 1;i<=maxx;i++)
	{
		num*=2;
	}
	for(int j = maxx;j>=1;j--){
		sort(a+1,a+n+1,cmp);
		num/=2;
		bool f = 1;
		for(int i = 1;i<=m;i++)
		{
			if(((a[i]%(num*2))/num)<1){
				f=0;
				break;
			}
		}
		if(f){
			ans+=num;
			for(int i = 1;i<=n;i++)
			{
				if(a[i]<num){
					n=i-1;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
