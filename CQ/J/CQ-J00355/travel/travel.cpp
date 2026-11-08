#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"000";
		return 0;
	}
	cout<<1;
	char w1=s1[2],w2=s2[2];
	if((w1<'D')^(w2<'D')){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(w1>w2){
		swap(w1,w2);
	}
	if(w1=='E'&&w2=='F'){
		cout<<1;
		return 0;
	}
	if(w1=='A'&&w2=='B'){
		cout<<1;
		return 0;
	}
	if(w1=='B'&&w2=='C'){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
}
