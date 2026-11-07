#include<bits/stdc++.h>
using namespace std;
//666考完我要去钓鱼了吧哈哈哈哈 
int a,b;
int l1,l2;
char w1,w2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a;
	char x='0';
	int s=0;
	while(true){
		cin>>x;
		if(x>='A'&&x<='Z'){
			w1=x;
			break;
		}
		s=s*10+x-'0';
	}
	l1=s;
	x='0';
	s=0;
	cin>>x;
	cin>>b;
	while(true){
		cin>>x;
		if(x>'9'){
			w2=x;
			break;
		}
		s=s*10+x-'0';
	}
	l2=s;
//	cout<<a<<" "<<b<<" "<<l1<<" "<<w1<<" "<<l2<<" "<<w2<<endl;
	if(a!=b){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
		if(l1!=l2){
			cout<<"000";
			return 0;
		}else{
			cout<<1;
			if((w1<='C'&&w2<='C')||(w1>='D'&&w2>='D')){
				cout<<1;
				if(w1<='C'&&w2<='C'&&abs(w1-w2)==1){
					cout<<1;
					return 0;
				}else if(w1>='D'&&w2>='D'){
					cout<<1;
					return 0;
				}else{
					cout<<0;
					return 0;
				}
			}else{
				cout<<"00";
				return 0;
			}
		}
	}
	return 0;
}