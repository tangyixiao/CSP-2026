#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e9+100000000;
char s[maxn];
long long n,a, num = 0, sum = 0, b;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(long long i = 1;i <= n;i++){
		cin >> a >> c;
		for(long long j = num;j < num+a;j++){
			s[j] = c;
		}
		num += a;
	}
	b = num;
	num -= 1;
	for(long long i = 0;i < b/2;i++){
		if(s[i] != s[num]){
			sum++;
		}
		num--;
	}
	cout << sum;
	return 0;
}
