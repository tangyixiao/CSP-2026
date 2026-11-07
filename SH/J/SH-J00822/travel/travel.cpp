#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll grp[5]={0,0,0,1,1};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s1,s2,t1,t2;
	cin >> s1 >> s2 >> t1 >> t2;
	if(s1!=t1){
		cout << "0000";
	}else{
		if(s2[0]!=t2[0]||s2[1]!=t2[1]){
			cout << "1000"; 
		}else{
			if(grp[s2[2]-'A']!=grp[t2[2]-'A']){
				cout << "1100";
			}else{
				if(abs(s2[2]-t2[2])!=1){
					cout << "1110";
				}else{
					cout << "1111";
				}
			}
		}
	}
	return 0;
}

