#include <bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1==c2) cout << 1;
	else{
		cout << "0000";
		return 0;
	}
	int p1,p2,n1,n2;
	p1=s1[0]-'0';
	p2=s1[1]-'0';
	n1=p1*10+p2;
	p1=s2[0]-'0';
	p2=s2[1]-'0';
	n2=p1*10+p2;
	if (n1==n2) cout << 1;
	else{
		cout << "000";
		return 0;
	}
	int l1,l2;
	l1=s1[2];
	l2=s2[2];
	if (l1=='A'||l1=='B'||l1=='C'){
		if (l2=='A'||l2=='B'||l2=='C'){
			cout << 1;
		}else{
			cout << "00";
			return 0;
		}
		if (l1=='B'||l2=='B'){
			cout << 1;
			return 0;
		}else{
			cout << 0;
			return 0;
		}
	}
	if (l1=='F'&&l2=='D'){
		cout << 11;
		return 0;
	}
	if (l1=='D'&&l2=='F'){
		cout << 11;
		return 0; 
	}
	cout << "00";
	return 0;
}