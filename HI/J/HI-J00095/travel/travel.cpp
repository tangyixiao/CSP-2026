#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cnt=0;
	string a,a1,b,b1,n,n1,s,s1;
	cin>>a>>a1>>b>>b1;
	n=a1[0];
	n1=a1[1];
	s=b1[0];
	s1=b1[1];
	if(a == b){
		cout<<1;
	}
	else{
		cout<<"0000";
		cnt++;
	}
	if(cnt!=1){
		if(n == s && n1 == s1){
			cout<<1;
		}
		else{
			cout<<"000";
			cnt++;
		}
	}
	if(cnt!=1){
		if((a1[2]>='A'&&a1[2]<='C') && (b1[2]>='A'&&b1[2]<='C')){
			cout<<1;
			if((a1[2]=='A'||a1[2]=='B')&&(b1[2]=='B'||b1[2]=='A')){
				cout<<1;
			}
			else if((a1[2]=='B'||a1[2]=='C') && (b1[2]=='B'||b1[2]=='C')){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else if((a1[2]=='D'||a1[2]=='F') && (b1[2]=='D'||b1[2]=='F')){
			cout<<11;
		}
		else{
			cout<<"00";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
