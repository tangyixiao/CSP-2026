#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int a[N];

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>i;
	}
	for(int i=0;i<n;i++){
		cout<<i;
	}
	int maxn=0;
	for(int i=0;i<n;i++){
		if(a[i]>>2 &0 < a[i+1]>>2 &0){
			swap(a[i],a[i+1]);
			maxn=a[i];
		}
	}
	cout<<maxn;
	
	return 0;
} 
