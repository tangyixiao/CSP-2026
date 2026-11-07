#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
char x[200005];
string m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		cin >> x[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			m+=x[i];
		}
	}
	int sum=0;
	int l=m.length();
	for(int i=1;i<=l/2;i++){
		if(m[i-1]!=m[l-i]){
			sum++;
		}
	}
	cout << sum;
	return 0;
}
