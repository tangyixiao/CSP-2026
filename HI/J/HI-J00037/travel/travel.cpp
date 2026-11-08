#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>s1>>s2>>c1>>c2;
	if(s1==c1){
		cout<<1;
		if(s2[0]==c2[0]&&s2[1]==c2[1]){
			cout<<1;
			char x=s2[2],y=c2[2];
			if((x>='D'&&y>='D')||('C'>=x&&'C'>=y)){
				cout<<1; 
				if(x>='D'&&y>='D'){
					if(x>y) swap(x,y);
					if(char(x+1)==y){
						cout<<1; 
					}
					else{
						cout<<"0\n";
						return 0; 
					}
				}
				if('C'>=x&&'C'>=y){
					if(x>y) swap(x,y);
					if(char(x+1)==y){
						cout<<1;
					}
					else{
						cout<<"0\n";
						return 0;
					}
				}
			} 
			else{
				cout<<"00\n";
				return 0; 
			} 
			
		}
		else{
			cout<<"000\n";
			return 0; 
		} 
	} 
	else{
		cout<<"0000\n";
		return 0;
	}
	cout<<"\n"; 
	return 0;
}
 
