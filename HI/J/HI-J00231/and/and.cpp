#include <bits/stdc++.h>
using namespace std;

int a[200001],er[200001],maxer[200001],u[200001];

int ers(int a){
	int cnt = 0;
	while (a){
		int c = a%2;
		a/=2;
		if (c){
			cnt++;	
		}
	}
	return cnt;
}

bool cmp(int a,int b){
	return a>b;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for (int i = 0;i < n;i++){
		cin>>a[i];
		er[i] = ers(a[i]);
		maxer[i] = er[i];
	}
	sort(maxer,maxer+n,cmp);
	for (int i = 0;i < m;i++){
		for (int  j = 0;j < n;j++){
			if (maxer[i] == er[j]){
				u[i] = a[j];	
			}
		}
	}
	long long maxn = u[0];
	for (int i = 1;i < m ;i++){
		maxn  = maxn & u[i];
	}
	cout<<maxn;
	
	return 0;
}

