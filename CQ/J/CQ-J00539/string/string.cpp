#include<bits/stdc++.h>
using namespace std;
using t64 = long long;
struct side{
	t64 l,r;
	t64 type;
	bool operator < (const side &p) const{
		return l < p.l;
	}
};
t64 n,lg;
side alls[200005];
side b[400005];
t64 last,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	last = 0;
	for(int i=1;i<=n;i++){
		t64 il;
		char itp;
		cin >> il >> itp;
		t64 l = last+1;
		t64 r = last + il;
		last = r;
		alls[i].l = l;
		alls[i].r = r;
		alls[i].type = (t64)itp;
	}
//	for(int i=1;i<=n;i++)cout << alls[i].l <<' '<<alls[i].r<<' '<<(char)alls[i].type<<endl;
//	cout << last << endl;
//	cout << "--------------\n";
	if(last%2!=0){
		t64 md = last /2;
		for(int i=1;i<=n;i++){
			side nw = alls[i];
			if(nw.l<=md+1 &&nw.r>=md+1){
				if(nw.l<=md)b[++lg] = {nw.l,md,nw.type};//l,mid
				if(nw.r>=md+2)b[++lg] = {md+2-1,nw.r-1,nw.type};//md+2,nw.r
			}
			else if(nw.l>=md+2)b[++lg]={nw.l-1,nw.r-1,nw.type};
			else b[++lg]={nw.l,nw.r,nw.type};;
		}
		last -= 1;
	}
	else{
		t64 md = last /2;
		for(int i=1;i<=n;i++){
			side nw = alls[i];
			if(nw.l<=md &&nw.r>=md+1){
				b[++lg] = {nw.l,md,nw.type};//l,mid
				b[++lg] = {md+1,nw.r,nw.type};//md+2,nw.r
			}
			else b[++lg]={nw.l,nw.r,nw.type};
		}
	}
//	for(int i=1;i<=lg;i++)cout << b[i].l <<' '<<b[i].r<<' '<<(char)b[i].type<<endl;
//	cout << "--------------\n";
	t64 cn = 0;
	for(int i=1;i<=lg;i++){
		side nw = b[i];
		if(nw.l > last/2){
			cn += (nw.r-nw.l+1);
			b[i] = {nw.l-cn,nw.r-cn,nw.type};
			cn += (nw.r-nw.l+1);
		}
	}
//	for(int i=1;i<=lg;i++)cout << b[i].l <<' '<<b[i].r<<' '<<(char)b[i].type<<endl;
//	cout << "--------------\n";
	ans = last /2;
	t64 od = -1;
	t64 otp=-1;
	sort(b+1,b+lg+1);
	for(int i=1;i<=lg;i++){
		side nw = b[i];
		if(nw.l<=od&&otp == nw.type){
			if(od<=nw.r)ans -= (od-nw.l+1);
			else ans -= (nw.r-nw.l+1);
		}
		if(nw.r>od){
			od=nw.r;
			otp = nw.type;
		}
	}
	cout << ans<<endl;
	return 0;
}
/*
3
2 a
2 b
1 c

*/
