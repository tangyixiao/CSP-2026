#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream fin("travel.in");
	ofstream fout("travel.out");
	string c1,s1,c2,s2;
	fin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		fout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1])
    	{
    		fout<<"1";
    		if(s1[2]<'D'&&s2[2]<'D')
    		{
    			fout<<"1";
    			if(s1[2]-s2[2]==1||s2[2]-s1[2]==1)
    			{
    				fout<<"1";
				}
				else
				{
					fout<<"0";
				}
			}
			else if(s1[2]>'C'&&s2[2]>'C')
			{
				fout<<"1";
				if(s1[2]-s2[2]==1||s2[2]-s1[2]==1)
    			{
    				fout<<"1";
				}
				else
				{
					fout<<"0";
				}
			}
			else
			{
				fout<<"00";
			}
    	}
    	else
    	{
        	fout<<"000";
    	}
	}
	else
	{
		fout<<"0000";
	}
	fin.close();
	fout.close();
	return 0;
}
