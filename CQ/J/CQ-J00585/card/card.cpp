#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[500005],b[500005],ans[300005],cnt[300005];
bool book[500005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool va = true;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			va = false;
		}
		b[a[i]] = i;
		cnt[a[i]]++;
	}
	if(va){
		for(int i = 1;i<=m;i++){
			cout<<b[i]<<" ";
		}
		return 0;
	}
	for(int i = 1;i<=m;i++){
		for(int j = b[i];j<=n;){
			ans[a[j]]+=cnt[i];
			if(b[a[j]]!=j){
				j = b[a[j]]+1;
			}else{
				j++;
			}
		}
	}
	for(int i = 1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
//ypy is so cute
