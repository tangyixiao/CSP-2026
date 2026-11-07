#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	long long a[100000005],c[10000005];
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	string s;
	for(int i=1;i<=n;i++){
		s+=a[i]*c[i];
	}
	long long num=s.size();
	long long x;
	for(int i=num;i>=num;i--){
		if(i!=s[i]){
			x++;
		}
	}
	cout << x;
	return 0;
}
