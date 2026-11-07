#include<bits/stdc++.h>
using namespace std;
string Rx,Rs,Cx,Cs;
bool f=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%d%d%d",&Rx,&Rs,&Cx,&Cs);
	//是否在一个车厢 
	if(Rx.size()!=Cx.size()){
		printf("0");
	}
	else {
		for(int i=0;i<Rx.size();i++){
			if(Rx[i]!=Cx[i]){
		        printf("0000");
				return 0;
			}
		}
		printf("1");
	}
	//是否在同一排 
	bool f1=false; 
	for(int i=0;i<Rs.size()-1;i++){
	    if(Rs[i]!=Cs[i]){
		    printf("000");
			return 0;
		}
	}
	printf("1");
	//是否在同一侧
	if(Rs[Rs.size()-1]<='C'&&Rs[Rs.size()-1]>='A'&&Cs[Cs.size()-1]>='A'&&Cs[Cs.size()-1]<='C'){
	    printf("1");
	}
	else if((Rs[Rs.size()-1]=='D'||Rs[Rs.size()-1]=='F')&&(Cs[Cs.size()-1]=='D'||Cs[Cs.size()-1]=='F')){
	    printf("1");
	}
	else {
	    printf("00");
		return 0;
	}
	//是否相邻 
	if((Rs[Rs.size()-1]=='D'&&Cs[Cs.size()-1]=='C')||(Rs[Rs.size()-1]=='C'&&Cs[Cs.size()-1]=='D')){
	    printf("0");
	}
	else if((int(Rs[Rs.size()-1])==int(Cs[Cs.size()-1])+1)||(int(Rs[Rs.size()-1])+1==int(Cs[Cs.size()-1]))){
	    printf("1");
	}
	else{
	    printf("0");
	}
	return 0;
}