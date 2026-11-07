#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	int ta=int(a[0]-'0')*10+int(a[1]-'0');
	int tc=int(c[0]-'0')*10+int(c[1]-'0');
	if(ta==tc){
		cout<<1;
		int tb=int(b[0]-'0')*10+int(b[1]-'0');
		int td=int(d[0]-'0')*10+int(d[1]-'0');
		if(tb==td){
			cout<<1;
			int fd,fb;
			if(b[2]=='A'||b[2]=='B'||b[2]=='C')fb=0;
			else fb=1;
			if(d[2]=='A'||d[2]=='B'||d[2]=='C')fd=0;
			else fd=1;
			if(fb==fd){
				cout<<1;
				int bb,dd;
				bb=int(b[2]-'A'+1);
				dd=int(d[2]-'A'+1);
				if((dd-bb==1)||(bb-dd==1)){
					if(b[2]=='C'&&d[2]=='D'){
						cout<<"0";
						return 0;
					}
					if(b[2]=='D'&&d[2]=='C'){
						cout<<"0";
						return 0;
					}
					cout<<1;
				}
				else if((dd==4&&bb==6)||(dd==6||bb==4))cout<<1;
				else{
					cout<<"0";
					return 0;
				}
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}

	return 0;
}
