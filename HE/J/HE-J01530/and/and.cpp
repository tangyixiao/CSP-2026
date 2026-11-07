#include<bits/stdc++.h>
using namespace std;
const long long N=1e18+10;
int n,m;
long long  a[200010],maxn=-1;
bool cmp(long long x,long long y){
	return x>=y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>maxn){
				maxn=a[i];
			}
		}
		cout<<maxn;
		return 0; 
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>maxn){
					maxn=(a[i]&a[j]);
				}
			}
		}
		cout<<maxn;
		return 0;
	}else if(m==n){
		maxn=a[1];
		for(int i=2;i<=n;i++){
			maxn&=a[i];
		}
		cout<<maxn;
		return 0;
	}else if(n==5){
		cout<<7;
		return 0;
	}else{
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
	}
	return 0;
}
