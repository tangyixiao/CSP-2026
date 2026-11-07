#include <bits/stdc++.h>
using namespace std;
int n;
char s[100005];
long long a[100005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	long long l=1,r=n;
	while (r>l){
		if (s[l]!=s[r]){
			if (a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];
				a[r]=0;
			}
			else if (a[l]<a[r]){
				ans+=a[l];
				a[l]=0;
				a[r]-=a[l];
			}
			else{
				ans+=a[r];
				a[l]=0;
				a[r]=0;
			}
		}
		else{
			if (a[l]>a[r]){
				a[l]-=a[r];
				a[r]=0;
			}
			else if (a[l]<a[r]){
				a[l]=0;
				a[r]-=a[l];
			}
			else{
				a[l]=0;
				a[r]=0;
			}
		}
		if (a[l]==0) l++;
		if (a[r]==0) r--;
	}
	cout<<ans;
	return 0;
}