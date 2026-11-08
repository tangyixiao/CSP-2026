#include <bits/stdc++.h>
using namespace std;
bool isHW(string s) {
	int len=s.size();
	for(int i=0; i<len; i++) {
		if(!(s[i]==s[len-1-i])) {
			return false;
		}
	}
	return 1;
}

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin>>n;
	int forcnt=0;
	for(int i=0; i<n; i++) {
		int sn;
		char ps;
		cin>>sn>>ps;                                          
		for(int j=0; j<sn; j++) {
			s[forcnt+j]=ps;
		}
		forcnt+=sn;
	}
	if(isHW(s)) {
		cout<<0;
	} else {
		cout<<forcnt/2;
	}

	return 0;
}

