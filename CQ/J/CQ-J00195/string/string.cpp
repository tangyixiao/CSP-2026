#include<bits/stdc++.h>

using namespace std;
long long n;
long long a[200099];
long long c[200099];

long long cnt;
struct node{
	long long i;
	long long ch;
	long long num;
};
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		long long t1;
		char t2;
		cin>>t1>>t2;
		a[i]=t1;
		c[i]=int(t2-'a');
	}
	node l={1,c[1],a[1]},r={n,c[n],a[n]};
	
	while(1)
	{
//		cout<<l.i<<" "<<char(l.ch+'a')<<" "<<l.num<<endl;
//		cout<<r.i<<" "<<char(r.ch+'a')<<" "<<r.num<<endl<<endl;
		if(l.i>=r.i) 
		{
			break;
		}
		if(l.num<r.num)
		{
//			cout<<"???";
			if(l.ch==r.ch)
			{
				r.num-=l.num;
				l={l.i+1,c[l.i+1],a[l.i+1]};			
			}
			else
			{
				r.num-=l.num;
				cnt+=l.num;
				l={l.i+1,c[l.i+1],a[l.i+1]};	
			}
		}
		else if(l.num==r.num)
		{
//			cout<<"@@@";
			if(l.ch==r.ch)
			{
				r={r.i-1,c[r.i-1],a[r.i-1]};	
				l={l.i+1,c[l.i+1],a[l.i+1]};				
			}
			else
			{
				cnt+=l.num;
				r={r.i-1,c[r.i-1],a[r.i-1]};	
				l={l.i+1,c[l.i+1],a[l.i+1]};
			}			
		}
		else if(l.num>r.num)
		{
//			cout<<"!!!"<<endl;
			if(l.ch==r.ch)
			{
				l.num-=r.num;
				r={r.i-1,c[r.i-1],a[r.i-1]};				
			}
			else
			{
				l.num-=r.num;
				cnt+=r.num;
				r={r.i-1,c[r.i-1],a[r.i-1]};
				
			}
		}
//		cout<<"cnt"<<" "<<cnt<<endl<<endl;
	}
	cout<<cnt;
} 
