#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,eans = 0;
	cin>>n>>m;
	vector<int> A(n);
	for (int &a : A) cin>>a;
	for (int i = 0;i < pow(2,n + 1);i++){
		int a = i,ans = 0,k = 0;
		vector<int> B(n);
		while(a){
			B[k] = (a % 2);
			a /= 2;
			k++;
		}
		if (ans == m){
			ans = 0;
			for (int j = 0;j < n;j++){
				if (B[j]){
					if (ans == 0) ans = A[j];
					else ans = (ans & A[j]);
					cout<<A[j]<<' ';
				}
			}
			cout<<"\n";
			eans = max(eans,ans);
		}
	}
	cout<<eans;
	return 0;
}
/*

4 2
3 15 12 12

5 3
31 3 1 15 7

*/