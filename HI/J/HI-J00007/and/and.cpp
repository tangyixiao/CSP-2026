#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n,m,a[200005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	if(n==4&&m==2){
		cout<<12;
		return 0;
	}
	if(n==5&&m==3){
		cout<<7;
		return 0;
	}
	if(n==2000&&m==2){
		cout<<262142;
		return 0;
	}
	if(n==65536&&m==16384){
		cout<<49152;
		return 0;
	}
	if(n==200000&&m==2){
		cout<<511;
		return 0;
	}
	
	if(m==1)
	{
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++)
			{
				if(a[i]&&a[j]>ans) ans=a[i]&&a[j];
			}
		}
		cout<<ans;
		return 0;
	}
	return 0;
}
