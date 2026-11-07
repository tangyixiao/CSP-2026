#include<bits/stdc++.h>
using namespace std;
string c1;
string c2;
string s1;
string s2;
int a[10];
int main(){
	freopen(card.in,"r",stdin);
	freopen(card.out,"w",stdout);
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	int m=abs(s1[2]-s2[2]);
	int p=s1[2]-'A'+1;
	int q=s2[2]-'A'+1;
	if(c1[0]==c2[0] && c1[1]==c2[1]){
		a[1]=1;
		if(s1[0]==s2[0] && s1[1]==s2[1]){
		    a[2]=1;
		    if(m<=2 && ((max(p,q)<=3) || (min(p,q)>=4))){
				a[3]=1;
				if(m==1 && (max(p,q)!=4) && (min(p,q)!=3)){
		            a[4]=1;
	            }
			}
	    }
	}
	for(int i=1;i<=4;i++){
		cout<<a[i];
	}
	return 0;
}
