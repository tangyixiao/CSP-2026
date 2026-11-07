#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm> 
using namespace std;
int a[200002];
int arr[200002]; 
int aaa[200002];
int n,m;
int mx=0;
int cmp(int n,int m)
{
	return n>m;
}
	
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	sort(arr+1,arr+n+1,cmp);
	cout<<arr[m];
	return 0;
 } 
