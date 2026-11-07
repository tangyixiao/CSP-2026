#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200010],len,cnt=0;
	string b,yuan,fan;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		cin >> b[i];
		for(int j = 1;j<=a[i];j++){
			yuan+=b[i];
		}
	}
	len = yuan.size();
	for(int i=len-1;i>=len/2;i--){
		fan+=yuan[i];
		if(fan[len-i-1]!=yuan[len-i-1]){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
} 
