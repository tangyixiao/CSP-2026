#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005],nextn[500005];//nextn[i]:最后一个i的位置
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],nextn[a[i]]=i;
	stack<int> st;
	for(int k=1;k<=n;k++){
		for(int j=k;j<=n;j++){//不用模拟消除
			ans[a[j]]++;
			j=nextn[a[j]];
		}
	}
	for(int i=1;i<m;i++) cout<<ans[i]<<" ";
	cout<<ans[m];
	return 0;
}