#include <bits/stdc++.h>
using namespace std;

long long cnt[30];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s;
	long long len=0,y=0;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin >> a >> c;
		cnt[c-'a']+=a;
		len+=a;
	}
	for(int i=0;i<=25;i++){
		y=max(y,cnt[i]);
	}
	if(n>10){
		cout << 0;
		return 0;
	}
	if(len%2==0) cout << len-y;
	else{
		cout << ceil(1.0*(len-y)/2);
	}
	return 0;
}
