#include<bits/stdc++.h>
using namespace std;
using ll=long long;
constexpr int MAXN=200005;
int n,m,a[MAXN],flag[31],num,mx;
ll ans;
bool cmp(int x,int y){
	return x>y;
}int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<31;j++){
			if(a[i]&(1<<j)){
				flag[j]++;
			}
		}
	}sort(a+1,a+n+1,cmp);
	for(int i=0;i<31;i++){
		mx=max(mx,flag[i]);
	}for(int i=1;i<=n;i++){
		if(a[i]&(1<<mx)){
			if(!num){
				ans=a[i];
			}else{
				ans&=a[i];
			}num++;
		}if(num>=m){
			break;
		}
	}if(num<m){
		ans=a[1],num=1;
		for(int i=2;i<=n;i++){
			ans&=a[i];
			num++;
			if(num>=m){
				break;
			}
		}
	}cout<<ans;
	return 0;
}
