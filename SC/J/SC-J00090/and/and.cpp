#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],Max=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		Max=max(Max,a[i]);
	}
	if(m==1){
		cout<<Max;
		return 0;
	}
	if(m==n){
		Max=a[1];
		for(int i=2;i<=n;i++){
			Max=Max&a[i];
		}
	}
	if(m==2){
		Max=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
			if(i!=j){
				Max=max(Max,a[i]&a[j]);
			}	
			}
		}
	}
	cout<<Max;
	return 0;
}