#include<bits/stdc++.h> 
using namespace std;
int n,m,a[200009],sum,maxx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	sum=a[0];
	for(int j=0;j<n-m;j++){
		for(int i=j;i<m+j;i++){
			sum=sum&a[i];
		}
		maxx=max(maxx,sum);
	}
	
	cout<<maxx;
return 0;
}


