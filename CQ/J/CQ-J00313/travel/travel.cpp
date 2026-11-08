#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<'1';
		string idxa;
		string idxb;
		char m;
		char n;
		int len=b.size();
		for(int i=0;i<len;i++){
			if(b[i]>='0' && b[i]<='9'){
				idxa.push_back(b[i]);
			}else{
				m=b[i];
			}
		}
		int l=d.size();
		for(int i=0;i<l;i++){
			if(d[i]>='0' && d[i]<='9'){
				idxb.push_back(d[i]);
			}else{
				n=d[i];
			}
		}
		if(idxa==idxb){
			cout<<'1';
			if(m>='A' && m<='C'){
				if(n>='A' && n<='C'){
					cout<<'1';
				}else{
					cout<<"00";
					return 0;
				}
			}else{
				if(n=='D' || n=='F'){
					cout<<'1';
				}else{
					cout<<"00";
					return 0;
				}
			}
			int j=(int)m;
			int g=(int)n;
			if(abs(j-g)==1 || (m=='D'&&n=='F')||(m=='F'&&n=='D')){
				cout<<'1';
			}else{
				cout<<'0';
			}
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
} 
