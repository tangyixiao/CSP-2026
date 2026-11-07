#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ad[200002];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>ad[i];
	}
	sort(ad,ad+n);
	for(int i=0;i<n;i++){
		if(ad[i]!=ad[0]){
			cout<<ad[i];
			return 0;
		}
	} 
	return 0;
}