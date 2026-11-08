#include<bits/stdc++.h> 
using namespace std;
const int N=2e7+9;
long long n,m;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	long long p=a[1];
	for(int i=1;i<=n;i++){
		p=max(p,a[i]);
	} 
	for(int i=1;i<=n;i++){
		if(a[i]==p){
			a[i]=0;
		} 
	} 
	long long pp=0;
	for(int i=1;i<=n;i++){
		pp=max(pp,a[i]);
	} 
	cout<<pp;
	return 0;
}
