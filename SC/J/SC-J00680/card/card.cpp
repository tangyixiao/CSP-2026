#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],t[300010],sum[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	for(int i=n-1;i>=0;--i){
		if(t[a[i]]==0){
			for(int j=i;j<n;++j){
				if(t[a[j]]!=0)j=t[a[j]];
				sum[a[j]]++;
			}
			t[a[i]]=i;
		}
		else{
			for(int j=t[a[i]];j<n;++j){
				if(t[a[j]]!=0)j=t[a[j]];
				sum[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;++i){
		cout << sum[i] << ' ';
	}
	return 0;
} 