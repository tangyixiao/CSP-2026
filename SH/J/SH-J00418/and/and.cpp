#include<bits/stdc++.h>
using namespace std;
int n,m,a[200007][30];
int ans=0,num=1;
struct node{
	int p,q;
}f[200007];
bool cmp(node x,node y){
	return x.p>y.p;
}
void change(int sum,int x){
	int num=1;
	for(int i=1;i<=29;i++) num*=2;
	for(int i=29;i>=0;i--){
		if(x-num>=0) a[sum][i]=1,x-=num;
		else a[sum][i]=0;
		num/=2;
	}
}
void op(int x,int y){
	for(int i=0;i<=29;i--){
		if(a[x][i]==1 and a[y][i]==1) a[200001][i]=1; 
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			ans=max(ans,x);
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>f[i].p;
		f[i].q=i;
		change(i,f[i].p);
	}
	sort(f+1,f+n+1,cmp);
	if(m==2){
		op(f[1].q,f[2].q);
	}
	else{
		for(int i=0;i<=29;i++){
			a[200001][i]=a[f[1].q][i];
		}
		for(int i=1;i<m;i++){
			op(200001,f[i+1].q);
		}
	}
	for(int i=0;i<=29;i++){
		ans+=num*a[200001][i];
		num*=2;
	}
	cout<<ans;
	return 0;
}
