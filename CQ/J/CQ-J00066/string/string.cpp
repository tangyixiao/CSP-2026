#include<bits/stdc++.h>
using namespace std;

struct node{
	long long num;
	long long sd;
	char ch;
};
node a[200005];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long l=0,cnt=0,ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].num>>a[i].ch;
		a[i].sd=a[i].num;
		cnt+=a[i].num;
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	long long mid=cnt/2;
	long long t=0,w=cnt;
	int p=0,xl=1,yl=n;
	char x=a[1].ch, y=a[n].ch;
	while(t<mid || w>mid)
	{
		bool b;
		if(a[xl].sd <= a[yl].sd)
			b = 1;
		else if(a[xl].sd > a[yl].sd)
			b = 0;
		if(x!=y)
		{
			if(b)
			{
				t+=a[xl].sd;
				w-=a[yl].sd;
				a[yl].sd-=a[xl].sd;
				ans+=a[xl].sd; 
				xl++;
			}
			else
			{
				t+=a[yl].sd;
				w-=a[yl].sd;
				a[xl].sd-=a[yl].sd;
				ans+=a[yl].sd;
				yl--;
			}
		}
		else
		{
			if(b)
			{
				t+=a[xl].sd;
				w-=a[yl].sd;
				a[yl].sd-=a[xl].sd;
				xl++;
			}
			else
			{
				t+=a[yl].sd;
				w-=a[yl].sd;
				a[xl].sd-=a[yl].sd;
				yl--;
			}
		}
		//printf("t=%d w=%d\n",t,w);
		x=a[xl].ch;
		y=a[yl].ch;
	}
	/*while(t+a[xl].sd<=mid)
	{
		//cout<<"1  "<<t<<"\n";
		ans+=a[xl].sd;
		t+=a[xl].sd;
		xl++;
	}
	while(w-a[yl].sd>=mid)
	{
		//cout<<"2  "<<w<<"\n";
		ans+=a[yl].sd;
		w-=a[yl].sd;
		yl--;
	}
	cout<<a[xl].sd<<endl;
	if(t!=mid)
	{
		ans+=a[xl].sd/2;
	}*/
	cout<<ans;
	return 0;
}
