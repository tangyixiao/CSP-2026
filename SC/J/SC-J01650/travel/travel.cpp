#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	int a,r,k;
	string c1,s1,c2,s2;
	cin>>c1>>a>>s1>>c2>>r>>s2;
	if(c1==c2){
		cout<<1<<" ";
	}else if(c1!=c2){
		cout<<0<<" ";
	}
	if(a==r){
		cout<<1<<" ";
		k=1;
	}else if(a!=r){
		cout<<0<<" ";
		k=0;
	}
	if(k==1){
		if((s1=="F"&&s2=="D")||(s2=="F"&&s1=="D")){
		cout<<1<<" ";
	}else if((s1!="F"&&s1!="D")&&(s2!="F"&&s2!="D")){
		cout<<1<<" "; 
	}else cout<<0<<" ";
	if(s1!="D"&&s1!="F"&&s2!="D"&&s2!="F"){
		if((s1=="A"||s1=="B")&&(s2=="A"||s2=="B")){
			cout<<1;
		}else if((s1=="C"||s1=="B")&&(s2=="C"||s2=="B")){
			cout<<1;
		}else cout<<0;
	}else if(s1=="F"&&s2=="D"||s1=="D"&&s2=="F"){
		cout<<1;
	}else cout<<0;
}
	return 0;
} 