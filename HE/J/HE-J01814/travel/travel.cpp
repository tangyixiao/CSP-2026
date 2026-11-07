#include <bits/stdc++.h>
using namespace std;
char c[5] = {'A','B','C','D','F'};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cx1,cx2,st1,st2;
	cin >> cx1 >> st1 >> cx2 >> st2;
	if (cx1 == cx2){
		cout << 1;
	}else{
		cout << "0000";
		return 0;
	}
	string l1 = st1.substr(0,2),l2 = st2.substr(0,2);
	if (l1 == l2){
		cout << 1;
	}else{
		cout << "000";
		return 0;
	}
	string s1=st1.substr(2,1),s2 = st2.substr(2,1);
	int pos1=0,pos2=0;
	for (int i = 0;i < 5;i++){
		if (c[i] == s1[0]){
			pos1=i;
		}
		if (c[i] == s2[0]){
			pos2=i;
		}
	}
	if ((pos1 <= 2 && pos2 <= 2) || (pos1 > 2 && pos2 > 2)){
		cout << 1;
	}else{
		cout << "00";
		return 0;
	}
	if ((pos1 > 2 && pos2 > 2) || (pos1==1||pos2==1) ){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}
