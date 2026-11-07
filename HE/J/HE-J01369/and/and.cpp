#include<iostream>
#include<algorithm>
using namespace std;
int n,m,a[200005],zdz;//n中选m个数相互按位与 
bool vis[200005]={0};
int max_an(int ceng,int zhi){
	if(ceng==m){
		zdz=max(zhi,zdz);
		return 0;
	}
	if(zhi<=zdz)return 0;
	for(int i=0;i<n;i++){
		if(!vis[i]){
			vis[i]=1;
			max_an(ceng+1,zhi&a[i]);
			vis[i]=0;
		}
	}
}
bool cmp(int a,int b){return a>b;}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		vis[i]=1;
		max_an(1,a[i]);
		vis[i]=0;
	}
	cout<<zdz;
	return 0;
}

