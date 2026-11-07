#include<bits/stdc++.h>
using namespace std;
int a[200005],maxn=-1,id=1;
bool vis[200005];
bool cmp(int x,int y){return x>y;}
int f(int x){
	int y;
	for(int i=0;i<=x;i++){
		if(pow(2,i)>x){
			y=i-1;
			break;
		}
	}
	int cnt=0; 
	for(int i=y;i>=0;i--){
		if(x>=pow(2,i)){
			cnt++;
			x-=pow(2,i);
		}
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		if(f(a[i])>maxn){
			id=i;
			maxn=f(a[i]);
		}
	}
	swap(a[id],a[1]);
	int num=a[1];
	for(int i=2;i<=m;i++){
		int numl,ip=1;
		for(int j=2;j<=n;j++){
			if(vis[j]==1)continue;
			numl=num&a[j];
			ip=j;
			break;
		}
		for(int j=2;j<=n;j++){
			if(vis[j]==1)continue;
			if(num&a[j]>numl){
				numl=num&a[j];
				ip=j;
			}
		}
		vis[ip]=1;
		num=numl;
	}
	cout<<num;
	return 0;
}