#include <bits/stdc++.h>
using namespace std;
int c1,c2,cnt1=0,cnt2=0;
char a[5],b[5];
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int n=s1.size(),m=s2.size();
	for(int i=0;i<=n;i++){
		a[i]=s1[i];
		if(a[i]>='0'&&a[i]<='9'){
			cnt1*=10;
			cnt1+=a[i];
		}
	}
	for(int i=0;i<=m;i++){
		b[i]=s2[i];
		if(b[i]>='0'&&b[i]<='9'){
			cnt2*=10;
			cnt2+=b[i];
		}
	}
	if(c1!=c2)
	{
		cout<<"0000";
	}
	else
	{
		if(cnt1!=cnt2){
			cout<<"1000";
		}
		else{
			if(abs(a[2]-b[2])==1)
			{
				if(a[2]=='C'&&b[2]=='D')
				{
					cout<<"1100";
				}
				else if(a[2]=='D'&&b[2]=='C'){
					cout<<"1100";
				}
				else{
					cout<<"1111";
				}
			}
			else
			{
				cout<<"1110";
			}
		}
	}
	return 0;
} 