#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string w1,w2,h1,h2;
    cin>>w1>>h1>>w2>>h2;
	if(w1 != w2)
	{
		cout<<"0000";
		return 0;
	}
	else if(int(h1[0]) != int(h2[0]) or int(h1[1]) != int(h2[1]))
    {
    	
    	cout<<"1000"<<endl;
    	return 0;
	}
	else if(int(h1[2])+int(h2[2])==135)
	{
		cout<<"1100";
		return 0;
	}
	else if(h1[2]<h2[2])
	{
		if(int(h1[2])+1 == int(h2[2]) or int(h1[2])+2 == int(h2[2]) and h1[2] !='A')
	    {
	    
				cout<<"1111";
				return 0;	
	    }
	}
	else
	{
		if(int(h1[2]) == h2[2]+1 or int(h1[2]) == h2[2]+2 and h1[2]!='C')
	    {
			cout<<"1111";
			return 0;
	    }
	}
	cout<<"1110";
	return 0;
}
