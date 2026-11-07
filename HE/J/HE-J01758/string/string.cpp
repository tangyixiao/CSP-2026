#include<bits/stdc++.h>
using namespace std;
int num;
char x;
char s[1000000009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum =0,a = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a;
		cin >> x;
		for(int i = sum; i < sum +a ; i++){
			s[i] = x;
		}
		sum += a;	
	}
	int b = sum - 1;
	sum/= 2;
	int c = 0;
	for(int i = 0; i < sum; i++){
		if(s[i] != s[b - i]){
			c++;
		}
	}
	cout << c;
	return 0;
}
