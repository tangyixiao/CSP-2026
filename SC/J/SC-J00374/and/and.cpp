#include<bits/stdc++.h>
using namespace std;
int m,n;
long long a[2000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int  i=1;i<m;i++){
		int A=a[1];
		for(int j=1;j<=n;j++){
			if(j<n) a[j]=a[j+1]&a[j];
			if(j==n) a[j]=a[j]&A;
			
		}
		
	}
	long long maxx=0; 
	for(int i=1;i<=n;i++){
		maxx=max(maxx,a[i]);
	
	}
	cout<<maxx;
	return 0;
}