#include<bits/stdc++.h>
using namespace std;
struct s{
	long long amount;
	char x;
};
int n;
s a[100005];
long long length,answer;

int main() {
	//siuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
	freopen("string1.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].amount>>a[i].x;
		length+=a[i].amount;
		if(a[i-1].x==a[i].x)
		{
			a[i-1].amount+=a[i].amount;
			n--;
			i--;
		}
		
	}
	if(length%2)
	{
		length-=1;
		length/=2;
		int mark=1;
		while(length>=a[mark].amount)
		{
			length-=a[mark].amount;
			mark++;
		}
		if(length==0)
		{
			a[mark].amount--;
			mark--;
		}
		else
		{
			a[mark].amount--;
		}
		
		for(int i=1,j=n;i<=mark&&j>=mark+1;i++,j--)
		{
			if(a[i].amount>a[j].amount)
			{
				if(a[i].x!=a[j].x)
				{
					answer+=a[j].amount;
//					cout<<answer<<"\n";
				}
				a[i].amount-=a[j].amount;
				a[j].amount=0;
				j--;
				while(a[i].amount>a[j].amount)
				{
//					cout<<"aa ";
					if(a[i].x!=a[j].x)
					{
						answer+=a[j].amount;
//						cout<<answer<<"\n";
					}
					a[i].amount-=a[j].amount;
					a[j].amount=0;
					j--;
				}
//				cout<<a[j].amount<<' '<<a[i].amount<<"\n";
				if(a[i].x!=a[j].x)
				{
					answer+=a[i].amount;
				}
				a[j].amount-=a[i].amount;
				a[i].amount=0;
			}
			else if(a[i].amount<a[j].amount)
			{
				if(a[i].x!=a[j].x)
				{
					answer+=a[i].amount;
				}
				a[j].amount-=a[i].amount;
				a[i].amount=0;
				i++;
				while(a[j].amount>a[i].amount)
				{
					
					if(a[j].x!=a[i].x)
					{
						answer+=a[i].amount;
					}
					a[j].amount-=a[i].amount;
					a[i].amount=0;
					i++;
				}
				
				if(a[j].x!=a[i].x)
				{
					answer+=a[j].amount;
				}
				a[i].amount-=a[j].amount;
				a[j].amount=0;
			}
			else
			{
				if(a[i].x!=a[j].x)
				{
					answer+=a[i].amount;
				}
				a[i].amount=a[j].amount=0;
			}
			
		}
		
	}
	else
	{
		
		length/=2;
		long long mark=1;
		while(length>=a[mark].amount)
		{
			length-=a[mark].amount;
			mark++;
		}
		
		for(int i=1,j=n;i<=mark&&j>=mark;i++,j--)
		{
//			cout<<i<<' '<<j<<"\n";
//			cout<<a[i].x<<' '<<a[j].x<<"\n\n\n";
			if(a[i].amount>a[j].amount)
			{
				if(a[i].x!=a[j].x)
				{
					answer+=a[j].amount;
				}
				a[i].amount-=a[j].amount;
				a[j].amount=0;
				j--;
				while(a[i].amount>a[j].amount)
				{
					if(a[i].x!=a[j].x)
					{
						answer+=a[j].amount;
					}
					a[i].amount-=a[j].amount;
					a[j].amount=0;
					j--;
				}
				if(a[i].x!=a[j].x)
				{
					answer+=a[i].amount;
				}
				a[j].amount-=a[i].amount;
				a[i].amount=0;
			}
			else if(a[i].amount<a[j].amount)
			{
				if(a[i].x!=a[j].x)
				{
					answer+=a[i].amount;
				}
				a[j].amount-=a[i].amount;
				a[i].amount=0;
				i++;
				while(a[j].amount>a[i].amount)
				{
					
					if(a[j].x!=a[i].x)
					{
						answer+=a[i].amount;
					}
					a[j].amount-=a[i].amount;
					a[i].amount=0;
					i++;
				}
				if(a[j].x!=a[i].x)
				{
					answer+=a[j].amount;
				}
				a[i].amount-=a[j].amount;
				a[j].amount=0;
			}
			else
			{
				if(a[i].x!=a[j].x)
				{
					answer+=a[i].amount;
				}
				a[i].amount=a[j].amount=0;
			}
		}
	}
	cout<<answer;
	return 0;
}