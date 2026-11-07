#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> ans(m + 1,0);
	vector<int> A(n),C(1e5 + 7,0);
	for (int i = 0;i < n;i++){
		cin>>A[i];
	}
	for (int l = 0;l < n;l++){
		int sul = 0;
		for (int i = l;i < n;i++){
			for (int j = 0;j < sul;j++){
				if (C[j] == A[i]){
					int aa = 0;
					for (int k = j;k < sul;k++){
						C[k] = 0;
						aa++;
					}
					sul -= aa;
					break;
				}
			}
			C[sul] = A[i],sul++;
		}
		for (int j = 0;j < sul;j++){
			ans[C[j]]++;
		}
	}
	for (int i = 1;i <= m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
/*

4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1

*/