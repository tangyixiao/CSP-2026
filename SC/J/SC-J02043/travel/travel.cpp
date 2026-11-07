#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
typedef long long ll;
using namespace std;
string a,b,c,d;
bool get(char bs,char ds){
	if(bs<='C'&&ds<='C')return true;
	if(bs>='D'&&ds>='D')return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>a>>b>>c>>d;
	char bs=b.back(),ds=d.back();
	b.pop_back(),d.pop_back();
	if(a==c){
		if(b==d){
			if(get(bs,ds)){
				if(abs(bs-ds)==1)cout<<"1111"<<endl;
				else cout<<"1110"<<endl;
			}else cout<<"1100"<<endl;
		}else cout<<"1000"<<endl;
	}else cout<<"0000"<<endl;
	return 0;
}