#include<bits/stdc++.h>
using namespace std;
struct p
{
	long long le;
	char c;
};
vector<p>v(200005);
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int n;
	long long f=0;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		int x;
		cin>>x>>v[i].c;
		v[i].le=v[i-1].le+x;
		f+=x;
		
	}
	
	long long ans = 1;
	int l = 1,r = n;
	long long i=1; 
	while(i<=(f+1)/2)
	{
		long long k = f+1-i;
		if(k==i){break;}
		
		long long move =  min(v[l].le-i,k-v[r-1].le-1);
	
		if(v[l].c!=v[r].c){
		ans+=move;
		}
		
		if(v[l].le-i<k-v[r-1].le-1) {l++;}
		
		else{r--;}
			
		i+=move;
	}
	cout<<ans;
 } 
