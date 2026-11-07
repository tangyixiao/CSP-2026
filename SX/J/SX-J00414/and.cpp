#include <bits/stdc++.h> 
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,past[10086],two[10086][10086];
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> past[i];
		int asd[10000] = {};
		int cnt = 0;
		while(past[i] > 0){
			asd[cnt] = past[i] % 2;
			cnt++;
			past[i] = past[i] / 2;
		}
		for(int j = 0;j < cnt+1;j++){
			two[i][j] = asd[j];
		}
	}
cout << two;
	fclose(stdin);
	fclose(stdout);
	return 0;
}