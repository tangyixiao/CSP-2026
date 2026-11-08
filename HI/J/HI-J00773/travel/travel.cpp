#include<bits/stdc++.h>
using namespace std;

bool ck1(char a, char b)
{
	if((a == 'A' || a == 'B' || a == 'C') && (b == 'A' || b == 'B' || b == 'C'))
	{
		return true;
	}
	
	if((a == 'D' || a == 'F') && (b == 'D' && b == 'F'))
	{
		return true;
	}
	
	return false;
}

bool ck2(char a, char b)
{
	int a_num = a;
	int b_num = b;
	
	if((a_num == b_num - 1 || b_num == a_num - 1) && ((a != 'C' && b != 'D') || (b != 'C' && a != 'D')))
	{
		return true;
	} 
	
	return false;
}

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int c1, c2;
	string s1, s2;
	
	cin>> c1 >> s1 >> c2 >> s2;
	
	if(c1 == c2)
	{
		cout<< 1;
	}
	else
	{
		cout<< "0000" <<endl;
		
		return 0;
	}
	
	string s1_ = s1.substr(0, 2);
	string s2_ = s2.substr(0, 2);
	
	if(s1_ == s2_)
	{
		cout<< 1;
		
		char s1_2 = s1[2];
		char s2_2 = s2[2];
		
		if(ck1(s1_2, s2_2))
		{
			cout<< 1;
			
			if(ck2(s1_2, s2_2))
			{
				cout<< 1;
			}
			else
			{
				cout<< 0;
				
				return 0;
			}
		}
		else
		{
			cout<< "00";
			
			return 0;
		}
	}
	else
	{
		cout<< "000" <<endl;
		
		return 0;
	}
	
	return 0;
}
