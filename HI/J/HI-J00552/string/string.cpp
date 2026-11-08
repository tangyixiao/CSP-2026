#include<bits/stdc++.h>
using namespace std;

int main()
{

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;

	string s;
	for(int i=0;i<n;i++) 
	{
		int a;
		cin>>a;
		char s1;
		cin>>s1;
	
		for(int i=0;i<a;i++)
		{
			s+=s1;
		}
	}
	string s1=s;
	for(int i=0;i<s.size();i++)
	{
		s1+=s[i];
	}
	if(s1==s)
	{
		cout<<0;
		return 0;
	}
//	cout<<s;
	else
	{
		if(s.size()%2==0)
		{
			long long cnt=0;
			string s2,s3;
			for(int i=0;i<s.size()/2;i++)
			{
				s2+=s[i];
				
			}
		//	cout<<s2;
		//	cout<<endl;
			for(int i=s.size()/2;i<s.size();i++)
			{
				s3+=s[i];
			}
		//	cout<<s3;
		//	cout<<endl;
			for(int i=0;i<s2.size()-1;i++)
			{
				if(s2[i]!=s3[i])
				{
					cnt++;
					//cout<<s1[i]<<" "<<s2[i]<<endl;
				}
			}
			cout<<cnt;
			return 0;
		}
		else
		{
			long long cnt=0;
			string s2,s3;
			for(int i=0;i<s.size()/2;i++)
			{
				s2+=s[i];
				
			}
		//	cout<<s2;
		//	cout<<endl;
			for(int i=s.size()/2;i<s.size();i++)
			{
				s3+=s[i];
			}
		//	cout<<s3;
		//	cout<<endl;
			for(int i=0;i<s2.size();i++)
			{
				if(s2[i]!=s3[i])
				{
					cnt++;
				//	cout<<s2[i]<<" "<<s3[i]<<endl;
				}
			}
			cout<<cnt;
			return 0;
			
		
		}
	}
	return 0;
}
