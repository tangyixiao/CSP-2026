#include<bits/stdc++.h>
using namespace std;
int c1,c2,i,x,y;
char s1[10],s2[10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2)
    {
	    cout<<1;
    	if(s1[0]==s2[0]&&s1[1]==s2[1])
        {
    	    cout<<1;
    	    x=s1[2];y=s2[2];
    	    if(((x<=67&&y<=67)||(x>67&&y>67))&&x!=y)
    	    {
    	    	cout<<1;
    	    	int f=abs(x-y);
    	    	int g=min(x,y);
    	    	int h=max(x,y);
    	    	if(f!=1&&g!=68&&h!=70)
    	    		cout<<0;
				else
				    cout<<1;
				return 0;
			}
			else
			    cout<<0;
			cout<<0;
			return 0;
	    }
        else
            cout<<0;
        cout<<0;cout<<0;
        return 0;
	}
        
    else
        cout<<0;
    cout<<0;cout<<0;cout<<0;
    return 0;
}