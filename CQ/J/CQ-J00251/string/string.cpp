#include<bits/stdc++.h> 
using namespace std;

long long w; 
int sea1(int a,long long n[]){//ÕÒ×ó¶Ëµã 
	for(int i=1;i<=w/2;i++){
		if(n[i]>=a){
			return i;
		}
	}
}
int sea2(int a,long long n[]){//ÕÒÓÒ¶Ëµã 
	for(int i=w;i>w/2;i--){
		if(n[i]<=a){
			return i+1;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	int i,j;
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	long long x[n+1],p[n+1];
	x[0]=0;
	p[0]=0;
	string y[n+1];
	for(int k=1;k<=n;k++){
		cin>>x[k]>>y[k];
		p[k]=p[k-1]+x[k];
	}
	w=p[n];
	int ans=0;
	i=1;
	j=w;
	for(int k=1;k<=p[n]/2+1;k++){
		if(y[sea1(i,p)]!=y[sea2(j,p)]){	
			ans++;
		}
		i++;
		j--;
	}
	if(ans=0){
		cout<<0;
	}
	else cout<<ans;
	return 0;
}
