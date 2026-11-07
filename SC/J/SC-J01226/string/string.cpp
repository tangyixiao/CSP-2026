#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll ans;
int a[N];
char c[N];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<r){
		if(!a[l])l++;
		if(!a[r])r--;
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				a[r]=0;
			}else{
				a[r]-=a[l];
				ans+=a[l];
				a[l]=0;
			}
		}else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				a[r]=0;
			}else{
				a[r]-=a[l];
				a[l]=0;
			}
		}
	}
	cout<<ans;
	return 0;
}