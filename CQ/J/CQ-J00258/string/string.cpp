#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1000000];
char m,c[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	long long i=1,k=n,nm=0;
	while(i!=k){
		if(c[i]!=c[k]){
			nm+=min(a[i],a[k]);
		}
		a[i]-=min(a[i],a[k]);
		a[k]-=min(a[i],a[k]);
		if(a[i]==0)i++;
		if(a[k]==0)k--;
	}
	cout<<nm;
	return 0;
} 
