#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],maxx=-2000005;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	if(m==1){
		sort(a,a+n);
		cout<<a[n-1];
	}else if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int k=a[i];
				k&=a[j]; 
				maxx=max(maxx,k);
			}
		}
		cout<<maxx;
	}else if(m==n){
		int s=a[0];
		for(int i=1;i<n;i++){
			s&=a[i];
		}
		cout<<s;
	}
}
