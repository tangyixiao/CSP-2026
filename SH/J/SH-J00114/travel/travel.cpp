#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string a,b,c,d;
ll num1,num2;
bool check[5][5] = {
	0,1,1,0,0,
	1,0,1,0,0,
	1,1,0,0,0,
	0,0,0,0,1,
	0,0,0,1,0
};
bool check1[5][5] = {
	0,1,0,0,0,
	1,0,1,0,0,
	0,1,0,0,0,
	0,0,0,0,1,
	0,0,0,1,0
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a == c) cout<<1; 
	else cout<<0;
	if(a == c && b[0] == d[0] && b[1] == d[1]) cout<<1;
	else cout<<0; 
	if(a == c && b[0] == d[0] && b[1] == d[1] && check[b[2]-'A'][d[2]-'A']) cout<<1;
	else cout<<0;
	if(a == c && b[0] == d[0] && b[1] == d[1] && check1[b[2]-'A'][d[2]-'A']) cout<<1;
	else cout<<0;
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
