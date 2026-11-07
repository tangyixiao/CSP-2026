#include <bits/stdc++.h>
using namespace std;
long long n,a,ans,num;
string s,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	while(n--){
		cin >> a >> c;
		ans+=a;
		for(long long i = 1;i<=a;i++){
			s+=c;
		}
	}
	for(long long i = 0;i<ans/2;i++){
		if(s[i] != s[ans-i-1]){
			num++;
		}
	}
	cout << num;
	return 0;
}
