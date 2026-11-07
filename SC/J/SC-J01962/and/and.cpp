#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=2e5+5;
int n,m;
ll sum;
ll a[N];

bool cmp(ll x,ll y){
	return x>=y;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==m){
		sum=a[0];
		for(int i=1;i<m;i++){
			sum&=a[i];
		}
	}
	else{
		sort(a,a+n,cmp);
		sum=a[0];
		for(int i=1;i<m;i++){
			sum&=a[i];
		}
	}
	cout<<sum;
	
	return 0;
}