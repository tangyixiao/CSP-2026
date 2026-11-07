#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int ans,ans1=0;
	int a[n];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-m;i++){
		ans=a[i];
		int j=i+m;
		while(j>i){
			ans=ans&a[j];
			j--;
		}
		ans1=max(ans1,ans);
	}
	cout<<ans1;
	return 0;
}