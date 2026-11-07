#include<bits/stdc++.h>
using namespace std;
char s1,s2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	int p=s1-'0';
	int q=s2-'0'; 
		if(p-1==q||q-1==p){
			cout<<1;
			}
		else{
			cout<<0<<0<<0;
			return 0;
		}
	for(int i=01;i<18;i++){
		int a,b;
		a=p-i;
		b=q-i;
			if((a<'D'-'0'&&b<'D'-'0')||(a>='D'-'0'&&b>='D'-'0')){
				cout<<1;
			}
			else{
			cout<<0<<0;
			return 0;
		}
		if(a==b+16||b==a+16){
			cout<<1;
			break;
		}
			else{
				cout<<0;
				return 0;
			}
       } 
		return 0;
} 
