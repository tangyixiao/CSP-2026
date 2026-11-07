#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+10;
const int M=3e5+10;
int a[N];
int appare[M];
int main() {
	cin.tie(0) -> ios_base::sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		vector<int> cnt(m+1,0);
		vector<int>arr;
		for(int j=i; j<=n; j++) {
			if(cnt[a[j]]) {
				bool can=0;
				vector<int> t;
				for(int i=0; i<arr.size(); i++) {
					if(arr[i]==a[j]) {
						can=1;
					}
					if(can) {
						cnt[arr[i]]=0;
					}
					if(!can){
						t.push_back(arr[i]);
					}
				}
				arr=t;
			}
			cnt[a[j]]=1;
			arr.push_back(a[j]);
		}
		for(int i=0;i<arr.size();i++) {
			appare[arr[i]]++;
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<appare[i]<<" ";
	}
	return 0;
}