#include<bits/stdc++.h>
using namespace std;
int a[200010];
long long ans;
char f[200010];
int main(){
	freopen("r","string.in",stdin);
	freopen("w","string.out",stdout);
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>f[i];
		sum+=a[i];
	}
	int l=1,r=n;
	while(l<r){
		if(f[l]!=f[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}else if(a[l]==a[r]){
				ans+=a[l];
				l++;
				r--;
			}else if(a[l]<a[r]){
				ans+=a[l];
				a[r]-=a[l];
				l++;
			}
		}else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[l]==a[r]){
				l++;
				r--;
			}else if(a[l]<a[r]){;
				a[r]-=a[l];
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}
