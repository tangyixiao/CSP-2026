#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2){
		cout<<1;
		int l1=s1[1]-'0',l2=s2[1]-'0';
		if(l1==l2){
			cout<<1;
			char w1=s1[2],w2=s2[2];
			if((w1<='C'&&w2<='C')||(w1>='D'&&w2>='D')){
				cout<<1;
				if(abs(w1-w2)==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}

 	return 0;
}
