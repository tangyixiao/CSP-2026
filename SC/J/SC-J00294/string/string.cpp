#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005],da[200005];
char c[200005];
int a1[200005],a2[200005],cu1,cu2;
int len;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
		da[i]=da[i-1]+a[i];
	}
	int zh=len/2+1;
	if(len&1){
		len++;
		for(int i=1;i<=n;i++){
			int l=da[i-1]+1,r=da[i];
			if(l<=zh&&r>=zh){
				a[i]++;
				break;
			}
		}
		for(int i=1;i<=n;i++){
			da[i]=da[i-1]+a[i];
		}
	}
	int zh1=len/2,zh2=len/2+1;
	int ans=0,id=n;
	for(int i=1;i<=n;i++){
		if(da[i-1]+1>=zh2)break;
		int l=da[i-1]+1,r=da[i];
		int ll=n-l+1,rr=n-r+1,sum=0;
		if(l<=zh1&&r>=zh2){
			int zz1=zh1-l+1,zz2=r-zh2+1;
			ans+=abs(zz2-zz1);
		}
		else {
			for(;;id--){
				sum+=a[id];
				if(sum>=a[i]){
					int k=sum-a[i];
					if(c[id]!=c[i])ans+=a[id]-k;
					a[id]=k;
					break;
				}
				if(c[id]!=c[i])ans+=a[id];
			}
		}
	}
	cout<<ans;
	return 0;
}