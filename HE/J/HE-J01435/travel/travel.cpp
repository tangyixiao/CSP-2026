#include<iostream>
using namespace std;
char x[10],x2[10],y[10],y2[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>x2>>y>>y2;
	cout<<(x[0]==y[0]&&x[1]==y[1])<<((x[0]==y[0]&&x[1]==y[1])&&(x2[0]==y2[0]&&x2[1]==y2[1]))<<((x[0]==y[0]&&x[1]==y[1])&&(x2[0]==y2[0]&&x2[1]==y2[1])&&((x2[2]>'C'&&y2[2]>'C')||(x2[2]<='C'&&y2[2]<='C')))<<((x[0]==y[0]&&x[1]==y[1])&&(x2[0]==y2[0]&&x2[1]==y2[1])&&((x2[2]>'C'&&y2[2]>'C')||(x2[2]<='C'&&y2[2]<='C'))&&((x2[2]=='D'&&y2[2]=='F')||(x2[2]=='F'&&y2[2]=='D')||(x2[2]-y2[2]==1)||(x2[2]-y2[2]==-1)));
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
