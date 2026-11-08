#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int sum=0,num=0;
int cum=0;
int	x,y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	if(c1==c2)
	cout<<"1";
	else
	cout<<"0";
	for(int i=0;i<=s1.size()-1;i++){
		if(s1[i]==s2[i])
		sum++;
		if(isupper(s1[i]))
		x=s1[i];
		if(isupper(s2[i]))
		y=s2[i];
	}
	if(sum==2)
	cout<<"1";
	else
	cout<<"0";
	if((x==65&&y==66)||(x==66&&y==67)){
		num++;
	}else if((x==67&&y==66)||(x==66&&y==67)){
		num++;
	}else if((x==68&&y==70)||(x==70&&y==68)){
		num++;
	}
	if((x==65&&y==67)||(x==65&&y==66)||(x==66&&y==67)||(x==67&&y==66)||(x==66&&y==65)||(x==67&&y==65)){
		cum++;
	}else if((x==68&&y==70)||(x==70&&y==68)){
		cum++;
	}
	if(cum!=0&&sum==2)
	cout<<"1";
	else
	cout<<"0";
	if(num!=0)
	cout<<"1";
	else
	cout<<"0";
	return 0;
} 
