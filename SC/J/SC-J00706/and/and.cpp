#include <bits/stdc++.h>
#include <cstring>
using namespace std;

const int MAXN = 200005;
long long a[MAXN];

int pow(int di,int min){
	int re = 1;
	for(int i = 0;i < min;i ++){
		re *= di;
	}
	return re;
}

int TtT(long long n){
	if(n == 1|| n == 0){
		return n;
	}
	for(int i = 0;i <= n/2;i++){
		if(pow(2,i+1) > n){
			return 1 * pow(10,i) + TtT(n-pow(2,i));
		}
	}
}

int TtTen(long long n){
	long long sum = 0;
	int i = 0;
	while(n != 0){
		sum += n%10 * pow(2,i);
		i ++;
		n /= 10;
	}
	return sum;
}

int And(long long a,long long b){
	if(a == 0||b == 0){
		return 0;
	}
	int g1 = a % 10,g2 = b % 10;
	if(g1 && g2){
		return And(a/10,b/10) * 10 + 1;
	}else{
		return And(a/10,b/10) * 10;
	}
}

int main(){
	freopen("and.in","w",stdin);
	freopen("and.out","r",stdout);
	long long m = 0,n = 0;
	cin >> m >> n;
	for(long long i = 0;i < m;i ++){
		cin >> a[i];
	}
	for(long long l = 0;l < n;l++){
		long long max = a[l];
		for(long long x = l;x < m;x ++){
			if(max < a[x]){
				max = a[x];
				long long lin = a[l];
				a[l] = a[x];
				a[x] = lin;
			}
		}
	}
	long long result = a[0];
	for(long long y = 1;y < n;y ++){
		result = TtTen(And(TtT(result),TtT(a[y])));
	}
	cout << result;
}