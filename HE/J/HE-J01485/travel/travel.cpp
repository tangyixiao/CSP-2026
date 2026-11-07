#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	if((s1[0]==s2[0])&&(s1[1]==s2[1])&&(s1[2]!=s2[2])){
		cout<<1;
	}else{
		cout<<0;
	}
	int sum=(int)s1[2];
	int sum1=(int)s2[2];
	if(sum==sum1||s1[1]!=s2[1]){
		cout<<0; 
	}else{
		if((sum==65&&sum1==66)||(sum==65&&sum1==67)||(sum==66&&sum1==67)||(sum==68&&sum1==70)||(sum==66&&sum1==65)||(sum==67&&sum1==65)||(sum==67&&sum1==66)||(sum==70&&sum1==68)){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	if(s1[1]==s2[1]){
		if((sum==65&&sum1==66)||(sum==66&&sum1==67)||(sum==68&&sum1==70)||(sum==70&&sum1==68)||(sum==66&&sum1==65)||(sum==67&&sum1==66)){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
