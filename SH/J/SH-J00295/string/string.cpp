#include <bits/stdc++.h>
using namespace std;
int a[200005],c[200005];
 
int main() 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	long long ans=0;
	int n; cin >> n;
	char in;
	for(int i=1;i<=n;i++) {cin >> a[i] >> in; c[i]=in-'a'+1;}
	int l=1,r=n,rr=0,rl=0;
	while(l<r)
	{
		if(c[l]!=c[r])
		{
			if(rl!=0)
			{
				if(rl>a[r]) {ans+=a[r]; rl-=a[r]; rr=0; r--;}
				else if(rl==a[r]) {ans+=rl; rl=0; rr=0; l++; r--;}
				else if(rl<a[r]) {ans+=rl; rr=a[r]-rl; rl=0; l++;}
			}
			else if(rr!=0)
			{
				if(rr>a[l]) {ans+=a[l]; rr-=a[l]; rl=0; l++;}
				else if(rr==a[l]) {ans+=rr; rl=0; rr=0; l++; r--;}
				else if(rr<a[l]) {ans+=rr; rl=a[l]-rr; rr=0; r--;}					
			}
			else
			{
				if(a[l]<a[r]) {ans+=a[l]; rr=a[r]-a[l]; rl=0; l++;}
				else if(a[l]==a[r]) {ans+=a[l]; rr=0; rl=0; l++; r--;}
				else {ans+=a[r]; rl=a[l]-a[r]; rr=0; r--;}
			}
		}
		else
		{
			if(rl!=0)
			{
				if(rl>a[r]) {rl-=a[r]; rr=0; r--;}
				else if(rl==a[r]) {rl=0; rr=0; l++; r--;}
				else if(rl<a[r]) {rr=a[r]-rl; rl=0; l++;}
			}
			else if(rr!=0)
			{
				if(rr>a[l]) {rr-=a[l]; rl=0; l++;}
				else if(rr==a[l]) {rl=0; rr=0; l++; r--;}
				else if(rr<a[l]) {rl=a[l]-rr; rr=0; r--;}					
			}
			else
			{
				if(a[l]<a[r]) {rr=a[r]-a[l]; rl=0; l++;}
				else if(a[l]==a[r]) {rr=0; rl=0; l++; r--;}
				else {rl=a[l]-a[r]; rr=0; r--;}
			}
		}
	}
	
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
