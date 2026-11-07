#include <bits/stdc++.h>
using namespace std;

bool cmp(long long a,long long b){
	return a>b;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	long long a[n+1],mx[n+1],x;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<m;i++){
		mx[i]=a[i];
	}
	for(int i=0;i<m;i++){
		x=mx[i];
		x&=mx[i];
	}
	cout << x << endl;
	return 0;
}
