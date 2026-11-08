#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans=0,a[200001];
char ch[200001]; 
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>ch[i];
	int l=1,r=n;
	while(l<=r){
		if(l==r) break;
		if(ch[l]==ch[r]){
			if(a[l]>a[r]) a[l]-=a[r],r--;
			else if(a[l]<a[r]) a[r]-=a[l],l++;
			else if(a[l]==a[r]) a[l]=a[r]=0,l++,r--;
		}
		else if(a[l]>a[r]) ans+=a[r],a[l]-=a[r],r--;
		else if(a[l]<a[r]) ans+=a[l],a[r]-=a[l],l++;
		else if(a[l]==a[r]) ans+=a[l],a[l]=a[r]=0,l++,r--;
	}
	cout<<ans<<"\n";
	
	return 0; 
}
/*
3
2 a
2 b
1 c
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
