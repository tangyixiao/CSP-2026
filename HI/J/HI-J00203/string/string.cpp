#include <bits/stdc++.h>
using namespace std;
int l,n,sum = 0;
char a[1000000000];
char s;
void fnf(int x,int y){
	if (a[x] != a[y]){
		a[y] = a[x];
		sum++;
	} 
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	int num = 0;
	for (int i = 1;i <= n;i++){
		cin >> l >> s;
		for (int j = 1;j <= l;j++){
			num++;
			a[num] = s;
		}
	}
	int l = 1;
	int r = num;
	while(l < r){
		fnf(l,r);
		l++;
		r--;
	}
	cout << sum;
	return 0;
}
