#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	int x,y;
	char p,q;
	int k=1;
	cin>>a>>x>>p>>b>>y>>q;
	if(a==b) {
	    cout<<1;
	    k++;
	}
	else cout<<0;
	if(x==y){
		cout<<1;
		k++; 
	}
	else cout<<0;
	if((p=='A'&&q=='B')||(p=='B'&&q=='A')||(p=='C'&&q=='B')||(p=='B'&&q=='C')||(p=='D'&&q=='F')||(p=='F'&&q=='D')) {
	    cout<<1;
	    k++;
	}
	else if((p=='A'&&q=='C')||(p=='C'&&q=='A')) cout<<1;
	if(k==4) cout<<1;	
	return 0;
}
