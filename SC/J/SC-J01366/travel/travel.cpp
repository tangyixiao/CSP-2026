#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

string cr,sr,cx,sx;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> cr >> sr >> cx >> sx;
	bool qa=false,qb=false,qc=false,qd=false;
	if(cr == cx){
		qa=true;
	}
	if(qa && sr[0] == sx[0] && sr[1] == sx[1]){
		qb=true;
	}
	int vr=sr[2] - 'A',vx=sx[2] - 'A';
	if(vr == 5){
		vr=4;
	}
	if(vx == 5){
		vx=4;
	}
	int tr=(vr <= 2),tx=(vx <= 2);
	if(qb && tr + tx != 1){
		qc=true;
	}
	if(qc && abs(vr - vx) == 1){
		qd=true;
	}
	cout << qa << qb << qc << qd;
	return 0;
}