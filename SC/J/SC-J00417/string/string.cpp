#include<bits/stdc++.h>
using namespace std;
int a,c,s,t;
char b;
string d;
void h(string f){
	for(int i=1,j=s;i<j;i++,j--)
	{
		if(d[i]!=d[j])
		{
			t++;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>c;
	d+=' '; 
	for(int i=1;i<=c;i++)
	{
		cin>>a>>b;
		s+=a; 
		for(int k=1;k<=a;k++)
		{
			d+=b;
		}
	}
	h(d);
	cout<<t;
	return 0;
}