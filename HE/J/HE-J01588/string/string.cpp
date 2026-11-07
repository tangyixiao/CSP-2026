#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,k=0,ans=0;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	int l=1,r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		k+=a[i];
	}
		for(int i=1;i<=k/2;i){
			if(a[l]>0&&a[r]>0){
				if(c[l]!=c[r]) ans+=min(a[l],a[r]);
				int h=min(a[l],a[r]);
				i+=min(a[l],a[r]);
				a[l]-=h,a[r]-=h;
				if(a[l]==0) l++;
				if(a[r]==0) r--;
			}
		}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
