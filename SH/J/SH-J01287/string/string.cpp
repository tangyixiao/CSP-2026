#include <bits/stdc++.h>
using namespace std;
string s;
long long k,sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin >> n;
	while(n--){
		long long a;char c;cin >> a >> c;
		for(int i=0;i<a;i++){
			s[k]=c; k++;
		}
	}
	for(int i=0;i<k/2;i++){
		if(s[i]==s[-i]){
			continue;
		}
		else{
			sum++;
		}
	}
	cout << sum+1;
	return 0;
}
