#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[20010];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	cin>>a[1];
	long long maxn=a[1];
	long long yun=a[1];
	for(int i=2;i<=n;i++) {
		cin>>a[i];
		maxn=max(maxn,a[i]);
		yun=(yun&a[i]);
	}
	if(m==1){
		cout<<maxn;
		return 0;
	} 
	if(m==n) {
		cout<<yun;
		return 0;
	}
	long long shit=a[1]&a[2];
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					shit=max(shit,a[i]&a[j]);
				}
				
			}
		}
		cout<<shit;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	cout<<a[m];
	return 0;
} 
