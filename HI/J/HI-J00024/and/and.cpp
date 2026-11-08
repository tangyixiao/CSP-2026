#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200030],max1;
void nh(int gs,int wz,long long sz){
	if(gs==m){
		max1=max(max1,sz);
		return ;
	}
	for(int i=wz+1;i<=n+gs+1-m;i++){
		nh(gs+1,i,sz&a[i]);
	}
}
int main(){
	freopen("and.cpp","r",stdin);
	freopen("and.cpp","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		nh(1,i,a[i]); 
	}
	cout<<max1;
	return 0;	
} 
