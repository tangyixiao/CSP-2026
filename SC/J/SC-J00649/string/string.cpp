#include<bits/stdc++.h>
using namespace std;

const int N=2e5+7;
int n;
struct ins{
	int val;
	char u;
}a[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].val>>a[i].u;	
	}
	int l=1,r=n;
	long long ans=0; 
	while(l<r){
		if(a[l].u!=a[r].u){
			ans+=min(a[l].val,a[r].val);
		}
		if(a[l].val<a[r].val){
			a[r].val-=a[l].val;
			l++;
		}else if(a[l].val>a[r].val){
			a[l].val-=a[r].val;
			r--;
		}else{
			a[l].val=a[r].val=0;
			l++,r--;
		}
	}
	cout<<ans;
}