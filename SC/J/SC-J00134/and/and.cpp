#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=-1,sum;
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
		cin>>a[i];
	sum=a[1];
	for(int i=1;i<=n;i++){
		for(int k=1;k<=m;k++){
			sum=sum&a[i];
		}
		maxn=max(sum,maxn);
		sum=a[i];
	}
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
} 