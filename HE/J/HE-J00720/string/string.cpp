#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char b[100005];
    string str;
    int n,a[100005],num=0;
    cin>>n;
    for(int i=1;i<=n;i++)
	{
    	cin>>a[i]>>b[i];
    	for(int j=1;j<=a[i];j++)
		{
    		str=str+b[i];
		}
	}
	int k1;
    k1=str.size()/2;
    cout<<str<<endl<<str.size()<<endl<<k1<<endl;
	for(int i=1;i<=k1;i++){
		if(str[i-1]!=str[str.size()-i])
		num++;
	}
	cout<<num;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
