#include<bits/stdc++.h>
using namespace std;
int  main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<c1.size();i++){
		if(c1[i]!=c2[i])
		{
			cout<<"0000"<<endl;
			return 0;
		}
	}
	cout<<"1";
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			cout<<"000"<<endl;
			return 0;
		}
	}
	cout<<"1";
	int n1=s1[2]-'A'+1,n2=s2[2]-'A'+1;
	if(((n1<=3&&n2<=3)||(n1>=4&&n2>=4))==0){
		cout<<"00"<<endl;
		return 0;
	}
	cout<<"1";
	if(n1<n2)swap(n1,n2);
	if(n1-n2!=1&&(n1==6&&n2==4)==0){
		cout<<"0"<<endl;
		return 0;
	}
	cout<<"1"<<endl;
	return 0;
} 
