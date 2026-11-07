#include<bits/stdc++.h>
using namespace std;
struct piao{
	string cx,zv;
};
string a="",b="";
int main(){
	freopen("number.in","r","travel.in");
	freopen("number.out","w","travel.out");
	piao r,x;
	cin>>r.cx>>r.zv>>x.cx>>x.zv;
	for(int i=0;i<2;i++){
		a+=r.zv[i];
		b+=x.zv[i];
	}
	char n,m;
	n=r.zv[2];
	m=x.zv[2];
	if(r.cx==x.cx){
		if(r.cx=="01"||r.cx=="16"){
			cout<<"0000";//
		}
		else{
			cout<<"1";//
			if(a==b){
				cout<<"1";
				if(n>'C'&&m<'D'||m>'C'&&n<'D'){
					cout<<"00";
				}
				else{
					cout<<"1";
					if(n-'A'+1==m-'A'||n-'A'-1==m-'A'){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
			}
			else{
				cout<<"000";
			}
		}
	}
	else{
		cout<<"0000";//
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}
