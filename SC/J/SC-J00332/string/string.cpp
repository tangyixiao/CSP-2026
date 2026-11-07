#include<bits/stdc++.h>
using namespace std;
int b[200005],c[2000005];
string a[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("strind.out","w",stdout);
	int n,sum = 0,ans = 0;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> b[i];
		cin >> c[i];	
	}
	for(int i = 1;i<=n;i++){
		for(int j=1+ans;j<=b[i]+ans;j++){
			a[j] = c[i];
		}
		ans+=b[i];
	}
	for(int i=1;i <= ans/2;i++){
		for(int j = ans;j>=ans/2;j--){
			if(a[i] != a[j]){
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}