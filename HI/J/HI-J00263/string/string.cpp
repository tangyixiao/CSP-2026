#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	long long n,a,c;
	cin >> n >> a >> c;
	long long cnt = 0;
	
	for(int i = 1;i <= a + b + c;i++){
		if(a + b + c != c + b + a) i = a;
		cnt++;
	}
	
	cout << cnt;
	
	return 0;
}
