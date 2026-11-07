#include <bits/stdc++.h>
using namespace std;
int a[234567] = {};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ooo = -1;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(a[i] > ooo){
			ooo = a[i];
		}
	}
	cout << ooo;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//guessing
