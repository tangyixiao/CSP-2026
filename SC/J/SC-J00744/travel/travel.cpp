#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out","w", stdout);
	cin>>c1>>s1>>c2>>s2;
	int i=s1[3],l=s2[3];
	int x='D',y='F',e='A',f='B',g='c';
	int cnt=0;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<=1;i++){
		if(s1[i]==s2[i]){
			cnt++;
		}else{break;
		}
	}
	if(cnt==2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(i==x||i==y){
	   a=1;
	}else{
		a=-1;
	}
	if(l==x||l==y){
	   b=1;
	}else{
		b=-1;
	}
	if(a==b&&l!=i){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	
	if(i+1==l&&i!=g){
		cout<<1;
		
	}else if(i-1==l&&i!=x){
		cout<<1;
		
	}else{
		cout<<0;
	}
     
	return 0;
} 