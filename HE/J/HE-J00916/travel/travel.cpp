#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int f;
int main(){
	freopen("r","travel.in",stdin);
	freopen("w","travel.out",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			cout<<0<<0<<0<<0;
			return 0;
		}
	}
	cout<<1;
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			cout<<0<<0<<0;
			f=1;
			return 0;
		}
	}
	if(f==0){
		cout<<1;
		f=0;
		if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'||s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'){
			cout<<1;
			if(s1[2]-s2[2]==1||s1[2]-s2[2]==-1)cout<<1;
			else cout<<0;
		}
		else cout<<0<<0;
	}
	return 0;
}
