#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
int hui(string x){
	long long l=0,r=x.size()-1;
	long long cnt=0;
	while(l<=r){
		if(x[l]==x[r]){
			l++;
			r--;
		}
		else{
			cnt++;
			l++;
			r--;
		}
	}
	return cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	while(n--){
		long long a;
		char c;
		cin >> a >> c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	long long ans=hui(s);
	cout << ans;
	return 0;
}
