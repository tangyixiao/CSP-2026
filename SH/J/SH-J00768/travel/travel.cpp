#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,a,b;
int ans=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		ans=0;
	}
	cout<<ans;
	if(!(s1[0]==s2[0]&&s1[1]==s2[1])){
		ans=0;
	}
	cout<<ans;
	a=s1[2];
	b=s2[2];
	if(a>b){
		swap(a,b);
	}
	if(!((a=="A"&&b=="B")||(a=="A"&&b=="C")||(a=="B"&&b=="C")||(a=="D"&&b=="E"))){
		ans=0;
	}
	cout<<ans;
	if(a=="A"&&b=="C"){
		ans=0;
	}
	cout<<ans;
	return 0;
	fclose(stdin);
	fclose(stdout);
} 
