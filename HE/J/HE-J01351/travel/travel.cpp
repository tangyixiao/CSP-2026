#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> c2 >> s1 >> s2;
	if(c1==c2){
		if(s1==s2){
			cout << "1111" << endl;
		}
	}
	if(c1!=c2){
		cout << "1110" << endl;
	}
	
	return 0;
}
