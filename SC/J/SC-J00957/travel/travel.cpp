#include<bits/stdc++.h>
using namespace std;
string s1,c1,s2,c2;
bool f1,f2,f3,f4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>c1>>s2>>c2;
	if(s1!=s2){
		f1=f2=f3=f4=0;
	}else{
		f1=1;
		if(c1[0]==c2[0]&&c1[1]==c2[1]){
			f2=1;
			if(((c1[2]=='A'||c1[2]=='B'||c1[2]=='C')&&(c2[2]=='A'||c2[2]=='B'||c2[2]=='C'))||((c1[2]=='D'||c1[2]=='F')&&(c2[2]=='D'||c2[2]=='F'))){
				f3=1;
				if(((c1[2]=='D'&&c2[2]=='F')||(c1[2]=='F'&&c2[2]=='D'))||(abs(c1[2]-c2[2])==1&&!((c1[2]=='C'&&c2[2]=='D')||(c1[2]=='D'&&c2[2]=='C')))){
					f4=1;
				}else{
					f4=0;
				}
			}else{
				f3=f4=0;
			}
		}else{
			f2=f3=f4=0;
		}
	}
	cout<<f1<<f2<<f3<<f4;
	fclose(stdin); fclose(stdout);
	return 0;
}