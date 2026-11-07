#include<bits/stdc++.h>
using namespace std;
long long n,m,num[200005],maxx,x,a[200005];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	x=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			a[x]=(num[i]&num[j]);
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>=maxx){
			maxx=a[i];
		}
	}
	for(int k=1;k<m;k++){
		x=0;
		for(int i=0;i<n-1;i++){
			if((maxx&a[i])>=maxx){
				maxx=maxx&a[i];
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]>=maxx){
				maxx=a[i];
			}
		}
	}
	
	cout<<maxx;
	return 0;
}