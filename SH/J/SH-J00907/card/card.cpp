#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
bool ISTESHUXINGZHIA = 1;
int n,m;
int a[N];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
		if(a[i] < a[i-1]){
			ISTESHUXINGZHIA = 0;
		}
	}
	if(ISTESHUXINGZHIA){
		for(int i = 2;i <= n+1;i ++){
			if(a[i] != a[i-1]){
				cout << i-1 << " ";
			}
		}
		return 0;
	}
	for(int i = 1;i <= m;i ++){
			cout << i << " ";
	}
	return 0;
}
