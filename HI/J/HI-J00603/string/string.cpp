#include <bits/stdc++.h>
using namespace std;
int a[200001];
long long e,b,d,f,n;
char c[200001];
string s;
int main (){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (long long i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	e=a[n]-1;
	f=1,d=n;
	while(f<=d){
		if (c[f]!=c[d]){
			b+=min(a[f],a[d]);	
		}
		if (a[f]>a[d]){
			a[f]-=a[d];
			d--;
		}
		else{
			a[d]-=a[f];
			f++;
		}
	}
	cout << b;
	return 0;
}
