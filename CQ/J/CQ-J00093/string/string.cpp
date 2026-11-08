#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;

struct node{
	int n;
	char s;
}a[N];
int n,ans;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	
	for (int i=1;i<=n;i++){
		cin>>a[i].n>>a[i].s;
	}
	int i=0,j=n;
	while(i<j){
		if(a[i].s!=a[j].s){
			int o=min(a[i].n,a[j].n);
			ans+=o;
			a[i].n-=o;
			a[j].n-=o;
			if(a[i].n==0){
				i++;
			}
			if(a[j].n==0){
				j--;
			}
		}
		else{
			int o=min(a[i].n,a[j].n);
			a[i].n-=o;
			a[j].n-=o;
			if(a[i].n==0){
				i++;
			}
			if(a[j].n==0){
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
} 
