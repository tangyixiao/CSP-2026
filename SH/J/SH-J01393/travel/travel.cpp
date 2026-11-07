#include<bits/stdc++.h>
using namespace std;
int a,b;
string q,w;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>q>>b>>w;
	if(a!=b){
		cout<<0<<0<<0<<0;
	}
	else{
		if(q[0]==w[0]&&q[1]==w[1]){
			if((q[2]>='A'&&q[2]<='C')&&(w[2]>='A'&&w[2]<='C')){
				if(int(q[2])-int(w[2])==1||int(w[2])-int(q[2])==1)
					cout<<1<<1<<1<<1;
				else 
					cout<<1<<1<<1<<0;
			}
			else if((q[2]>='D'&&q[2]<='E')&&(w[2]>='D'&&w[2]<='E'))
				cout<<1<<1<<1<<1;
			else
				cout<<1<<1<<0<<0;
		}
		else{
			cout<<1<<0<<0<<0;
		}
	}
	return 0;
}
