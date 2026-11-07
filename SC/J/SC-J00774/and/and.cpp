#include<bits/stdc++.h>
using namespace std;
int n,cnt[31],m;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i],j=0;
		while(x!=0){
			cnt[j]+=x%2;
			x/=2,j++;
		}
	}
	for(int j=0;j<=30;j++){
		if(cnt[j]<m && cnt[j]!=0){
			for(int i=1;i<=n;i++){
				if(a[i]/(1<<j)%2){
					a[i]-=(1<<j);
				}
			}
		}
	}
	sort(a+1,a+n+1);
	int ans=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		ans=ans&a[i];
	}
	cout<<ans;
}