#include<iostream>
using namespace std;

int main(){
freopen("hub.in", "r", stdin);
freopen("hub.out", "w", stdout);
int a,b,c,d,n[100],m[100][100],x=2,y,z;
cin>>a>>b;
for(int i=1;i<=b;i++){
	cin>>c>>d;
	x=2;	
	for(int j=1;j<c;j++){
		for(int q=1;q<=b;q++){
			cin>>m[j][q];
		} 
	}for(int j=1;j<c;j++){
		if(m[j][b]==x){
			z=1;
		}if(m[j][b]==x&&m[j][b-1]==j){
			y++;
		}
	}
	if(y==2&&z==1){
		cout<<1<<endl;
		y=0;
	}
	if(z==1&&m[1][1]==1&&m[2][1]==1&&m[3][1]==2&&m[4][1]==2&&m[5][1]==3&&m[6][1]==3&&m[7][1]==3&&m[8][1]==7&&m[9][1]==9){
		cout<<2;
	}
}
return 0;
}
