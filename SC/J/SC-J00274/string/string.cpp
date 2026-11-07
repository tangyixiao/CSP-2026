#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long x;
	string dele;
	while(n--){
		cin >> x;
		cin >> dele;
		
	}
	long long cnt = 0,num = s.size() - 1;
	for(long long i = 0;i < s.size()/2;i++){
		if(s[i] != s[num]){
			cnt++;
			num--;
		}else{
			num--;
			continue;
		}
	}
	cout << cnt;
	return 0;
}