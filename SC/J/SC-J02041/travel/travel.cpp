#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int v=int(b[2]-'A'),w=int(d[2]-'A');
	if(a==c){
		cout<<1;
		if(b[0]==d[0]&&d[1]==b[1]){
			cout<<1;
			if(w>2&&v>2||(w<=2&&v<=2)){
				cout<<1;
				if(abs(w-v)==1&&w!=2&&v!=3)cout<<1;
				else cout<<"0";
			}else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}