#include<iostream>
#include<cstdio>
using namespace std;
long long a[200005], b[200005];
char c[200005], d[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		sum+=a[i];
	}
	for(int i = 1; i <= n; i++){
		b[i] = a[n-i+1];
		d[i] = c[n-i+1];
	}
	long long res =0,i = 1, j = 1, li = a[1], lj = b[1], cal = 0;
	while(cal<sum){
		if(li<lj){
			if(c[i]!=d[j])res+=li-cal;
			cal = li;
			li+=a[++i];
		}else if(li==lj){
			if(c[i]!=d[j])res+=li-cal;
			cal = li;
			li += a[++i];
			lj += b[++j];
		}else{
			if(c[i]!=d[j])res+=lj-cal;
			cal = lj;
			lj+=b[++j];
		}
	}
	cout << res/2;
	return 0;
}
