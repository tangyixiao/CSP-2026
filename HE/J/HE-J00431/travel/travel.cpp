#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string m,n,x,y;
    string c1,c2,s1,s2,count = "";
    cin >> c1 >> c2 >> s1 >> s2;
    if(c1 == s2)
    {
        count += "1";
    }
    for(int i = 1;i<17;i++)
    {
        i = char(i);
        if(i>10)
        {
            if("0"+i+("a"&&"b"&&"c"&&"d"&&"f") == c2 || "0"+i+("a"&&"b"&&"c"&&"d"&&"f") == s2)
            {
                count += "1";
            }
            else
            {
                count += "0";
            }
    		if((char(0)+i+"c" == s2 || char(0)+i+"b" == c2) && (char(0)+i+"c" == s2 || char(0)+i+"a" == c2) && (char(0)+i+"a" == s2 || char(0)+i+"b" == c2) && (char(0)+i+"f" == s2 || char(0)+i+"d" == c2) && (char(0)+i+"d" == s2 || char(0)+i+"f" == c2) && (char(0)+i+"b" == s2 || char(0)+i+"c" == c2) && (char(0)+i+"a" == s2 || char(0)+i+"c" == c2) && (char(0)+i+"b" == s2 || char(0)+i+"c" == c2))
    		{
    		    count += "1";
    		}
		    else
    		{
    		    count += "0";
    		}
        	if(((char(0)+i+"c" == s2 && char(0)+i+"c" == c2) || (char(0)+i+"d" == s2 && char(0)+i+"d" == c2)) && ((char(0)+i+"a" == s2 && char(0)+i+"a" == c2) || (char(0)+i+"b" == s2 && char(0)+i+"b" == c2)) && ((char(0)+i+"b" == s2 && char(0)+i+"b" == c2) || (char(0)+i+"c" == s2 && char(0)+i+"c" == c2)))
    		{
        		count += "1";
    		}
    		else
    		{
    		    count += "0";
    		}
    	}
        else
        {
            if(i+"a"&&i+"b"&&i+"c"&&i+"d"&&i+"f" == c2 || i+"a"&&i+"b"&&i+"c"&&i+"d"&&i+"f" == s2)
            {
                count += "1";
            }
            else
            {
                count += "0";
            }
    		if((i+"c" == s2 || i+"b" == c2) && (i+"c" == s2 || i+"a" == c2) && (i+"a" == s2 || i+"b" == c2) && (i+"f" == s2 || i+"d" == c2) && (i+"d" == s2 || i+"f" == c2) && (i+"b" == s2 || i+"c" == c2) && (i+"a" == s2 || i+"c" == c2) && (i+"b" == s2 || i+"c" == c2))
    		{
    		    count += "1";
    		}
		    else
    		{
    		    count += "0";
    		}
        	if(((i+"c" == s2 && i+"c" == c2) || (i+"d" == s2 && i+"d" == c2)) && ((i+"a" == s2 && i+"a" == c2) || (i+"b" == s2 && i+"b" == c2)) && ((i+"b" == s2 && i+"b" == c2) || (i+"c" == s2 && i+"c" == c2)))
    		{
        		count += "1";
    		}
    		else
    		{
    		    count += "0";
    		}
		}
    }
    for(int i = 1;i<17;i++)
	{
    	if((char(0)+i+"c" == s2 || char(0)+i+"b" == c2) && (char(0)+i+"c" == s2 || char(0)+i+"a" == c2) && (char(0)+i+"a" == s2 || char(0)+i+"b" == c2) && (char(0)+i+"f" == s2 || char(0)+i+"d" == c2) && (char(0)+i+"d" == s2 || char(0)+i+"f" == c2) && (char(0)+i+"b" == s2 || char(0)+i+"c" == c2) && (char(0)+i+"a" == s2 || char(0)+i+"c" == c2) && (char(0)+i+"b" == s2 || char(0)+i+"c" == c2))
    	{
    	    count += "1";
    	    break;
    	}
		else
    	{
    	    count += "0";
    	    break;
    	}
        if(((char(0)+i+"c" == s2 && char(0)+i+"c" == c2) || (char(0)+i+"d" == s2 && char(0)+i+"d" == c2)) && ((char(0)+i+"a" == s2 && char(0)+i+"a" == c2) || (char(0)+i+"b" == s2 && char(0)+i+"b" == c2)) && ((char(0)+i+"b" == s2 && char(0)+i+"b" == c2) || (char(0)+i+"c" == s2 && char(0)+i+"c" == c2)))
    	{
        	count += "1";
    	    break;
    	}
    	else
    	{
    	    count += "0";
    	    break;
    	}
    }
    cout << count << endl;
    return 0;
}
