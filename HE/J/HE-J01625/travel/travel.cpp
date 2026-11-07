#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
struct st{
	int cx;
	string zw;
};
st R,X;
int answer;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>R.cx>>R.zw>>X.cx>>X.zw;
	if(R.cx==X.cx){
		answer+=1000;
		if((R.zw[0]==X.zw[0])&&(R.zw[1]==X.zw[1])){
			answer+=100;
			if(((R.zw[2]<'D')&&(X.zw[2]<'D'))||((R.zw[2]>'C')&&(X.zw[2]>'C'))){
				answer+=10;
				if((R.zw[2]-X.zw[2]==1)||(R.zw[2]-X.zw[2]==-1)||((R.zw[2]=='D')&&(X.zw[2]=='F'))||((R.zw[2]=='F')&&(X.zw[2]=='D'))){
					answer+=1;
				}
			}
		}
	}
	if(answer!=0){
		cout<<answer;
		return 0;
	}
	cout<<"0000";
	return 0;
}
