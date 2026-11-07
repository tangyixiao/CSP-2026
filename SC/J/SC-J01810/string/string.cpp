#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

int n;
int num;
char s;
char a[N]; 

long long cnt;
int ad[N];

long long ans;

void change(){
	cnt-=1;
	long long len=cnt/2;
	long long j=cnt;
//	cout<<"j:"<<j<<endl;
	int noi,noj;
	for(int i=len;i<=n;i++)
	{
		if(ad[i]!=0) noj=ad[j];
		else ad[i]=noj;
	}
	for(int i=1;i<=len;i++)
	{
		if(ad[i]!=0) noj=ad[j];
		if(a[noi]!=a[noj])
		{
//			cout<<"noi:"<<noi<<" "<<"noj:"<<noj<<endl;
//			cout<<"i:"<<i<<" "<<"j:"<<j<<endl;
			ans++;
		}
		j--;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cnt=1;
	for(int i=1;i<=n;i++)
	{
		cin>>num>>s;
		
		a[i]=s;
		ad[cnt]=i;
		
		cnt+=num;
	}
	change();
	cout<<ans;

	return 0;
}
