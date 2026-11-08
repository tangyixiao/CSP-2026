#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int n,m,s=0;
    cin>>n>>m;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
    sort(a.begin(),a.end());
    s=a[n];
    for(int i=n-1;i>=m;i--){
    	s=s&a[i];
	}
	cout<<s;
	return 0;
}
