#include<bits/stdc++.h>
using namespace std;

const int N=200005;
long long n,ans,a[N];
char c[N];
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			else if(a[l]==a[r]){
				l++;
				r--;
			}
			else{
				a[l]-=a[r];
				r--;
			}
		}
		else{
			ans+=min(a[l],a[r]);
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			else if(a[l]==a[r]){
				l++;
				r--;
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
