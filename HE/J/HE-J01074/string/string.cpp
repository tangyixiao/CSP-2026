#include<bits/stdc++.h>
using namespace std;
string m;
int n;
long long t, a;
int main(){
	freopen("string2.in","r",stdin);
	freopen("string.out","w",stdout);
	char b;
	cin >> n;
	while(n != 0){
		cin >> a >> b;
		while(a != 0){
			m += b;
			a--;
		}
		n--;
	}
	int mid = m.length() / 2 + 1;
	long long l = 0 ,o = m.length() - 1,r = o;
	while(l != mid){
		if(m[l] != m[r]){
			t++;
		}
		l++;
		r--;
	}
	cout << t;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
