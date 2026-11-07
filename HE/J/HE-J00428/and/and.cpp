#include<bits/stdc++.h> 
using namespace std;
const int N=2e5+5;
long long n,m,a[N],ans1,ans2,ans3,cnt1,cnt2;
int main()
{
	//while(1) rp++;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int t=n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	ans1=a[n];
	for(int i=n-1;i>=n-m+1;i--)
	{
		if(ans1&a[i]==0) continue;
		ans1&=a[i];
	}	
	while(t>=1&&cnt1<m)
	{
		if(a[t]%2==0) 
		{
			cnt1++;
			if(cnt1==1) ans2=a[t];
			else ans2=(ans2&a[t]);
		}
		t--;	
	}
	if(cnt1<m) ans2=0; 
	t=n;
	while(t>=1&&cnt2<m)
	{
		if(a[t]%2==1) 
		{
			cnt2++;
			if(cnt2==1) ans3=a[t];
			else ans3=(ans3&a[t]);
		}
		t--;	
	}
	if(cnt2<m) ans3=0;
	cout<<max(ans1,max(ans2,ans3))<<endl;
	return 0;
}
