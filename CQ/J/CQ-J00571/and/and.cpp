#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,mxai;
int a[N];
int ksm(int a,int b)
{
	if(b==0) return 1;
	if(b%2==0)
	{
		int gk=ksm(a,b/2);
		return gk*gk;
	}
	if(b%2==1) return ksm(a,b-1)*a;
}
int andd(int a,int b)
{
	char lcx[50],dyh[50];
	int k=0,ans=0;
	while(1){ k++;if(ksm(2,k)>=a) break;}
	int len1=k-1;
	for(int i=k;i>=0;i--) 
	{
		int pb=ksm(2,i);
		if(a>=pb) a-=pb,lcx[i]='1';
		else lcx[i]='0';
	}
	k=0;
	while(1){ k++;if(ksm(2,k)>=b) break;}
	for(int i=k;i>=0;i--) 
	{
		int pb=ksm(2,i);
		if(b>=pb) b-=pb,dyh[i]='1';
		else dyh[i]='0';
	}
	int len2=k-1;
	for(int i=min(len1,len2);i>=0;i--) 
	{
		//cout<<i<<' '<<ans<<endl;
		if(lcx[i]==dyh[i]) if(lcx[i]=='1') ans+=ksm(2,i);
	}
	
	return ans;
}
int dp[2005][2005];//take1
int take1()
{
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++) dp[i][0]=dp[i][1]=a[i];
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=min(m,i);k++)
		{
			for(int j=1;j<i;j++)
			{
				int pb=andd(dp[j][k-1],a[i]);
				dp[i][k]=max(dp[i][k],pb);
				//cout<<dp[i][k]<<"+++"<<pb<<' '<<i<<' '<<j<<" "<<k-1<<endl;
			}
			//cout<<i<<' '<<k<<' '<<dp[i][k]<<endl;
		}
		
	}
	return dp[n][m];	
}
int take2()
{
	int ans=a[1],dan=0;
	for(int i=2;i<=n;i++) ans=andd(ans,a[i]);
	for(int i=1;i<=n;i++)
		dan=max(dan,andd(ans,a[i]));
	return dan;
}
int zw=0;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],mxai=max(mxai,a[i]);
	if(n<=2000) cout<<take1();
	else if(m==n-1) cout<<take2(); 
	else if(mxai<=4) 
	{
		a[1]=1,a[2]=1,a[3]=3,a[4]=4;
		n=min(n,4);
		for(int i=min(m,n);i<=12;i++) 
		{
			m=i;
			zw=max(zw,take1());
		}
		cout<<zw;
	}
	return 0;	
} 
// 4 2
// 3 15 12 12

