#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a[10],b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cnt=0;
	int q,w,n=0,m=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<=s1.size()-2;i++){
		a[i]=s1[i];
	}
	for(int i=0;i<=s2.size()-2;i++){
		b[i]=s2[i];
	}
	for(int i=0;i<=s1.size()-2;i++){
		if(a[i]==b[i]){
			cnt++;
		}
	}
	if(cnt==2){
		cout<<1;
	}
	else{
		cout<<"000";
	}
	
	for(int i=2;i<=s2.size();i++){
		for(int i=2;i<=s1.size();i++){
			q=s1[i];
			w=s2[i];
			if((q==65||q==66||q==67)&&(w==65||w==66||w==67)){
				cout<<1;
				n=q;
				m=w;
				if(n+1==m||n-1==m){
					cout<<1;	
				}
				else{
					cout<<0;
				}
				return 0;
			}
			else{
				cout<<"00";
				return 0;
			}
			
		}
	}	
	
	
	return 0;
}
