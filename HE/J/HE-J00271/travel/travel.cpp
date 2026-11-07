#include<bits/stdc++.h >
using namespace std;
int main()
{
	freopen("travel","r",stdin);
	freopen("trevel","w",stdout);
	long long c1;
	string c2;
	long long s1;
	string s2;
	cin >> c1 >> c2 >> s1 >> s2;
	if(c1==s1){
		cout << "1";
		if((c2%10)==s2%10){
		cout << "1";
		if((c2/100)-1==s2/100){
			cout << "1";
		}
		else {
			cout << "0";
		}
	}
	else{
		cout << "0";
	}
	}
	else {
		cout << "0";
	}
	
	return 0;
}
