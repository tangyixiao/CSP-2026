#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	char width1,width11,width2,width22,seat1,seat2;
	cin>>c1>>width1>>width11>>seat1>>c2>>width2>>width22>>seat2;
    int intwidth1=(width1-'0')*10+(width11-'0');
    int intwidth2=(width2-'0')*10+(width22-'0');
    int flag=c1==c2?1:0;
	cout<<flag;
	int flag1=flag*(intwidth1==intwidth2?1:0);
	cout<<flag1;
	int flag2=flag1*(((seat1=='A'||seat1=='B'||seat1=='C')&&(seat2=='A'||seat2=='B'||seat2=='C'))||((seat1=='D'||seat1=='F')&&(seat2=='D'||seat2=='F'))?1:0);
	cout<<flag2;
	cout<<flag2*((flag==1&&(seat1==seat2+1||seat1==seat2-1))?1:0);
	return 0;	
}
