#include<bits/stdc++.h>
using namespace std;
string ca,cb,sa,sb;
int a=1,b=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ca>>sa>>cb>>sb;
	bool t=true;
	for(int i=0;i<max(ca.size(),cb.size());i++){
		if(ca[i]!=cb[i]){
			t=false;
		}
	}
	if(t){
		cout<<1;
		if(sa[0]==sb[0]&&sa[1]==sb[1]){
			cout<<1;
		}else{
			t=false;
			cout<<0;
		}
		if(t){
			if(sa[2]<='C'){
				a=0;
			}
			if(sb[2]<='C'){
				b=0;
			}
			if(a==b){
				cout<<1;
				if(a>0&&b>0){
					cout<<1;
				}else if(max(sa[2],sb[2])-min(sa[2],sb[2])==1){
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
			}
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	t=true;
	fclose(stdin);
	fclose(stdout);
	return 0;
}