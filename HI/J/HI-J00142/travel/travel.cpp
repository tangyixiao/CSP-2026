#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int b1=(b[0]-'0')*10+(b[1]-'0');
	int d1=(d[0]-'0')*10+(d[1]-'0');
	int b2=b[2]-'A'+1;
	int d2=d[2]-'A'+1;
	int maxx=max(b2,d2);
	int minn=min(b2,d2);
	if(a==c){
		cout<<1;
		if(b1==d1){
			cout<<1;
			if((b2<=3&&d2<=3)||(b2>=4&&d2>=4)){
				cout<<1;
				if(maxx-minn==1&&maxx!=4) cout<<1;
				else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
