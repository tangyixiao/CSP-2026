#include <bits/stdc++.h>
using namespace std;
long long a[20000005];
long long b[20000005];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	long long n;
	cin>>n;
	long long cnt=0;
	for(long long i=0; i<n; i++) {
		long long x;
		cin>>x;
		string s1;
		cin>>s1;
		a[i] = s1[0];
		b[i] = x;
		cnt+=x;
	}
	long long ans=0;
	long long i=0;
	long long v=n-1;
	while(i<v) {
		if(a[i]==a[v])
		{
			if(b[i]==b[v])
			{
				
				v--;
				i++;
				continue;
			}
			else if(b[i] > b[v]) 
			{
				
				b[i]-=b[v];
				v--;
				continue;
			} 
			else 
			{
				
				b[v]-=b[i];
				i++;
				continue;
			}
		} 
		else 
		{
			if(b[i]==b[v])
			{
				v--;
				i++;
				ans+=b[i+1];
				continue;
			}
			else if(b[i] > b[v]) 
			{
				
				b[i]-=b[v];
				v--;
				continue;
			}
			else 
			{
				
				b[v]-=b[i];
				i++;
				continue;
			}
			
		}
	}
	cout<<ans;
	return 0;
}
