#include<bits/stdc++.h>
using namespace std;
using s=string;
using ll=long long;
s X,R;
ll RR,XX;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>RR>>R>>XX>>X;
	int tr=(R[0]-'0')*10+(R[1]-'0');
	char r=R[2];
	int tx=(X[0]-'0')*10+(X[1]-'0');
	char x=X[2]; 
	//cout<<tr<<" "<<R<<" "<<tx<<" "<<X; 
	if(RR==XX){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(tr==tx){
		cout<<1;
	}else{
		cout<<0;
	}
	if(((r<='C'&&r>='A'&&x<='C'&&x>='A')||(r<='F'&&r>='D'&&x<='F'&&x>='D'))&&tr==tx){
		cout<<1;
	}else{
		cout<<0;
	}
	if(abs(tr-tx)<=1&&x==r){
		cout<<1;
	}else{
		cout<<0;
	}
	
	return 0;
} 
