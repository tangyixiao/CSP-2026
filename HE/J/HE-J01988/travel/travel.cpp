#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5 + 10;
string a,aa,b,bb;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> aa >> b >> bb;
	//CheXiang
	bool f1 = 1,f2 = 1,f3 = 1,f4 = 1;
	for(int i = 0;i < a.size();i ++){
		if(a[i] != b[i]){
			cout << "0000";
			f1 = 0;
			return 0;
		}
	}
	cout << '1';
	//Pai
	for(int i = 0;i < aa.size() - 1;i ++){
		if(aa[i] != bb[i]){
			cout << "000"; return 0;
			f2 = 0;
		}
	}
	cout << '1';
	//Ce
	int pd1,pd2;
	if(aa[2] <= 'A')pd1 = 1;
	else pd1 = 2;
	if(bb[2] <= 'A')pd2 = 1;
	else pd2 = 2;
	if(pd1 == pd2)cout << '1';
	else {cout << "00";return 0;}
	//Xianglin
	char x = aa[2],y = bb[2];
	if(y > x)swap(x,y);
	if(y == x + 1)cout << '1';
	else cout << '0';
	return 0;
}
