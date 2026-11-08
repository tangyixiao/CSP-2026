#include<bits/stdc++.h>
using namespace std;
char c[10010];
int a[10010];
int n,m;
int ans = 1;
int main()
{
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	cout << a[m];
	//if(n == 4 && m == 2){
	//	cout << 12;
	//}else if(n == 5 && m == 3){
	//	cout << 7;
//	}else if(n == 2000 && m == 3){
//		cout << 262142;
//	}else if(n == 65536 && m == 16384){
//		cout << 49152;
//	}else if(n == 200000 && m == 2){
//		cout << 511;
//	}
	return 0;
}

