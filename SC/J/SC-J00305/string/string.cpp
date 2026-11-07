#include<bits/stdc++.h>
using namespace std;
int n;
long long t;
struct node
{
	int a;
	char c;
}s[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>s[i].a>>s[i].c;
	if(n<=2)
	{
		if(s[1].a!=s[n].a)cout<<min(s[1].a,s[n].a);
		else cout<<0;
		return 0;
	}
	int i=1,j=n;
	while(i<j)
	{
		if(s[i].c!=s[j].c)
		{
			if(s[i].a>s[j].a)
			{
				int b=s[i].a;
				for(int w=j;w>i;w--)
				{
					if(w==i){j=i;break;}
					if(s[i].c!=s[w].c)
					{
						if(b>=s[w].a){t+=s[w].a;b-=s[w].a;}
						else{t+=b;s[w].a-=b;j=w;break;} 
					}
					else
					{
						if(b>=s[w].a){b-=s[w].a;continue;}
						else {s[w].a-=b;j=w;break;}
					}
				}
				i++;
			}
			else if(s[i].a<s[j].a)
			{
				int b=s[j].a;
				for(int w=i;w<j;w++)
				{
					if(w==j){i=j;break;}
					if(s[j].c!=s[w].c)
					{
						if(b>=s[w].a){t+=s[w].a;b-=s[w].a;}
						else{t+=b;s[w].a-=b;i=w;break;} 
					}
					else
					{
						if(b>=s[w].a){b-=s[w].a;continue;}
						else {s[w].a-=b;i=w;break;}
					}
				}
				j--;
			}
			else
			{
				t+=s[i].a;
				i++;
				j--;
			}
		}
		else
		{
			if(s[i].a>s[j].a){s[i].a-=s[j].a;j--;}
			else if(s[i].a<s[j].a){s[j].a-=s[i].a;i++;}
			else {i++;j--;}
		}
	}
	cout<<t;
	return 0;
}