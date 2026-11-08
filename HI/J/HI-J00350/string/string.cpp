#include <bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;cin >> n;
	long long sum = 0;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	long long ans = 0;
	int cl = 1,cr = n;
	for(int i=1;i<=n;i++){

		if(a[cl]>a[cr]){
			if(c[cl]!=c[cr]) ans+=a[cr];
			a[cl] -= a[cr];
			a[cr] = 0;c[cr] = ' ';
			cr--;
		}
		else if(a[cl]<a[cr]){
			if(c[cl]!=c[cr]) ans+=a[cl];
			a[cr] -= a[cl];
			a[cl] = 0;c[cl] = ' ';
			cl++;
		}
		else{
			if(c[cl]!=c[cr]) ans+=a[cl];
			a[cl] = 0;c[cl] = ' ';
			a[cr] = 0;c[cr] = ' ';
			cl++;cr--;
		}
	}	

	
	cout << ans;
} 
