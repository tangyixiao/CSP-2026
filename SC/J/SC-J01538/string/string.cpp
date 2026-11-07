#include<bits/stdc++.h>
using namespace std;

int n;
int a[200005];
char c[200005];
long long form[200005];
long long cnt;
double mid;
long long ans;

int  qury(long long x)
{
	long long *p=upper_bound(form+1,form+n+1,x);
	int imid;
	if(*(p-1)<mid)
	{
		imid=p-form;
	}
	else
	{
		//imid=p-form;
		imid=p-form-1;
	}
	return imid;
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		form[i]=form[i-1]+a[i];
		cnt+=a[i];
		//cerr<<"       "<<i<<"\n";
	}
	mid=(cnt+1)/2.0;
	//cerr<<"       "<<mid<<"\n";
	int imid=qury(mid);
	//cerr<<"       "<<imid<<"\n";
	for(int i=1;i<imid;i++)
	{
		/*if(i==imid)
		{
			long long ileft=form[i]-a[i]+1;
			long long iright=form[i];
			long long rleft=(2*mid)-iright;
			long long rright=(2*mid)-ileft;
			if(rright==rleft)
		 	{
				continue;
			}
			
		}*/
		//else
		//{
			int ri=n-i-1;
		long long ileft=form[i]-a[i]+1;
		long long iright=form[i];
		long long rleft=(2*mid)-iright;
		long long rright=(2*mid)-ileft;
		//cerr<<"         !!!"<<rleft<<"  "<<rright<<"\n";
		while(rright>=rleft)
		{
			int g=qury(rright);
			//cerr<<"    ???   "<<g<<"\n";
			if(c[g]!=c[i])
			{
				int hkj;
				if(a[g]<=(rright-rleft)+1)
				{
					hkj=a[g];
				}
				else
				{
					hkj=(rright-rleft)+1;
					a[g]-=hkj;
				}
				ans+=hkj;
				rright-=hkj;
			}
			else
			{
				break;
			}
			//cerr<<"    ??   "<<rright<<"\n";
			//cerr<<"    ?!?   "<<rleft<<"\n";
		}
		//}	
	}
	cout<<ans;
	return 0;
}