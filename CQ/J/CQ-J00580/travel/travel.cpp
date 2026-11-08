#include<bits/stdc++.h>
using namespace std;
int c1,pai1,zuo1,c2,pai2,zuo2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	pai1=(s1[1]-'0')+(s1[0]-'0')*10,zuo1=(s1[2]-'A')+1;
	pai2=(s2[1]-'0')+(s2[0]-'0')*10,zuo2=(s2[2]-'A')+1;
	if(zuo1==6)zuo1--;
	if(zuo2==6)zuo2--;
//	cout<<c1<<' '<<pai1<<' '<<zuo1<<' '<<c2<<' '<<pai2<<' '<<zuo2;
	if(c1==c2){
		cout<<1;
		if(pai1==pai2){
			cout<<1;
			if(((zuo1<=3)==(zuo2<=3))){
				cout<<1;
				if((abs(zuo1-zuo2)==1)){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
    return 0;
    
}
/*  
    This file is encoded by UTF-8
    我想上奇葩行为大赏
	fropen feopen fraopen freepen
	//freopen
	洛谷号：rjomboh3125 (凯撒后移一位的结果，数字也移了)
	c1c2车厢 pai1pai2排 zuo1zuo2座(A1B2C3D4F5)
	1.c1==c2
	2.1&&pai1==pai2;
	3.2&&((zuo1<=3)==(zuo2<=3))
	4.3&&(abs(zuo1-zuo2)==1)
*/