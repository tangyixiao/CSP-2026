#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int n,o,m,p[200007],ans=0;
void _(int i,int s,int c){
	if(i>=n){
		return;
	}
	
	_(i+1,s,c);
	if(c+1>m){
		ans=max(ans,s);
	}
	_(i+1,s&p[i],c+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	
	_(0,31,0);
	cout<<ans;
}
