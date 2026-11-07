#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);//打开输入文件
	freopen("travel.out","w",stdout);//打开输出文件
	
	ios::sync_with_stdio(0);//快读快写
	cin.tie(0);
	cout.tie(0);
	string ca,cb,cc,cd;
	cin>>ca>>cb>>cc>>cd;
	bool flag=1;
	int a=ca.size();
	int b=cb.size();
	int c=cc.size();
	int d=cd.size();
	for(int i=0;i<max(a,c);i++){
		if(ca[i]!=cc[i]){
			cout<<0;
			flag=0;
			break;
		}
	}
	if(flag==1){
		cout<<1;
	}
	if(flag==0){
		cout<<0;
	}else{
		for(int i=0;i<max(b-1,d-1);i++){
			if(cb[i]!=cd[i]){
				cout<<0;
				flag=0;
			}
		}
		if(flag==1){
			cout<<1;
		}
	}
	if(flag==0){
		cout<<0;
	}else if(cb[b-1]=='A'&&(cd[d-1]=='B'||cd[d-1]=='C')){
		cout<<1;
	}else if(cb[b-1]=='B'&&(cd[d-1]=='A'||cd[d-1]=='C')){
		cout<<1;
	}else if(cb[b-1]=='C'&&(cd[d-1]=='A'||cd[d-1]=='B')){
		cout<<1;
	}else if(cb[b-1]=='D'&&cd[d-1]=='F'){
		cout<<1;
	}else if(cb[b-1]=='F'&&cd[d-1]=='D'){
		cout<<1;
	}else{
		cout<<0;
		flag=0;
	}
	if(flag==0){
		cout<<0;
	}else{
		if(cb[b-1]==cd[d-1]+1||cb[b-1]==cd[d-1]-1){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	return 0;
}