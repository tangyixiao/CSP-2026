#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c;
string s;
int n;
long long check()
{
	long long cnt=0;
	int i=0,j=s.size();
	j--;
	while(i<j)
	{
		if(s[i]!=s[j])
		{
			cnt++;
		}
		i++;
		j--;
	}
		return cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c;	
		for(int j=1;j<=a[i];j++)
		s+=c;
	}
	long long ans=check();
	if(check()==0)
		printf("%d",0);
	else{
		printf("%lld",ans);
	}
} 
