#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N];
char t[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>t[i];
	}
	int i=1,j=n,lfi=a[1],lfj=a[n];
	int ans=0;
	while(i<j){
		int k=min(lfi,lfj);
		if(t[i]!=t[j]){
			ans+=k;
		}
		lfi-=k;
		lfj-=k;
		if(lfi==0){
			i++;
			lfi=a[i];
		}
		if(lfj==0){
			j--;
			lfj=a[j];
		}
	}
	cout<<ans;
	return 0;
}
/*
from: PC_cats

Keep going!!!

2026/10/31 08:55
*/
