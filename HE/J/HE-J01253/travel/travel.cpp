#include<bits/stdc++.h>
using namespace std;
int c_c,x_c;
int c_h,x_h;
char c_s,x_s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c_c>>c_h>>c_s;
	cin>>x_c>>x_h>>x_s;
	int a=c_s-'A'+1;
	int b=x_s-'A'+1;
	if(c_c==x_c){
		cout<<1;
		if(c_h==x_h){
			cout<<1;
			if((a<=3)&&(b<=3)){
				cout<<1;
				if( (  (a-b)==1  )||(  (b-a)==1  ) ){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if((a>3)&&(b>3)){
				cout<<1;
				if( ( (a-b)==1  )||(  (b-a)==1  ) ){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0;
				cout<<0;
			}
		}else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}
