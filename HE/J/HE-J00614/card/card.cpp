#include<bits/stdc++.h>
using namespace std;
string s,a;
int n,m;
int q[300005];
void t()
{
	for(int i=2;i<=n;i++)
	{
		a[i-1]=a[i];	
	} 
	return;
}
int main()
{
	freopen("card1.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		a[i]=s[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a.size();j++)
		{
			int w=s.find(a[1]);
			if(w==-1){
				s+=a[1];
			}else{
				s.erase(w+1);
			}
		}
		t();
		for(int k=1;k<=s.size();k++)
		{
			q[s[i]-'0']++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<q[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
