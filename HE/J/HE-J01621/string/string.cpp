#include<bits/stdc++.h>
using namespace std;
long long n,x;
char a;
long long sum;
long long ans,mid;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	sum = 0;
	for(int i = 1;i<=n;i++){
		cin>>x>>a;
		sum+=x;
		if(a[i] != a[i-1] && i>=2){
			b = false;
		}
		for(int i = 0;i<x;i++){
			s = s + a;
		}
	}
	if(b == true){
		cout<<0;
		return 0;
	}
	if(sum%2 == 0){
		mid = sum/2;
	}
	else{
		mid = sum/2+1;
	}
	ans = 0;
	for(int i = 0;i<mid;i++){
		if(s[i] != s[sum-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
