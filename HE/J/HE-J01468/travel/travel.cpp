#include <bits/stdc++.h>
using namespace std;
int main (){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    //同车厢
    if(a1 == a2) cout << 1;
    else{
    	cout << "0000";
		return 0;
	}
    //同行
    if(b1[1] == b2[1]) cout << 1;
    else {
    	cout << "000";
    	return 0;
	}
    //同过道
    if((b1[2] <= 'C' && b2[2] <= 'C') || (b1[2] >= 'D' && b2[2] >= 'D')) cout << 1;
	else{
		cout << "00";
		return 0;
	}
    //邻座
    if((b1[2] + 1 == b2[2] || b1[2] - 1 == b2[2]) && b1[2] != b2[2])cout << 1;
	else cout << 0;
    return 0;
}
