#include<bits/stdc++.h> 
using namespace std;
char a[101],b[101],c[101],d[101];
int m,n;
int main(void){
	int is_j=1,is_p=1,is_c=0,is_l=0;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>m>>n>>c>>d;
		if(m!=n)
			is_j=0;
	if((b[0]!=d[0]||b[1]!=d[1])||is_j==0)
		is_p=0;
	if(('C'>=b[2]&&b[2]>='A'&&'F'>=d[2]&&d[2]>='D')&&is_p==1)
		is_c=1;
	 else if('F'>=b[2]&&b[2]>='D'&&'C'>=d[2]&&d[2]>='A')
		is_c=1;
	if((is_c=1&&(b[2]-d[2]==1||b[2]-d[2]==-1))||(b[2]=='D'&&d[2]=='F')||(b[2]=='F'&&d[2]=='D'))
		is_l=1;
		cout<<is_j<<is_p<<is_c<<is_l;
	fclose(stdin);
	fclose(stdout);
	return 0;
}		
