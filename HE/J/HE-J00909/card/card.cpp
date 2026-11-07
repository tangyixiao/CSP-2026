#include<bits/stdc++.h>
using namespace std;
const int M=3e5+7,N=5e5+7;
int n,m;
//int c[M];
int a[N],end[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		end[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		cout<<end[a[i]]<<" ";
	}
	return 0;
}
