#include<bits/stdc++.h>
using namespace std;
string a;
string a1;
string aa;
string a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>aa>>a2;
	int x,y;
	x=(a[0]-'0')*10+a[1];
	y=(aa[0]-'0')*10+aa[1];
	if(x==y){
		cout<<1;
		int x1=(a1[0]-'0')*10+a1[1];	
		int y1= (a2[0]-'0')*10+a2[1];
		if(x1==y1){
			cout<<1;
			if((a1[2]<'D'&&a2[2]<'D')||(a1[2]>='D'&&a2[2]>='D')){
				cout<<1;				
					if(abs(a1[2]-a2[2])==1){
						cout<<1;
					}else{
						cout<<0;
					}					
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	} 
	
	return 0;
} 
