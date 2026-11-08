#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,a[N],s[N],a2[N];
char c[N];
int solve(int k){
	int l=1,r=n,ans;
	while (l<=r){
		int mid=(l+r)/2;
		if (s[mid]<k) l=mid+1;
		else r=mid-1,ans=mid;
	}
	return ans;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	bool f=1;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if (i>1&&c[i]!=c[i-1]) f=0;
	}
	if (f) {cout<<0;return 0;}
	f=1;
	for (int i=1;i<=n/2;i++){
		int j=n+1-i;
		if (a[i]!=a[j]||c[i]!=c[j]){f=0;break;}
	}
	if (f) {cout<<0;return 0;}
	for (int i=1;i<=n;i++) s[i]=s[i-1]+a[i],a2[i]=a[i];
	int id=solve(s[n]/2);
	int ans1=0,l=n,ans2=0;
	for (int i=1;i<=id;i++){
		int sum=a[i];
		while (sum){
			if (c[i]!=c[l]){
				if (a[i]<a[l]) ans1+=a[i],sum-=a[i],a[l]-=a[i];
				else{
					ans1+=a[l],sum-=a[l],a[i]-=a[l],l--;
				}
			}
			else{
				if (a[i]<a[l]) sum-=a[i],a[l]-=a[i];
				else{
					sum-=a[l],a[i]-=a[l],l--;
				}
			}
		}
	} 
	l=1;
	for (int i=n;i>=id;i--){
		int sum=a2[i];
		while (sum){
			if (c[i]!=c[l]){
				if (a2[i]<a2[l]) ans2+=a2[i],sum-=a2[i],a2[l]-=a2[i];
				else{
					ans2+=a2[l],sum-=a2[l],a2[i]-=a2[l],l++;
				}
			}
			else{
				if (a2[i]<a2[l]) sum-=a2[i],a2[l]-=a2[i];
				else{
					sum-=a2[l],a2[i]-=a2[l],l++;
				}
			}
		}
	}
	cout<<min(ans1,ans2);
	return 0;
}

