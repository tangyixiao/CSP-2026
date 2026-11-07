#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
ll a[maxn],maxx=-1,tot=2e31-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
		tot=tot&a[i];
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		cout<<tot;
		return 0;
	}
	if(m==2){
		maxx=-1;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==n-1){
		maxx=-1;
		for(int i=0;i<n;i++){
			ll sum=2e31-1;
			for(int j=0;j<n;j++){
				if(j!=i) sum=sum&a[j];
				else continue;
			}
			maxx=max(sum,maxx);
		}
		cout<<maxx;
		return 0;
	}
	else{
		sort(a,a+n);
		cout<<a[n+1-m];
	}
	return 0;
}