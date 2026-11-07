#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int l1=c1.size(),l2=s1.size(),l3=l2-1;
	for(int i=0;i<l1;i++)
		if(c1[i]!=c2[i]){
			cout<<0<<0<<0<<0;
			return 0;
		}
	cout<<1;
	for(int i=1;i<l3;i++)
		if(s1[i]!=s2[i]){
			cout<<0<<0<<0;
			return 0;
		}
	cout<<1;
	if(abs(s1[l3]-s2[l3])>=2&&(max(s1[l3],s2[l3])!='C'&&min(s1[l3],s2[l3])!='A')||(max(s1[l3],s2[l3])=='D'&&min(s1[l3],s2[l3])=='C')){
		cout<<0<<0;
		return 0;
	}
	cout<<1;
	if(abs(s1[l3]-s2[l3])==1||max(s1[l3],s2[l3])=='F'&&min(s1[l3],s2[l3])=='D')
		cout<<1;
	else
		cout<<0;
	return 0;
}