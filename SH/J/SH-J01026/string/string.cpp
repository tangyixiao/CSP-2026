#include <bits/stdc++.h>
using namespace std;
long long a[100000010];
char b[100000010];
char s[1000000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n = 0;
	cin>>n;
	long long ans = 0;
	for (long long i = 0; i < n; i++){
		cin>>a[i];
		cin>>b[i];
	}
	//string s = "";
	long long lens = 0;
	for (long long i = 0; i < n; i++){
		for (long long y = 0; y < a[i]; y++){
			lens ++;
			s[lens] = b[i];
		}
	}
	if(lens%2 == 1){
		ans --;
	}
	long long k2 = 0;
	while (k2 != lens - k2-1  && k2 + 1 != lens - k2-1 ){
	//while (k2 < lens-1){
		//cout<<s[k2]<<"22"<<s[lens - k2 -1]<<endl;
		if (s[k2] != s[lens - k2-1 ]){
			ans++;
		}
		k2++;
	} 
	cout<<ans;
	return 0;
}
