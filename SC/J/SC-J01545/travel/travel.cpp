#include<bits/stdc++.h>
using namespace std;
const int N=10;
struct people{
	char d;
	int cx,pai;
	string zwh;
	bool sw;
};
people a[N];
void cs(int c){
	a[c].pai=(a[c].zwh[0]-'0')*10+(a[c].zwh[1]-'0');
	a[c].d=a[c].zwh[2];
	if(a[c].d=='A'||a[c].d=='B'||a[c].d=='C') a[c].sw=1;
	else a[c].sw=0;
	return ;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a[1].cx>>a[1].zwh>>a[2].cx>>a[2].zwh;
	cs(1);
	cs(2);
	if(a[1].cx==a[2].cx) cout<<1;
	else cout<<0;
	if(a[1].cx==a[2].cx&&a[1].pai==a[2].pai) cout<<1;
	else cout<<0;
	if(a[1].cx==a[2].cx&&a[1].pai==a[2].pai&&a[1].sw==a[2].sw) cout<<1;
	else cout<<0;
	if(a[1].cx==a[2].cx&&a[1].pai==a[2].pai){
//		if(a[1].sw==0&&a[2].sw==0)cout<<1;
		if(abs((a[1].d-'A')-(a[2].d-'A'))==1&&a[1].sw==a[2].sw) cout<<1;
		else cout<<0;
	}
	else cout<<0;
	return 0;
}