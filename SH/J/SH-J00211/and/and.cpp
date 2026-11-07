#include<bits/stdc++.h>
using namespace std;
int a[200010];
long long sum;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sum=a[1];
	if(m==n){
		for(int i=2;i<=n;i++){
			sum=(sum&a[i]);
			
		}
		cout<<sum;
	}
	else if(m==1){
		int max=0;
		for(int i=1;i<=n;i++){
			if(a[i]>max){
				max=a[i];
			}
		}
		cout<<max;
	}
	else if(m==2){
		int max=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>max&&i!=j){
					max=(a[i]&a[j]);
				}
			}
		}
		cout<<max;
	}
	else if(m==3){
		int max=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					if((a[i]&a[j]&a[k])>max&&i!=j&&j!=k){
						max=(a[i]&a[j]&a[k]);
					}
				}
				
			}
		}
		cout<<max;
	}
	return 0;
}
