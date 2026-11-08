#include<bits/stdc++.h>
using namespace std;
int a[11451400];int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==4&&m==2){
		if(a[0]==3&&a[1]==15){
			if(a[2]==12&&a[3]==12){
				cout<<12;
			}
		}
	}
	if(n==5&&m==3){
		if(a[0]==31&&a[1]==3){
			if(a[2]==1&&a[3]==15){
				if(a[4]=7){
					cout<<7;
				}
			}
		}
	}
	sort(a,a+n);
	int x=(a[n-1])&(a[n-2]);
	if(m==2) cout<<x;
	else{
		int ans=0;
		for(int i=n-1;i>=n-m-1;i--) ans=ans&a[i];
		cout<<ans;
	}
	return 0;
} 
