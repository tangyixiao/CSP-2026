#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],t,sum = 0,l,r,suml,sumr;
char c[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[t] >> c[t];
		if(c[t] == c[t-1]){
			a[t-1] += a[t];
		}
		else if(c[t] != c[t-1] && i != n-1) t++;
	}
	l = 0,r = t;
	while(l < r){
		if(c[l] != c[r]) sum += min(a[l],a[r]);
		if(a[l] < a[r]){
			a[r] -= a[l];
			a[l] = 0;
			l++; 
		}
		else if(a[l] > a[r]){
			a[l] -= a[r];
			a[r] = 0;
			r--; 
		}
		else{
			a[r] = a[l] = 0;
			l++,r--;
		}
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
