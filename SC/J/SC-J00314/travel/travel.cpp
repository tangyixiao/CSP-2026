#include<bits/stdc++.h>
using namespace std;
char d[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		d[1]='1';
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			d[2]='1';
			int p=int(s1[2])-int(s2[2]);
			if(((s1[2]=='A' || s1[2]=='B' || s1[2]=='C') && (s2[2]=='A' || s2[2]=='B' || s2[2]=='C')) || ((s1[2]=='D' || s1[2]=='F') && (s2[2]=='D' || s2[2]=='F'))){
				d[3]='1';
				if(p==1 || p==-1){
					d[4]='1';
				}else{
					d[4]='0';
				}
			}else{
				d[3]='0';
				d[4]='0';
			}
		}else{
			d[2]='0';
			d[3]='0';
			d[4]='0';
		}
	}else{
		d[1]='0';
		d[2]='0';
		d[3]='0';
		d[4]='0';
	}
	for(int i=1;i<=4;i++)cout<<d[i];
	cout<<endl;
	return 0;
}