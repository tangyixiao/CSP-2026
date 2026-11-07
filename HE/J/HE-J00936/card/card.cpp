#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	long long a1[n+1];
	long long ans[m+2] = {0};
	for (int i=1;i<=n;i++){
		cin >> a1[i];
	}
	for (int i=1;i<=n;i++){
		long long a2[n+1];
		long long a3[m+1] = {0};
		long long k = i;
		for (int j=i;j<=n;j++){
			if (a3[a1[j]] != 0){
				for (int i=a3[a1[j]];i<=k;i++){
					a3[a2[i]] = 0;
					a2[i] = 0;
				}
				k = a3[a1[j]];
				a2[k] = a1[j];
				k++;
			}else{
				a3[a1[j]] = k;
				a2[k] = a1[j];
				k++;  
			}
		}
		for (int i=1;i<=k;i++){
			ans[a2[i]]++;
		}
	}
	sort(a1,a1+n);
	unique(a1,a1+n);
	for (int i=1;i<=m;i++){
		cout << ans[a1[i]];
	}
	return 0;
}
