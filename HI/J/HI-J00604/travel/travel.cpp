#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cc1,cc2,ss1,ss2;
	cin>>cc1>>ss1>>cc2>>ss2;
	if(cc1==cc2){
		printf("1");
		int f=1;
		for(int i=0;i<2;i++){
			if(ss1[i]!=ss2[i])f=0;
		}if(f){
			printf("1");
			if((ss1[2]<'D'&&ss2[2]<'D')||(ss1[2]>'C'&&ss2[2]>'C')){
				printf("1");
				if(ss1[2]-ss2[2]>1||ss2[2]-ss1[2]>1)cout<<"0\n";
				else printf("1\n");
			}else printf("00\n");
		}else printf("000\n");
	}else printf("0000\n");
	
	return 0;
	
}
