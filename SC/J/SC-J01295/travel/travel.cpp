#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
	string str1,str2;
}a[2];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	string str;
	bool flag[4];
	cin>>a[0].str1>>a[0].str2>>a[1].str1>>a[1].str2;
	//step1
	flag[0]=1;
	int s=(int)a[0].str1.size();
	for(int i=0;i<s;i++){
		if(a[0].str1[i]!=a[1].str1[i]){
			flag[0]=0;
			break;
		}
	}
	//special judge
	if(flag[0]==0){
		for(int i=0;i<4;i++){
			cout<<"0";
		}
		cout<<"\n";
		return 0;
	}
	//step2
	flag[1]=1;
	for(int i=0;i<2;i++){
		if(a[0].str2[i]!=a[1].str2[i]){
			flag[1]=0;
			break;
		}
	}
	//step3
	int a0=a[0].str2[2]-'A',a1=a[1].str2[2]-'A';
	if(flag[1]==1){
		if((a0>=0 && a0<=2) && (a1>=0 && a1<=2))
			flag[2]=1;
		else if((a0>=3 && a0<=4) && (a1>=3 && a1<=4))
			flag[2]=1;
	}
	//step4
	if(flag[2]){
		if(abs(a0-a1)==1)
			flag[3]=1;
	}
	
	for(int i=0;i<4;i++){
		if(flag[i])
			cout<<1;
		else cout<<0;
	}
	cout<<"\n";
	return 0;
}