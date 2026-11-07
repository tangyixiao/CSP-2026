#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;
	int a1,b1;
	cin>>a1>>a>>b1>>b;
	if(a[2] == 'F')a[2] = 'E';
	if(b[2] == 'F')b[2] = 'E';
	bool c1  = 0,c2 = 0,c3 = 0,c4;
	if(a1 == b1)c1 = 1;
	if(a.substr(0,2)==b.substr(0,2)&&c1)c2 = 1;
	if(c2&&((a[2] == 'A'&&(b[2] == 'B'||b[2] == 'C'))||(a[2] == 'B'&&b[2] == 'A'||b[2] == 'C')||(a[2] == 'C'&&b[2] == 'B'||b[2] == 'A')||(a[2] == 'D'&&b[2] == 'E')||(a[2] == 'E'&&b[2] == 'D'))){
		c3 = 1;
		if(a>b){
			string tmp = a;
			a = b;
			b = tmp;
		}
	}
	if(c3&&a[2]+1 == b[2])c4 = 1;
	cout<<c1<<c2<<c3<<c4;
	fclose(stdin);
	fclose(stdout);
	return 0 ;
}
