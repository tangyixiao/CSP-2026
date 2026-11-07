#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
long long ans;
bool cmp(int x,int y){
	if (x<y){
		return false;
	}
	return true;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	if (m==2 && n<=2000){
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				if (a[i]&a[j]>ans){
					ans=a[i]&a[j];
				}
			}
		}
	}
	else if (m==n){
		ans=a[0];
		for (int i=1;i<n;i++){
			ans&=a[i];
		}
	}
	else if (m==1){
		for (int i=0;i<n;i++){
			if (ans<a[i]){
				ans=a[i];
			}
		}
	}
	else{
		sort(a,a+n,cmp);
		ans=a[0];
		for (int i=1;i<m;i++){
			ans&=a[i];
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
