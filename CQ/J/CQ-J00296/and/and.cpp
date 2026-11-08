#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[10005];
int mx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
} 
for(int i=1;i<=m;i++){
	mx=-1;
	int t=0;
	for(int j=1;j<=n;j++){
		if(mx<a[j]){
			mx=a[j];
			t=j;
		}
	} 
	if(i!=m){
		a[t]=0;
	}
} 
cout<<mx;
	return 0;
} 
