#include<bits/stdc++.h>
using namespace std;

string fl(string a)
{
	string s="";
	for(int i=0;i<a.size()-1;i++)
	{
		s+=a[i];
	}
	return s;
}
bool pd(string a,string b)
{
	
	char c=a[2],d=b[2];
	if(c=='C'&&d=='D'||c=='D'&&d=='C')
	{
		return false;
	}
	return true;
}

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cx1,set1,cx2,set2;
	cin>>cx1>>set1>>cx2>>set2;
	int a=set1[2],b=set2[2];
	if(cx1==cx2)
	{
		cout<<"1";
		
	}
	else
	{
		cout<<"0000";
		return 0;	
	}
	if(fl(set1)==fl(set2))
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(fl(set1)==fl(set2)&&pd(set1,set2))
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(cx1==cx2&&fl(set1)==fl(set2)&&pd(set1,set2)&&abs(a-b)==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
		return 0;
	}
	return 0;
}