#include<bits/stdc++.h>
using namespace std;
int n;
long long change,aa[200001];
char cc[200001];
bool allo;
stack <long long> a;
stack <char> c;
stack <long long> ra;
stack <char> rc;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> aa[i] >> cc[i];
		allo=(aa[i]==1);
    }
    if(allo)
    {
    	for(int i=1;i<=n/2;i++)
    	{
    		change+=(cc[i]==cc[n-i+1]);
		}
		cout << change;
		return 0;
	}
    for(int i=1;i<=n;i++)
	{
		a.push(aa[i]);
		c.push(cc[i]);
		ra.push(aa[n-i+1]);
		rc.push(cc[n-i+1]);
    }
	while(!a.empty())
	{
		if(c.top()==rc.top())
		{
			if(a.top()==ra.top())
			{
				a.pop();
				ra.pop();
				c.pop();
				rc.pop();
			}
			else
			{
				if(a.top()>ra.top())
				{
					long long m=a.top()-ra.top();
					char s=c.top();
					a.pop();
					ra.pop();
					c.pop();
					rc.pop();
					a.push(m);
					c.push(s);
				}
				else
				{
					long long m=ra.top()-a.top();
					char s=rc.top();
					a.pop();
					ra.pop();
					c.pop();
					rc.pop();
					ra.push(m);
					rc.push(s);
				}
			}
		}
		else
		{
			if(a.top()==ra.top())
			{
				change+=a.top();
				a.pop();
				ra.pop();
				c.pop();
				rc.pop();
			}
			else if(a.top()>ra.top())
			{
				change+=ra.top();
				long long m=a.top()-ra.top();
				char s=c.top();
				a.pop();
				ra.pop();
				c.pop();
				rc.pop();
				a.push(m);
				c.push(s);
			}
			else
			{
				change+=a.top();
				long long m=ra.top()-a.top();
				char s=rc.top();
				a.pop();
				ra.pop();
				c.pop();
				rc.pop();
				ra.push(m);
				rc.push(s);
			}
		}
	}
	cout << change/2;
	return 0;
}
