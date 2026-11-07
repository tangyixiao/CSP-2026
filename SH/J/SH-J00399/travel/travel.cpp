#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int lo1,lo2;
	string x1,x2;
	cin>>lo1>>x1>>lo2>>x2;
	int st1=(x1[0]-'0')*10+(x1[1]-'0'),st2=(x2[0]-'0')*10+(x2[1]-'0');
	int u1=x1[2]-'A'+1,u2=x2[2]-'A'+1;
	if(u1==6) u1--;
	if(u2==6) u2--;
	cout<<(lo1==lo2?1:0);
	cout<<(lo1==lo2&&st1==st2?1:0);
	cout<<(lo1==lo2&&st1==st2&&((u1<=3&&u2<=3)||(u1>=4&&u2>=4))?1:0);
	cout<<(lo1==lo2&&st1==st2&&((u1<=3&&u2<=3)||(u1>=4&&u2>=4))&&(u1-u2==1||u2-u1==1)?1:0);
	return 0;
}
