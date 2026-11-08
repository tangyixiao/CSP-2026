#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c3,c2,c4;
	long long flage=0,p1=0,p2=0,tip=0;
	cin>>c1>>c2>>c3>>c4;
	for(int i=0;i<=1;i++){
		if(c1[i]!=c3[i]){
			cout<<0;
			flage=0;
			break;
		}
		else{
			flage=1;
		}
	}
	if(flage==1){
		cout<<1;
	}
	for(int i=0;i<=1;i++){
		p1=p1*10+c2[i]-48;
		p2=p1*10+c3[i]-48;
	}
	if(p1==p2){
		cout<<1;
	}
	if(p1!=p2){
		cout<<0;
	}
	if(c2[2]=='A'||'B'||'C' && c4[2]=='A'||'B'||'C'){
		cout<<1;
	}
	else if(c2[2]=='D'||'E' && c4[2]=='D'||'E'){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(int(c2[2])-int(c4[2])==1||-1){
		tip+=1;
	}
	if((c2[2]!='D' && c4[2]!='C') && (c2[2]!='C' && c4[2]!='D') && tip==1){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
}
