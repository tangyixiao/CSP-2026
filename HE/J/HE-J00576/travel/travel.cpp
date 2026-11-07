#include<bits/stdc++.h>
using namespace std;
bool h[100];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
 	string a,b,c,d;
 	cin>>a>>b>>c>>d;
 	if(a==c){
 		h[1]=1;
	string ans2A,ans2B;
	ans2A.push_back(b[0]);
	ans2A.push_back(b[1]);
	ans2B.push_back(d[0]);
	ans2B.push_back(d[1]);
	if(ans2A==ans2B){
		h[2]=1;
		char a=b[2],b=d[2];
		if(a>b)swap(a,b);
		if((a>='A'&&a<='C')&&(b=='D'||b=='F')){
			h[3]=0;
		}else{
			h[3]=1;
			if(abs(a-b)==1){
				h[4]=1;
			}
		}
	}}
	for(int i=1;i<=4;i++){
		cout<<h[i];
	}
 	return 0;
 }
