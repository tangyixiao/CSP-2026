#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
int a[N];
char b[N];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	ll ans=0;
	int l=1,r=n;
	while(l<=r){
		if(a[l]==a[r] && b[l]==b[r]){
			l++,r--;
		}else if(a[l]==a[r] && b[l] !=b[r]){
			ans+=a[l];
			l++,r--;
		}else{
			if(b[l]==b[r]){
				if(a[l]>a[r]){a[l]-=a[r];r--;}
				else{a[r]-=a[l];l++;}
			}else{
				if(a[l]>a[r]){
					ans+=a[l]-a[r];
					a[l]-=a[r];
					r--;
				}else if(a[l]<a[r]){
					ans+=a[r]-a[l];
					a[r]-=a[l];
					l++;
				}else{ans+=a[l];l++,r--;}
			}
		}
	}cout<<ans;
	return 0;
}
