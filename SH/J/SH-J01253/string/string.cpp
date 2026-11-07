#include<iostream>
using namespace std;

int n, a[200005];
char c[200005];
string s="";

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	bool allthesame=1;
	char prev;
	for(int i=1; i<=n; i++){
		int a; char c;
		cin >> a >> c;
		if(i==1)
			prev = c;
		else
			allthesame = (allthesame&&(prev==c));
		while(a--)
			s = s+c;
	}
	
	if(allthesame){
		cout << 0;
		return 0;
	}
	
	int cnt=0, len=s.length();
	for(int i=0; i<=len/2-1; i++){
		if(s[i] != s[len-i-1])
			cnt++;
	}
	
	cout << cnt;
	
	return 0;
}

