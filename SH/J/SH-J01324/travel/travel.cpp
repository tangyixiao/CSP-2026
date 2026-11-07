#include<bits/stdc++.h>
using namespace std;
int ca,cb,x,y,flag,f;
char sa[3],sb[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ca>>sa[1]>>sa[2]>>sa[3]>>cb>>sb[1]>>sb[2]>>sb[3];
	f = ca==cb;
	if(ca==cb) cout << 1 ;
	else cout << 0;
	flag=(sa[1]-'0')*10+(sa[2]-'0')==(sb[1]-'0')*10+(sb[2]-'0');
	if(flag&&f) cout << 1;
	else cout << 0;
	x=sa[3]-'A'+1;
	y=sb[3]-'A'+1;
	if (((x<4&&y<4)||(x>3&&y>4))&&flag&&f) cout << 1;
	else cout << 0 ; 
	if (x<y) swap(x,y);
	if(x-y==1) cout << 1;
	else cout << 0 ; 
	return 0;
}
