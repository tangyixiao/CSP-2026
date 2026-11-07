#include<bits/stdc++.h>
using namespace std;
char x1[2],w1[3],x2[2],w2[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x1>>w1>>x2>>w2;
	
	if(x1[0]==x2[0] && x1[1]==x2[1]){
		cout<<1;
		if(w1[0]==w2[0] && w1[1]==w2[1]){
			cout<<1;
			if(('A'<=w1[2]&&w1[2]<='C' && 'A'<=w2[2]&&w2[2]<='C')||(('D'==w2[2]||w2[2]=='F') && ('D'==w1[2]||w1[2]=='F'))){
				cout<<1;
				if(abs(w1[2]-w2[2])==1 || (abs(w1[2]-w2[2])==2 && (w1[2]=='D' || w1[2]=='F'))){
					cout<<1;
				}else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	
	return 0;
} 