#include<bits/stdc++.h> 
using namespace std;
bool cpm(int a,int b)
{
	return a>=b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.in","w",stdout);
    long long a[200001];
    long long p ,b;
    
    cin>>p>>b;
    for(int i=0;i<p;i++)
    {
    	cin>>a[i];
	}
	sort(a,a+p-1,cpm);
	long long n=a[0];
	for(int i=1;i<b;i++)
  {
  	   n=n&a[i];
	}  
	cout<<n;
	fclose(stdin);
fclose  (stdout) ; 
}