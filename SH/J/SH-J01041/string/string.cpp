#include<iostream>
using namespace std;
long long  n,t=1;
char s[1000000100];
long long int sum[2000001];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		
		long long int a;
		char b;
		cin>>a>>b;
		sum[n]=a;
		for(int j=t;j<t+a;j++){
			s[j]=b;
		}
		t+=a;
	}
	int ans=0;
	if(t%2==0)
	{
		//int i=1;
		for(int i=1;i<=t/2;i++)
		{
			if(s[i]!=s[t-i])
			{
				ans++;
			}
		}
	}
	if(t%2==1)
	{
		for(int i=1;i<=t/2;i++)
		{
			if(s[i]!=s[t-i])
			{
				ans++;
			}
		}
	}
	//for(int i=1;i<=t;i++){
	//	cout<<s[i];
	//}
	//cout<<sizeof(s);
	cout<<ans;
	return 0;
} 
