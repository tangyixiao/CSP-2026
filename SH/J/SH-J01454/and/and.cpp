#include<bits/stdc++.h>

using namespace std;

const int N = 2e5+10;
int a[N];
int mx = -1;
int n,m;
void dfs(int index1,int now,int num){
	if(num >= m){
		mx = max(now,mx);
		return;
	}
	for(int i = index1; i <= n; i++){
		dfs(i+1,a[i]&now,num+1);
	}
	return;
}

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		dfs(i+1,a[i],1);
	}
	cout << mx;
	
	return 0;
}
