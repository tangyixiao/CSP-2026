#include<bits/stdc++.h>
using namespace std;
	int a[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cR,sR,cX,sX;
	int cnt=0;
	cin>>cR>>sR>>cX>>sX;
	if(cR==cX)a[0]=1;
	if((a[0]==1)&&(sR[0]==sX[0])&&(sR[1]==sX[1]))a[1]=1;
	if((a[1]==1)&&(a[0]==1)){
		if((sR[2]<=67)&&(sR[2]>=65)&&(sX[2]<=67)&&(sX[2]>=65)){
			a[2]=1;
			cnt=1;		
		}
		if(((sR[2]==70)||(sR[2]==68))&&((sX[2]==70)||(sX[2]==68))){
			a[2]=1;
			cnt=2;
		}
	}
	if((a[0]==1)&&(a[1]==1)&&(a[2]==1)){
		if(cnt==1){
			if((sR[2]+1==sX[2])||(sR[2]-1==sX[2]))a[3]=1;			
		}
		if(cnt==2){
			if((sR[2]+2==sX[2])||(sR[2]-2==sX[2]))a[3]=1;			
		}
	}
	for(int i=0;i<=3;i++)
		cout<<a[i];
	return 0;
}