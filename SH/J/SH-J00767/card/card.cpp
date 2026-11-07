#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500002],b[500002]={};
	int i,j,l,h;
	bool flag=true;
	char c1;
	string s="0",sc="0";
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];	
	}
	
	for (i=1;i<=n;i++){
		s="0";
		for (j=i;j<=n;j++){
			flag=true;
			sc="0";
			c1=a[j]+'0';
			for (h=0;h<s.size();h++){
				if(s[h]==c1){
					flag=false;	
				}
			}
			if(flag)s+=c1;
			else{
				for (l=0;l<h;l++){
					sc+=s[l];
				}
				s=sc;
			}
		}
		for (j=0;j<s.size();j++){
			b[s[j]]++;
		}
	}
	
	for (i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
