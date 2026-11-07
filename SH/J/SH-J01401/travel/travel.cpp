#include <iostream>
using namespace std;
char a[4],b[4],c[4],d[4];
int id[3],line[3],pos[3];

int abs1(int a,int b){
	if(a>b)return a-b;
	return b-a;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	id[0]=10*(a[0]-'0')+(a[1]-'0');
	id[1]=10*(c[0]-'0')+(c[1]-'0');
	line[0]=10*(b[0]-'0')+(b[1]-'0');
	line[1]=10*(d[0]-'0')+(d[1]-'0');
	pos[0]=2*(b[2]-'A')-5;
	pos[1]=2*(d[2]-'A')-5;
	cout << 0+(id[0]==id[1]);
	cout << 0+(id[0]==id[1]&&line[0]==line[1]);
	cout << 0+(id[0]==id[1]&&line[0]==line[1]&&pos[0]*pos[1]>0);
	cout << 0+(id[0]==id[1]&&line[0]==line[1]&&pos[0]*pos[1]>0&&(pos[0]>0||abs1(pos[0],pos[1])==2));
	return 0;
}
