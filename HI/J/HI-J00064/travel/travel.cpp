#include<bits/stdc++.h>
using namespace std;
int chexiang=0;//判断是否在同一节车厢 ，第一个输出
int xianglin=0;//判断座位是否相邻，第四个输出
int tongpai=0;//判断座位是否同排，第二个输出
int tptl=0;//判断座位是否是同排同侧，第三个输出 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1;//  一个人的车厢号，座位 
	string c2,s2;//另一个人的车厢号，座位 
	cin>>c1>>s1;
	cin>>c2>>s2;
	if(c1==c2){//同一节车厢 
		chexiang=1;
		if((s1[0]-'0')*10+(s1[1])==(s2[0]-'0')*10+(s2[1])){//排数相同 
			tongpai=1; 
			if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){//不在一侧 
				if(s2[2]=='D'||s2[2]=='F'){
					tptl=0;
					xianglin=0;
				} 
				else{
					tptl=1;
					if(abs(s1[2]-s2[2])==1){
						xianglin=1;
					}
				}
			}
			else{
				if(s2[2]!='D'&&s2[2]!='F'){//不在一侧 
					tptl=0;
					xianglin=0;
				} 
				else{
					tptl=1;
					if(abs(s1[2]-s2[2])==1){
						xianglin=1;
					}
				}
			}
		}
	}
	cout<<chexiang<<tongpai<<tptl<<xianglin;
	return 0;
}
