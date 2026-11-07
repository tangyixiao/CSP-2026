#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n1,n2,z1,z2;
	string s1,s2;
	cin>>n1>>s1>>n2>>s2;
	if(n1!=n2){
		cout<<"0000";
		return 0;
	}
	//cout<<s1[0]<<" "<<s2[0]<<" "<<s1[1]<<" "<<s2[1]<<endl;
	if(s1[0]!=s2[0] || s1[1]!=s2[1]){
		cout<<"1000";
		return 0;
	}
	
	z1=s1[2]-'A';
	z2=s2[2]-'A';
	//cout<<z1<<" "<<z2<<endl; 
	if(z1>=0 && z1<=2 && z2>=0 && z2<=2){
		if(z1+1==z2 || z1-1==z2){
			cout<<"1111";
			return 0;
		}
		cout<<"1110";
	}
	if(z1>=3 && z1<=4 && z2>=3 && z2<=4){
		if(z1+1==z2 || z1-1==z2){
			cout<<"1111";
			return 0;
		}
		cout<<"1110";
	}
	cout<<"1100";
	
	
	
	
	return 0;
} 
