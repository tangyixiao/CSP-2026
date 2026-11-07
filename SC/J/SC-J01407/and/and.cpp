#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=0;
	cin>>n>>m;
	int num[n+1];
	for(int i=1;i<=n;i++){
		cin>>num[i];
		maxn=max(maxn,num[i]);
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==n){
		int y=num[1];
		for(int i=2;i<=n;i++){
			y=y&num[i];
		}
		cout<<y;
		return 0;
	}
	int a=0;
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				a=max(a,num[i]&num[j]);
			}
		}
		cout<<a;
		return 0;	
	}
	if(m==n-1){
		int y,mn=0;
		for(int i=1;i<=n;i++){
			if(i==1){
				y=num[2];
			}
			else{
				y=num[1];
			}
			for(int j=1;j<=n;j++){
				if(j==i){
					continue;
				}
				y=y&num[j];
			}
			mn=max(y,mn);
		}
		cout<<mn;
		return 0; 
	} 
	return 0;
} 