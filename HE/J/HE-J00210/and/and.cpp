#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int n,m,d=0;
int mx=INT_MIN,a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,a[i]^a[j]);
			}
		}
		cout<<mx;
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		d=d^a[i];
	}
	cout<<d;
	return 0;	
} 
