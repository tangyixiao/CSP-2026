#include<bits/stdc++.h>
using namespace std;
long long int a[200005];
int ans=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen(and.in,'r',stdin);
	freopen(and.out,'w',stdout);
	long long n,m,sum=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(sum<n){
		for(int i=sum+1;i<=n;i++){
			if(a[sum]^a[i]>ans){
				ans=a[sum]^a[i];
			}
		}
		sum++;
	}
	cout<<ans<<'/n';
	return 0;
}