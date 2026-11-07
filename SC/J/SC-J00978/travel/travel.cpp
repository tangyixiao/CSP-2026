#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int flag1,flag2,flag3,flag4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			flag1=1;
			cout<<0;
			break;
		}
	}
	if(flag1==1){
		cout<<0<<0<<0<<endl;
		return 0;
	}
	else{
		cout<<1;
		for(int i=0;i<2;i++){
			if(s1[i]!=s2[i]){
				flag2=1;
				cout<<0;
				break;
			}
		}
		if(flag2==1){
			cout<<0<<0<<endl;
			return 0;
		}else{
			cout<<1;
			char a=s1[2];
			char b=s2[2];
			if(a>b){
				swap(a,b);
			}
			if(b-a==1){
				if(a=='C'){
					cout<<0<<0;
					return 0;
				}else{
					cout<<11;
					return 0;
				}
			}else{
				if((a>='A' && b<='C') || (a>='D' && b<='E')){
					cout<<10;
					return 0;
				}
			}
		}
	}
}