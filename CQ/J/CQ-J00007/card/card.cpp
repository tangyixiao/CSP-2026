#include<bits/stdc++.h>
using namespace std;
#define int long long 
stack<int> st;
int cnt[5005],a[5005],ans[5005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,k;
	cin>>n>>k;
	bool ok=0;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i-1]>a[i]){
			ok=1;
		}
	}
	if (!ok){
		int sum=0;
		for (int i=1;i<=n;i++){
			if (a[i]!=a[i+1]){
				sum+=i;
			}
		}
		cout<<sum;
		return 0;
	}
	for (int i=1;i<=n;i++){
		while(!st.empty())st.pop();
		for (int j=i;j<=n;j++){
			if (cnt[a[j]]!=0){
				while(st.top()!=a[j]){
					cnt[st.top()]=0;
					st.pop();
				}
			}else{
				st.push(a[j]);
				cnt[a[j]]=1;
			}
		}
		for (int j=1;j<=k;j++){
			ans[j]+=cnt[j];
			cnt[j]=0;
		}
	}
	for (int i=1;i<=k;i++){
		cout<<ans[i]<<" ";
	}
}
/*
10 3
3 1 2 1 3 2 3 1 2 1


*/
