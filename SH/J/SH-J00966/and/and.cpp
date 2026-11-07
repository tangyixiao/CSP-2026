#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,nn;
	cin >> n >> nn;
	int nnn[222222] = {0},nnnnn[222222] = {0},ans[222222] = {0};
	for(int i = 1 ; i <= n ; i++){
		int nnnn = nnn[i];
		nnnnn[i] += nnnn % 10;
		nnnn /= 10;
		ans[i]++;
		while( nnnn >= 0 ){
			nnnnn[i]  = nnnnn[i] * 10 + nnnn % 10;
			nnnn /= 10;
			ans[i]++;
		}
	}
	sort(ans+1,ans+1+n);
	cout << ans[n+1];
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
