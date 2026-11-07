#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],m,b[32],id,d[200005],dj[35],v,ib[200005];
int o[35][200005],cnt=1,ans;
int main(){
	b[0]=1;
for(int i=1;i<=30;i++){
	b[i]=b[i-1]*2;
}	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
}
while(id<(n+1)){
	for(int j=30;j>=0;j--){
		if(a[id]>=b[j]){
			a[id]-=b[j];
			o[j][id]=1;
		}
	}
	if(a[id]==0){
		id++;
	}
}
for(int i=30;i>=0;i--){
	for(int j=1;j<=n;j++){
		d[i]+=o[i][j]; 
	}	
}
for(int i=30;i>=0;i--){
	if(d[i]>=m){
		v=i;
		ans=b[i];
		break;
	}	
}
for(int j=1;j<=n;j++){
		if(o[v][j]){
			ib[cnt]=j;
			cnt++;
		} 
}
for(int i=30;i>=0;i--){
	for(int j=1;j<=cnt;j++){
		dj[i]+=o[i][ib[j]]; 
	}	
}
for(int i=v-1;i>=0;i--){
	if(dj[i]>=m){
		ans+=b[i];
		
	}	
}
cout<<ans;
	return 0;
}
