#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
	}else{
		cout<<"0";
	}
	int u=0;
	for(int i=0;i<max(b.size(),d.size())-1;i++){
		if(b[i]!=d[i]){
			u=1;
		}
	}
	if(u==0&&a==c){
		cout<<"1";
	}else{
		cout<<"0";
	}
	int f=0;
	if(a==c&&u==0){
		if(('A'<=b[b.size()-1]&&b[b.size()-1]<='C'&&'A'<=d[d.size()-1]&&d[d.size()-1]<='C')||('D'<=b[b.size()-1]&&b[b.size()-1]<='F'&&'D'<=d[d.size()-1]&&d[d.size()-1]<='F')){
			cout<<"1";
			f=1;
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}
	if(a==c&&u==0&&f==1){
		if(abs(b[b.size()-1]-d[d.size()-1])==1){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}
	return 0;
}