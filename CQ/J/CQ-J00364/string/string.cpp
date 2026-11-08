#include<bits/stdc++.h>
using namespace std;
long long n,ans;
long long dan;
char c_last;
queue<char> q;
queue<int> d;
vector<long long> tim;
vector<long long> sum;
vector<char> ch;
void check();
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		
		if(c==c_last)
		{
			sum[sum.size()-1]+=a;
			tim[tim.size()-1]+=a;
		}
		else
		{
			sum.push_back(a);
			ch.push_back(c);
			tim.push_back(a);
		}
		c_last=c;
		dan+=a; 
	}
	for(int i=0;i<sum.size();i++)
	{
		cout<<sum[i]<<' '<<ch[i]<<endl;
	 } 
	check();
	cout<<ans;
}
void check()
{
	long long l=0,r=sum.size()-1;
	long long temp=0;
	bool flag=false;
	while(true)
	{
		if(temp>=dan/2) break;
		if(ch[l]!=ch[r])
		{	
			ans+=min(sum[l],sum[r]);
		}
		sum[l]-=min(sum[l],sum[r]);
		sum[r]-=min(sum[l],sum[r]);
		
		if(sum[l]==0) 
		{	
			l++;
			temp+=tim[l-1];
		}
		else r++;
	}
}
