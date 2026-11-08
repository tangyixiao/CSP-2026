/*
 
*/
//#include<bits/stdc++.h>
//using namespace std;
//vector<int> a;
//vector<long long> qz;
//vector<char> c;
//int main()
//{
//	//freopen("string.in","r",stdin);
//	//freopen("string.out","w",stdout);
//	int n;
//	cin>>n;
//	a.resize(n+1);
//	c.resize(n+1);
//	
//	cin>>a[0];
//	cin>>c[0];
//	qz.push_back(a[0]);
//	
//	for(int i=1;i<n;i++)
//	{
//		cin>>a[i];
//		cin>>c[i];	
//		qz.push_back(qz[i-1]+a[i]); 
//		//cout<<w[i];
//	}
//	long long z=ceil(qz[n-1]/2.0);
//	int y=0;
//	for(y=0;y<n;y++)
//	{
//		if(qz[y]>=z)
//		{
//			break;
//		}
//	}
//	long long num=0,l=z,r=z,lw=y,rw=y,s;
//	//cout<<a[y];
//	cout<<l<<" "<<r<<" "<<y;
//	while(l>=0&&r<=qz[n-1])
//	{
//		s=min(a[lw]-(l-qz[]),a[lw]-(-qz[]));
//		
//		if(c[lw]!=c[rw])
//		{
//			num+=s;
//		}
//		
//		
//		//cout<<s<<"   "<<l<<" "<<r<<"  "<<lw<<" "<<rw<<"-----";
////		for(int i=0;i<n;i++)
////		{
////			cout<<a[i]<<" ";
////		}
//		cout<<endl;
//	}
//	cout<<num;
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int n;
	long long a;
	char c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>c;
		for(int i=0;i<a;i++)
		{
			s+=c;
		}
	}
	
	int z=s.size()/2;
	string s1,s2;
	if(s.size()%2==0)
	{
		s1=s.substr(0,z);
		s2=s.substr(z);
	}
	else
	{
		s1=s.substr(0,z);
		s2=s.substr(z+1);
	}
	int num=0;
	reverse(s1.begin(),s1.end());
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]!=s2[i])
		{
			num++; 
		}
	}
	
	cout<<num;
	return 0;
}
