#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ax,ay,bx,by;
	char az,bz;
//	scanf("%2d %2d%c %2d %2d%c",&ax,&ay,&az,&bx,&by,&bz);
	cin>>ax>>ay>>az>>bx>>by>>bz;
	if(ax==bx){
		printf("1");
	}else{
		printf("0000");
		return 0;
	}
	if(ay==by){
		printf("1");
	}else{
		printf("000");
		return 0;
	}
	if(((az=='D'||az=='F')^(bz=='D'||bz=='F'))==0){
		printf("1");
	}else{
		printf("00");
		return 0;
	}
	if(abs(az-bz)==1){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}
