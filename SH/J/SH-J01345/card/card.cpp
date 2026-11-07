#include <bits/stdc++.h>
using namespace std;
int arr[300001];
int ans[300001];
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){cin>>arr[i];}
	for (int i=1;i<=n;i++){
		vector <int> v;
		for (int j=i;j<=n;j++){
			int x=0;
			for (x=0;x<v.size();x++){
				if (v[x]==arr[j]){break;}
			}
			int l=v.size();
			for (int p=x;p<l;p++){v.pop_back();}
			v.push_back(arr[j]);
		}
		for (int j=0;j<v.size();j++){
			ans[v[j]]++;
		}
	}
	for (int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
