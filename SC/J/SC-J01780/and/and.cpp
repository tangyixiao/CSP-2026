#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int m,n,ans=-(2*1e5);
int a[N];
stack <int> st;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>ans){
			ans=a[i];
		} 
	} 
	sort(a+1,a+n+1);
	for(int i=n;m>0;m--){
	    ans=ans&a[i];
	    i--;
	}
	cout<<ans;
	return 0;
} 