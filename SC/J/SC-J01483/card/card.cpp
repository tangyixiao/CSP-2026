#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	if(m==2){
		int a[n+5],ans[n+5]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans1,ans2;
		if(a[n-1]==1){
			ans1=n;
			int x=0;
			for(int i=0;i<n;i++){
				if(a[i]==1){
					x++;
				}
			}
			ans2=n-x;
		}else{
			ans2=n;
			int x=0;
			for(int i=0;i<n;i++){
				if(a[i]==2){
					x++;
				}
			}
			ans1=n-x;
		}
		cout<<ans1<<' '<<ans2;
	}else{
		int a[n+5],ans[n+5]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
			ans[a[i]]=i+1;
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
	}
	return 0;
}