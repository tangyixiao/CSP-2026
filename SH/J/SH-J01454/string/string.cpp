#include<bits/stdc++.h>

using namespace std;

const int N = 2e5+10;
long long a[N];
char c[N];

int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
	}
	int x1 = 1;
	int x2 = n;
	long long need = 0;
	while(x1 < x2){
		int mi = min(a[x1],a[x2]);
		
		if(c[x1] != c[x2]){
			need += mi;
		}
		
		a[x1] -= mi;
		a[x2] -= mi;
		
		if(a[x1] == 0){
			x1++;
		}
		if(a[x2] == 0){
			x2--;
		}
	}
	
	cout << need;
	
	return 0;
}
