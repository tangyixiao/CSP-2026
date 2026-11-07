#include<bits/stdc++.h>
using namespace std;
int n,m,a,l[300005];
//int d[300005][1005];
int main(){
	freopen("card.in","r",stdin);
	cin>>n>>m;
	for(int i=1;i<n+1;i++){
		cin>>a;
		l[a]++;
		//l[a]=max(l[a]+1,i);
	}
	l[a]=n;
	for(int i=1;i<m+1;i++){
		cout<<l[i]<<" ";
	} 
	freopen("card.out","w",stdout);
	
	return 0;
}