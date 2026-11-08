#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2; 
bool f[4];
int p1,p2;
int main(){
	ios::sync_with_stdio(false);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	p1=int(s1[0]-'0')*10+int(s1[1]-'0');
	s1=s1[2];
	p2=int(s2[0]-'0')*10+int(s2[1]-'0');
	s2=s2[2];
//	cout<<c1<<' '<<p1<<' '<<s1<<"\n";
//	cout<<c2<<' '<<p2<<' '<<s2<<"\n";
	if(c1==c2){
		f[0]=1;
		if(p1==p2){
			f[1]=1;
			if(((s1=="A"||s1=="B"||s1=="C")&&(s2=="A"||s2=="B"||s2=="C"))||((s1=="D"||s1=="F")&&(s2=="D"||s2=="F"))){
				f[2]=1;
				if(abs(int(s2[0]-'A')-int(s1[0]-'A'))==1){
					f[3]=1;
				}
			}
		}
	}
	for(int i=0;i<4;i++){
		cout<<f[i];
	}
	return 0;
}

