#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
int f1,f2;
int a[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;	
	if(c1[0]==c3[0]&&c1[1]==c3[1]){
		a[1]=1;
		if(c2[0]==c4[0]&&c2[1]==c4[1]){
			a[2]=1;
			if(c2[2]=='A'||c2[2]=='B'||c2[2]=='C')
				f1=1;
			else
				f1=2;
			if(c4[2]=='A'||c4[2]=='B'||c4[2]=='C')
				f2=1;
			else
				f2=2;
			if(f1==f2){
				a[3]=1;
				if((abs(c2[2]-c4[2])==1)&&(c2[2]!='D'&&c4[2]!='E')&&(c4[2]!='D'&&c2[2]!='E'))
					a[4]=1;
			}	
		}
	}
	printf("%d%d%d%d",a[1],a[2],a[3],a[4]);
	return 0;
}