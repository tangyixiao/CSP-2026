#include<bits/stdc++.h>
using namespace std;
int a[2010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,k,s=1,maxs=0,maxs2=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxs=max(maxs,a[i]);
	}	s=a[1];
	if(n==k){
		for(int i=1;i<=n;i++){
			s=s&a[i];
		}
		cout<<s;
	}
	else if(k==1)cout<<maxs;
	else if(k==2&&n>1){
		for(int i=1;i<=n;i++){
			if(a[i]!=maxs){
				maxs2=max(maxs2,a[i]);
			}
		}
		cout<<int(maxs&maxs2);
	}
	else cout<<0;
	return 0;
}
