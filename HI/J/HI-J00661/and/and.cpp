#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005],maxe=0;
	cin >> n >> m;
	for (int i = 1;i<=n;i++){
		cin >> a[i];
	}
	for (int i = 1;i<=n;i++){
		for (int j = i;j<=n;j++){
			if (a[i] | a[j] > maxe){
				maxe=a[i] | a[j];
			}
		}
	}
	cout << maxe; 
	return 0;
}
