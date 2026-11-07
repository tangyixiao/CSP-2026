#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin >> n >> m;
	int a[200001] = {};
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	int maxl = 0;
	for(int i = 0;i < n;i++){
		if(m != 1){
			for(int j = i+1;j < n;j++){
				maxl = max(maxl,a[i]&a[j]);
			}
		}
		else{
			maxl = max(maxl,a[i]);
		}
	}
	cout << maxl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
