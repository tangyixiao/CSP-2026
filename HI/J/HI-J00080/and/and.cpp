#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int n,m,ans=0;
int a[N]={0};
void d(int w,int si,int z){
	if(w==m+1){
		ans=max(ans,z);
		return;
	}
	for(int i=si;i<=n;i++){
		if(w==1){
			d(2,i+1,a[i]); 
		}
		else{
			d(w+1,i+1,z&a[i]);
		}
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int ai;
		cin>>ai;
		a[i]=ai;
	}
	d(1,1,a[1]);
	cout<<ans<<endl;
	return 0;
} 
