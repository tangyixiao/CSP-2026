#include <bits/stdc++.h>
using namespace std;
long long arr[200005];
long long ping[200005];
long long ma[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ping[0]=2;
	for(int i=1;i<=30;i++){
		ping[i]=ping[i-1]*2;
	}
	long long n,m,ans,maxx=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	sort(arr+1,arr+n+1);
	for(int i=n;i>=1;i--){
		for(int j=29;j>=1;j--){
			if(arr[i]==ping[j]-1){
				ma[maxx]=arr[i];
				maxx++;
			}
		}
	}
	int maxxx=0;
	for(int i=1;i<=n;i++){
		if(arr[i]>maxxx){
			maxxx=arr[i];
		}
	}
	while(maxx<m){
		ma[maxx]=maxxx;
		maxx++;
	}
	ans=ma[2]&ma[1];
	for(int i=3;i<=m;i++){
		ans=ans&ma[i];
	}
	cout<<ans;
	return 0;
}
