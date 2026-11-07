#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int check[200][200];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	} 
	else cout<<1;
	string c1=s2,c2=s4;
	c1.erase(2,1);
	c2.erase(2,1);
	if(c1!=c2){
		cout<<"000";
		return 0;
	}
	else cout<<1;
	check['A'-1+1]['B'-1+1]=2;
	check['A'-1+1]['C'-1+1]=1;
	check['B'-1+1]['A'-1+1]=2;
	check['B'-1+1]['C'-1+1]=2;
	check['C'-1+1]['A'-1+1]=1;
	check['C'-1+1]['B'-1+1]=2;
	check['D'-1+1]['F'-1+1]=2;
	check['F'-1+1]['D'-1+1]=2;
	if(check[s2[2]][s4[2]]==0){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(check[s2[2]][s4[2]]==1){
		cout<<0;
		return 0;
	}
	cout<<1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
