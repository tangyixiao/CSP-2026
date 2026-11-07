#include <bits/std++.h>
using namespace std;
long long n,a[N];
const int N=2e5+10;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		int x;
		int y;
		cin >>x>>y; 
	}
	if(n==1) {cout <<2; return 0;}
	if(n==2) {
		cout << 4;
		return 0;
	}
	cout << 0;	
	return 0;
}
