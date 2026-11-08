#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;


long long a[N];
char s[N];

long long ans=0;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>s[i];
	}
		
	int i=1,j=n;
	while(i<j)
	{
		if(a[i]==a[j]) 
		{
			if(s[i]!=s[j]) ans+=a[i];
			i++,j--;
		}else{
			if(a[i]>a[j])
			{
				if(s[i]!=s[j]) ans+=a[j];
				a[i]-=a[j];
				j--;
			}else{
				if(s[i]!=s[j]) ans+=a[i];
				a[j]-=a[i];
				i++;
			}
		}
	}
	
	cout<<ans;
	return 0;
}

