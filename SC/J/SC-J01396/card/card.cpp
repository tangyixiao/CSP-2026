#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200050],cnt[20050],t[20050],ss[20050];
signed main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		memset(cnt,0,sizeof(cnt));
		memset(t,0,sizeof(t));
		for(int i=1;i<=n-j+1;i++){
			if(cnt[a[i]]){
				for(int k=t[a[i]];k<=i;k++){
					cnt[k]--;
				}
			}
			cnt[a[i]]++;
			t[a[i]]=i;
    	}
    	for(int i=1;i<=m;i++){
    		ss[i]+=cnt[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ss[i]<<" ";
	}
	return 0;
}
/*
5
3 a
4 b
5 c
2 a
4 b

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/