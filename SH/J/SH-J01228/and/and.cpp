#include<bits/stdc++.h>
using namespace std;
long long a[100000005]; 
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
	long long ans,n,m;
	ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int p=0;p<m;p++){
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(j!=i){
				if(a[i]^a[j]>=ans){
				ans=a[i]^a[j];
				a[i]=ans;
				a[j]=ans;
				}
			}
		}
	}
}
cout<<ans;
}
