#include<bits/stdc++.h>
using namespace std;

string p1,p2;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	//scanf("%s%s%s%s",&c1,&s1,&c2,&s2);
	if(c1==c2){//同车厢 
		cout<<1;
		p1=s1[0]+s1[1];
		p2=s2[0]+s2[1];
		//cout<<p1<<" "<<p2;
		if(p1==p2){//同行 
			cout<<1;
			char zw1=s1[2],zw2=s2[2];
			//cout<<s1<<" "<<s2;
			//cout<<s1[2]<<" "<<s2[2];
			//cout<<zw1<<" "<<zw2;
			if(s1[2]<='C'&&s2[2]<='C'){//同侧 
				cout<<1;
				//cout<<abs(zw1-zw2);
				//cout<<zw1<<" "<<zw2;
				if(abs(zw1-zw2)==1){
					cout<<1;
				}
				else cout<<0;
			}
			else if(zw1>='D'&&zw2>='D'){
				cout<<11;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	
	return 0;
}
