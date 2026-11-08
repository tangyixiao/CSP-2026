#include<bits/stdc++.h>
using namespace std; 
string c1,c2,s1,s2,c21,s21;
char c22,s22;
long long a[1000];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>c2>>s1>>s2;
	c21=c2[0]+c2[1];
	c22=c2[2];
	s21=s2[0]+s2[1];
	s22=s2[2];
	if(c1==s1){
		a[0]=1;
		if(c21==s21){
			a[1]=1;
			if(((c22>='A' && c22<='C') && (s22>='A' && s22<='C')) || (c22>='D' && c22<='F') && (s22>='D' && s22<='F')){
				a[2]=1;
				if((c22+1==s22) || s22+1==c22){
					a[3]=1;
				}
			}
		}
	}
	cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	return 0;
}
