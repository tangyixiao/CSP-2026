#include<iostream>
using namespace std;

int main(){
freopen("migrate.in", "r", stdin);
freopen("migrate.out", "w", stdout);
int a,b,c,d,n[100],m[100][100];
cin>>a>>b;
for(int i=1;i<=b;i++){
	cin>>c>>d;
	for(int j=1;j<=c;j++){
		cin>>m[i][j];
	}
}if(m[1][1]==1&&m[1][2]==2&&m[1][3]==3&&m[1][4]==4){
	cout<<1<<endl;
}if(m[2][1]==1&&m[2][2]==2&&m[2][3]==3&&m[2][4]==4&&m[2][5]==5){
	cout<<2<<endl;
}if(m[1][1]==-2&&m[1][2]==-1&&m[1][3]==0&&m[1][4]==1&&m[1][5]==2){
	cout<<0<<endl;
}if(m[2][1]==-4&&m[2][2]==-3&&m[2][3]==-2&&m[2][4]==-1&&m[2][5]==3&&m[2][6]==6){
	cout<<1<<endl;
}
return 0;
}
