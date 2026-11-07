#include<bits/stdc++.h>
using namespace std;
long long a[1000000000];
int maxn=-1;
int zuhe(int x,int y){
	for(int i=1;i<=x;i++){
		int s=a[i]&a[y];
		maxn=max(maxn,s);
		zuhe(x,y-1);
	}
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	return 0;
} 
