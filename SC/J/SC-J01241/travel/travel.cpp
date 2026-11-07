#include<bits/stdc++.h>
#define int int
using namespace std;
const int N = 1e5+5;
string c1, s1, c2, s2;
int nu;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1 == c2){
		cout<<'1'; nu++;
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			cout<<'1'; nu++;
			if((s1[2] < 'D' && s2[2] < 'D') || (s1[2] > 'C' && s2[2] > 'C')){
				cout<<'1'; nu++;
				if(abs(s1[2] - s2[2]) == 1){
					cout<<'1'; nu++;
				}
			} 
		} 
	}
	for(int i = 1; i <= 4-nu; i++) cout<<'0';
	return 0;
}  