#include<bits/stdc++.h>
using namespace std;
long long n,m,cnt;
long long a[200005];
int main(){

freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
cin>>n;
cin>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=n;j++){
			if(a[j-1]<a[j]){
			cnt=a[j-1];
			a[j-1]=a[j];
			a[j]=cnt;	
			}
		}
	}
	cout<<a[n/2];
	return 0;
} 

