#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
		int ans=a[i];
		for(int j=i+1;j<i+m;j++){
			ans=ans&a[j];
		}
		mx=max(mx,ans);
	}
	cout<<mx;
	return 0;
} 
