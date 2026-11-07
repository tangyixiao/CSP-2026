#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
int n,m,a[N],b[M],t,ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(int i=n;i>=1;i++){
		if(b[a[i]]>1){
			t=i;
			break;
		}
	}
	for(int i=n;i>t;i--){
		ans[a[i]]=i;
	}
	for(int i=1;i<=t;i++){
		int c;
		for(int j=i;j<=t;j++){
			if(a[j]==a[t]){
				c=j;
				ans[a[t]]++;
				break;
			}
		}
	}
	return 0;
} 