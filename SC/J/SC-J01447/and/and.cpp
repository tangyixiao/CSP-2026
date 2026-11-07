#include<bits/stdc++.h>
using namespace std;
long long a,b,x[200010],ans=-111111,y[200010],t=0;
bool m=0;
void dfs(long long z,long long cs){
    t+=2;
	if(cs==b){
		ans=max(ans,z);	
		return;
	}
	if(t>100000000){
		m=1;
	}
	if(m)return;
	for(int i=1;i<=a;i++){
		if(y[i]){
			if((z&x[i])>ans){
				y[i]=0;
				dfs((z&x[i]),cs+1);
				y[i]=1;
			}
		}
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	long long ss=0;
	for(int i=0;i<=30;i++){
		ss+=1<<i;
	}
	for(int i=1;i<=a;i++){
		cin>>x[i];
		ss=(ss&x[i]);
		y[i]=1;
	}
	if(a==b){
		cout<<ss;
		return 0;
	}
	ss=0;
	for(int i=0;i<=30;i++){
		ss+=1<<i;
	}
	if(a==b+1){
		long long aans=-11111;
		for(int i=1;i<=a;i++){
			
			ss=0;
	for(int j=0;j<=30;j++){
		ss+=1<<j;
	}
			for(int j=1;j<=a;j++){
				if(j!=i)ss=(ss&x[j]);
			}
			aans=max(aans,ss);
			
		}
		cout<<aans;
		return 0;
	}
	
	dfs(ss,0);
	cout<<ans;
	return 0;
} 
  