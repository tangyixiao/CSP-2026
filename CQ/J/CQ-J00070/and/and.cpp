#include<bits/stdc++.h> 
using namespace std;
long long n,m[2000008],p=0,t;
int main(){
	freopen("and.in","r",stdin);
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>m[i];
	}
	if(t==2){
	for(int i=1;i<n;i++){
		if(m[i]==m[i+1]){
		p=max(m[i],p);	
		}
	}
	if(p==0){
		for(int i=1;i<n;i++){
		if(m[i]==m[i+1]){
		p=max(m[i],m[i-1]);	
		}
	}
	p/=3;
	}
	cout<<p;
	}
	freopen("and.out","w",stdout);
	return 0;
}
