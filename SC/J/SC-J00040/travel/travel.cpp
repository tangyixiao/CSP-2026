#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool a1=1,a2=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if('A'<=s1[2]&&s1[2]<='C')a1=0;
	if('A'<=s2[2]&&s2[2]<='C')a2=0;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if(a1==a2){
				cout<<1;
				cout<<(abs(s1[2]-s2[2])==1&&a1==a2);
			}else cout<<"00"<<endl;
		}else cout<<"000"<<endl;
	}else cout<<"0000"<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
