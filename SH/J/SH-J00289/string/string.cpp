#include<bits/stdc++.h>
using namespace std;
char eer[159999999];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a;
	int ki=0;
	int ans=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		int m;
		char n;
		cin>>m>>n;
		for(int j=0;j<m;j++)
		{
			eer[ki]=n;
			ki++;
		}
	}for(int i=0,j=ki-1;i<(ki-1)/2,j>(ki-1)/2;i++,j--)
	{
		if(eer[i]!=eer[j])
		{
			ans++;
		}
	}
	cout<<ans;
}
