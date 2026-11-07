#include<bits/stdc++.h>
using namespace std;

int ans[10];
bool ist = 1;
string c1,s1,c2,s2;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2)
	{
	    ans[1] = 1;
	    for(int i = 0; i < 2; i++)
		    if(s1[i]!=s2[i])
			    ist = 0;
	    if(ist)
		{
		    ans[2] = 1;
	        if(s1[2]<='C' && s2[2]<='C')
	        {
		        ans[3] = 1;
		        if((s1[2]==s2[2]+1) || (s2[2]==s1[2]+1)) ans[4] = 1;
	        }
	        if(s1[2]>'C' && s2[2]>'C')
	        {
		        ans[3] = 1;
		        if((s1[2]==s2[2]+2) || (s2[2]==s1[2]+2)) ans[4] = 1;
	        }
	    }
    }
	for(int i = 1; i <= 4; i++)
	    cout << ans[i];
	return 0;
} 
