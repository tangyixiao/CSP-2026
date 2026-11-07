#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long n,a1,sum,ans,i,j;
	char b1;
	sum = 0;
	ans = 0;
	for (int i=0;i<=n-1;i++){
		cin >> a1 >> b1;
		s += a1*b1;
		sum += a1;
	}
	if (sum % 2 == 1){
		i = sum/2;
		j = i+2;
	}else{
		i = sum/2;
		j = i+1;
	}
	while (1){
		if (i<0 || j>=n){
			break;
		}
		if (s[i] != s[j]){
			ans++;
		}
		i--;
		j++;
	}
	cout << ans;
	return 0;
}
