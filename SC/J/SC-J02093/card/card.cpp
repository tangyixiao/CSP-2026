#include<iostream>
using namespace std;
const int N = 5e5 + 5;
int a[N],d[N];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++) d[a[i]]++,d[a[n] + 1]--;
	int sum = 0;
	for(int i = 1;i <= m;i++){
		sum += d[i];
		cout << sum;
		if(i != m) cout << ' ';
	}
	return 0;
}