#include <bits/stdc++.h>
using namespace std;

int c1,c2;
string s1,s2;

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if(int(s1[2]) > int(s2[2])){
		swap(s1,s2);
	}
	if(c1 == c2){
		cout << "1";
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			cout << "1";
			if(s1[2] == 'A'){
				if(s2[2] == 'B'){
					cout << "11";
				}else if(s2[2] == 'C'){
					cout << "10";
				}else{
					cout << "00";
				}
			}else if(s1[2] == 'B'){
				if(s2[2] == 'A' || s2[2] == 'C'){
					cout << "11";
				}else{
					cout << "00";
				}
			}else if(s1[2] == 'C'){
				if(s2[2] == 'B'){
					cout << "11";
				}else if(s2[2] == 'A'){
					cout << "10";
				}else{
					cout << "00";
				}
			}else if(s1[2] == 'D'){
				if(s2[2] == 'E'){
					cout << "11";
				}else{
					cout << "00";
				}
			}else{
				if(s2[2] == 'D'){
					cout << "11";
				}else{
					cout << "00";
				}
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}

/*
你好 我是一个OIer 打完CSP-J后就要退役了
我在三年级的时候就参加了学校的C++教学课，后面又去学习后参加了GESP一级
随后一路过关斩将，终于在六年级时拿下了GESP八级
CSP-J马上就要考完了
我以后还会回来吗？也许会
下次试试S

bye,OI

  26/10/31 11:58
*/
