#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int n, m, a[N];

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	
	int res=0;
	for(int i=1; i<=n; i++){
		int t=a[i], cnt=1;
		for(int j=i+1; j<=n; j++){
			cnt++;
			t&=a[j];
			if(cnt==m) break;
		}
		res=max(t, res);
	}
	
	cout<<res<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
