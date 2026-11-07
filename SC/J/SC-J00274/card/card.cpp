#include<bits/stdc++.h>
using namespace std;
const int N = 205;
int a[N];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	if(m == 1){
		cout << n;
		return 0;
	}else if(m == 2){
		for(int i = 1;i <= n;i++){
			cin >> a[i];
		}
		if(a[1] == a[n]){
			cout << n - 2 << " ";
			cout << 2;
		}else{
			cout << n - 2 <<" ";
			cout << n;
		}
	}
	return 0;
}