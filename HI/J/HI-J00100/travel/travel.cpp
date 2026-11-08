#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int p1,p2;
char w1,w2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int len1=s1.size(),len2=s2.size();
	if(c1==c2){
		cout<<"1";
		for(int i=0;i<len1;i++){
			p1=p1*10+(s1[i]-'0');
			if(s1[i+1]>='A'&&s1[i+1]<='F'){
				w1=s1[i+1];
				break;
			}
		}
		for(int i=0;i<len2;i++){
			p2=p2*10+(s2[i]-'0');
			if(s2[i+1]>='A'&&s2[i+1]<='F'){
				w2=s2[i+1];
				break;
			}
		}
		if(p1==p2){
			cout<<"1";
			if((w1>='A'&&w1<='C'&&w2>='A'&&w2<='C')||(w1>='D'&&w1<='F'&&w2>='D'&&w2<='F')){
				cout<<"1";
				if((w1>='A'&&w1<='C'&&w2>='A'&&w2<='C'&&abs(w1-w2)==1)||(w1=='D'&&w2=='F')||(w1=='F'&&w2=='D')){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
