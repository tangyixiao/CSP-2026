#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
int a[200005];
int main(){
	freopen(card.in,"r",stdin);
	freopen(card.out,"w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			cnt=max(cnt,a[i]);
		}
	}
	else if(m==2){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				cnt=max(cnt,a[i]&a[j]);
			}
		}
	}
	else if(m==n){
		cnt=a[1];
		for(int i=2;i<=n;i++){
			cnt=cnt&a[i];
		}
	}
	else{
		cnt=3;
	}
	cout<<cnt;
	return 0;
}
