#include<bits/stdc++.h>
using namespace std;

long long a[200010];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long u=0;
	if(m==n){
		u=a[0];
		for(int i=1;i<n;i++){
			u=u&a[i];
		}
		cout<<u;
		return 0;
	}else if(m==1){
		sort(a,a+n);
		cout<<a[n-1];
		return 0;
	}else if(m==2){
		u=INT_MIN;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]&a[j]>u){
					u=a[i]&a[j];
				}
			}
		}
		cout<<u;
		return 0;
	}
	sort(a,a+n);
	u=a[n-1];
	for(int i=n-1-1;i>n-m-1;i--){
		u=u&a[i];
	}
	cout<<u;
	return 0;//Trick||Treat!
} 
