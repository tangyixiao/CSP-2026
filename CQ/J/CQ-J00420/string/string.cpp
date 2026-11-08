#include<bits/stdc++.h>
using namespace std;
void fast(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}
#define int long long
const int N=2e5+5;
int n;
int a[N];
char c[N];
int s[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	fast();
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
	}
	int len=(s[n]+1)/2;
	int mid=lower_bound(s+1,s+n+1,len)-s;
	int ans=0;
	int l=1,r=n;
	while(l<=mid&&mid<=r){
		if(c[l]!=c[r]){
			if(a[l]<a[r]){
				ans+=a[l];
				a[r]-=a[l];
				l++;
			}
			else if(a[l]==a[r]){
				ans+=a[l];
				l++,r--;
			}
			else{
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}
		}
		else{
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			else if(a[l]==a[r]){
				l++,r--;
			}
			else{
				a[l]-=a[r];
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}

