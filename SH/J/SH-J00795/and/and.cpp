#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200200],ans;
bool f[200200];
void calc(int j,int k,long long res){
	res&=a[j];
	if(k>=m){
		ans=max(res,ans);
		return;
	}
	for(int i=0;i<n;i++){
		if(!f[i]){
			f[i]=1;
			calc(i,k+1,res);
			f[i]=0;
		}
	} 
}	
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==n){
		for(int i=0;i<n;i++)
		a[0]&=a[i];
		cout<<a[0];
		return 0;
	} 
	for(int i=0;i<n;i++){
		calc(i,0,a[i]);
	}
	cout<<ans<<endl;
	return 0;
}
