#include<bits/stdc++.h>
using namespace std;
long long n,a[200100],ans;
char b[200100];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int r=1,l=n;
	while(r<l){
		if(b[r]==b[l]){
			if(a[r]<a[l]){
				a[l]-=a[r];
				r++;
			}else if(a[r]==a[l]){
				r++;
				l--;
			}else{
				a[r]-=a[l];
				l--;
			}
		}else{
			int c=min(a[r],a[l]);
			ans+=c;
			if(a[r]<a[l]){
				a[l]-=a[r];
				r++;
			}else if(a[r]==a[l]){
				r++;
				l--;
			}else{
				a[r]-=a[l];
				l--;
			}
		}
	}
	cout<<ans;
	return 0;
}