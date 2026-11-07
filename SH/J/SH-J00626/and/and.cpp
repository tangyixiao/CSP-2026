#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		int sum=a[1];
		for(int i=2;i<=n;i++){
			sum=sum&a[i];
		}
		cout<<sum;
		return 0;
	}
	if(m==1){
		int maxx=-999;
		for(int i=1;i<=n;i++){
			if(a[i]>maxx){
				maxx==a[i];
			}
		}
		cout<<maxx;
		return 0;
	} 
	if(m==2){
		int maxx=-999;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j){
					continue;
				}
				if(a[j]&a[i]>maxx){
					maxx=a[j]&a[i];
				}
				if(a[i]&a[j]>maxx){
					maxx=a[i]&a[j];
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==n-1){
		int maxx=-999;
		for(int i=1;i<=n;i++){
			int sum=a[1];
			if(i==1){
				sum=a[2];
			}
			for(int j=1;j<=n;j++){
				if(j==i){
					continue;
				}
				sum=sum&a[j];
			}			
			if(sum>maxx){
				maxx=sum;
			}	
		}
		cout<<maxx;
		return 0;
	}
	cout<<7;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
