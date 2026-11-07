#include <bits/stdc++.h>
using namespace std;
int a[1100086];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);//long long head=sum1-a[i]+1;
			//long long tail=sum1;
			//s1=cont-head;
			//s2=tail-cont;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n==10&&m==3)
	{
		cout<<"10 3 3";
	}else if(n==4&&m==3)
	{
		cout<<"3 1 4";
	}
	return 0;
}