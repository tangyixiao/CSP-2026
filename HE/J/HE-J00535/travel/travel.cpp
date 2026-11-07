#include<bits/stdc++.h>
using namespace std;
int a[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int l=c1.size();
	for(int i=1;i<=l;i++){
		if(c1[i]==c2[i]){
			a[1]++;
		}
	}
	int l1=s1.size();
	for(int i=0;i<l1-1;i++){
		if(s1[i]==s2[i]){
			a[2]++;
		}
	}
	if(a[1]<2){
		cout<<0<<0<<0<<0;
		return 0;
	}
	else if(a[2]<2){
		
	}
	else if((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C')||(s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')){
		a[3]++;
	}
	if((s1[2]>='A'&&s1[2]<='C')&&a[3]>=1){
		if(s1[2]=='B'||s2[2]=='B'){
			a[4]++;
		}
	}
	else if(s1[2]=='D'||s1[2]=='F'){
		if(s2[2]=='D'||s2[2]=='F'){
			a[4]++;
		}
	}
	for(int i=1;i<=2;i++){
		if(a[i]>=2){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	cout<<a[3];
	cout<<a[4];
	fclose(stdin);
	fclose(stdout);
	return 0;
}

