#include<bits/stdc++.h>
using namespace std;
string r,r1,x,x1;
int sum,cnt;
char a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r>>r1>>x>>x1;
	if(r==x) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<=r1.size()-1;i++){
		if(r1[i]>='0'&&r1[i]<='9'){
			sum+=r1[i]-'0';
		}else{
			a=r1[i];
		}
	}
	for(int i=0;i<=x1.size()-1;i++){
		if(x1[i]>='0'&&x1[i]<='9'){
			cnt+=x1[i]-'0';
		}else{
			b=x1[i];
		}
	}
	if(sum==cnt){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((a<='C'&&b<='C')||(a>='D'&&b>='D')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(a<'D'&&b<'D'){
		if(a+1==b||a-1==b){
		cout<<"1";
	}else{
		cout<<"0";
	}
	}else{
		if((a=='F'&&b=='D')||(a=='D'&&b=='F')){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	
	return 0;
}
