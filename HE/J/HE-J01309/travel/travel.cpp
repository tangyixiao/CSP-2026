#include<iostream>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d,e,f,i,j;
	int g[20]={0},g1[20]={0};
	string x,y;
	cin>>a>>x>>b>>y;
	if(a==b)cout<<1;else {
		cout<<"0000";
		fclose(stdin);
	fclose(stdout);
	return 0;
	}
	if(x[0]==y[0]&&x[1]==y[1])cout<<1;else {
		cout<<"000";
		fclose(stdin);
	fclose(stdout);
	return 0;
	}
	if((x[2]>='A'&&x[2]<='C'&&y[2]>='A'&&y[2]<='C')||(x[2]>='D'&&x[2]<='E'&&y[2]>='D'&&y[2]<='E')){
		cout<<1;
		if(x[2]-y[2]==1||x[2]-y[2]==-1)cout<<1;else cout<<0;
	}else cout<<0<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
