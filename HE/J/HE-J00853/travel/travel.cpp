#include<bits/stdc++.h>
using namespace std;
int main(){
	//Trick||Treat!
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,aa,bb;
	cin>>a>>aa>>b>>bb;
	if(a!=b){
		cout<<"0000"<<endl;
		return 0;
	}
	else if(a==b){
		cout<<"1";
		int x=(aa[0]-'0')*10+(aa[1]-'0');
		int y=(bb[0]-'0')*10+(bb[1]-'0');
		if(x!=y){
			cout<<"000"<<endl;
			return 0;
		}
		else if(x==y){
			cout<<"1";
			if((aa[2]>='D'&&bb[2]>='D')||(aa[2]<'D'&&bb[2]<'D')){
				cout<<"1";
				if(abs(aa[2]-bb[2])==1){
					cout<<"1"<<endl;
				}
				else{
					cout<<"0"<<endl;
				}
			}
			else{
				cout<<"00"<<endl;
				return 0;
			}
		}
	}
	return 0;
}
