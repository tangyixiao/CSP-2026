#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool fl1,fl2,fl3,fl4;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		fl1 = 1;
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			fl2 = 1;
			if((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')){
				fl3 = 1;
				if(s1[2] > 'C' && s2[2] > 'C')fl4 = 1;
				else if(s1[2] <= 'B' && s2[2] <= 'B')fl4 = 1;
				else if(s1[2] > 'A' && s1[2] < 'D' && s2[2] > 'A' && s2[2] < 'D')fl4 = 1;
				else fl4 = 0;
			}
			else fl3 = fl4 = 0;
		}
		else fl2 = fl3 = fl4 = 0;
	}
	else fl1 = fl2 = fl3 = fl4 = 0;
	cout << fl1 << fl2 << fl3 << fl4;
	return 0;
}
