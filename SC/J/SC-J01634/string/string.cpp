#include<bits/stdc++.h>
using namespace std;
long long n,l=0;
bool was[200005];
long long ans=0;
struct node{
	long long s;
	char b;
} a[200005] ;
int main(){
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<"0";
		return 0;
	}
	for(long long i=1;i<=n;i++){
		cin>>a[i].s>>a[i].b;
	}
	int i=1,j=n;
	while(1){
		if(was[i+1]==1) break;
		if(a[i].b!=a[j].b){
			ans++;
			a[i].s--;a[j].s--;
			if(a[i].s==0) {
				was[i]=1;
				i++;
			}
			if(a[j].s==0){
				was[j]=1;
				j--;
			}
		}
		
	}
	cout<<ans;
	return 0;
} 