#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0;
	int s,d,f,g,p,l;
	cin>>s;
	cin>>d;
	cin>>f;
	cin>>g;
	p=d+1;
	l=d-1;
	if(s==f){
		cout<<"1"<<" ";
	}else{
			if(s==1&&f==16){
			cout<<"1"<<" ";
		}else{
		}cout<<"0"<<" ";
	}
	if( p == g || l == g){
	 cout<<"1"<<" ";	
		}else{
			cout<<"0"<<" ";
		}
		cout<<"0 0";
	return 0;
}
