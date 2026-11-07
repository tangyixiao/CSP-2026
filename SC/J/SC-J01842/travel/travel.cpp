#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool f(){
	if (b[2]=='F'){
		if (d[2]!='D'){
			return 0;
		}
	}
	if (b[2]=='D'){
		if (d[2]!='F'){
			return 0;
		}
	}
	if (b[2]=='C'){
		if (d[2]=='F' || d[2]=='D'){
			return 0;
		}
	}
	if (b[2]=='B'){
		if (d[2]=='F' || d[2]=='D'){
			return 0;
		}
	}
	if (b[2]=='A'){
		if (d[2]=='F' || d[2]=='D'){
			return 0;
		}
	}
	return 1;
}
bool f2(){
	if (b[2]=='F'){
		if (d[2]=='D'){
			return 1;
		}
	}
	if (b[2]=='D'){
		if (d[2]=='F'){
			return 1;
		}
	}
	if (b[2]=='C'){
		if (d[2]=='B'){
			return 1;
		}
	}
	if (b[2]=='B'){
		if (d[2]=='C' || d[2]=='A'){
			return 1;
		}
	}
	if (b[2]=='A'){
		if (d[2]=='B'){
			return 1;
		}
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	(a==c)?cout<<1:cout<<0;
	(b[0]==d[0]&&b[1]==d[1]&&a==c)?cout<<1:cout<<0;
	(b[0]==d[0]&&b[1]==d[1]&&f()&&a==c)?cout<<1:cout<<0;
	(b[0]==d[0]&&b[1]==d[1]&&f2()&&a==c)?cout<<1:cout<<0;
	return 0;
}