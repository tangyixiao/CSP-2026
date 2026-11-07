#include<bits/stdc++.h>
using namespace std;
long long L,ans,mid,L1,undmid,sum,r,c1,c2,ans2;
int a[200011],n;
char b[200011];
bool f;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d %c",&a[i],&b[i]);
		L+=a[i];
	}
	ans=L>>1;
	
	
		if(L%1==1)mid=ans+1;
		else mid=ans;
		for(int i=1;i<=n;i++)
		{
			L1+=a[i];
			if(L1==mid){
				if(L%2==1)a[i]-=1;f=1;r=n;
				break;
			}
			if(L1>mid)
			{sum=mid-L1+a[i];r=n+1;
				undmid=i;break;
			}
			
		}
		if(!f){
			for(int i=n;i>undmid;i--){a[i+1]=a[i],b[i+1]=b[i];}
		if(L%2==1)a[undmid]=sum;
		else a[undmid]=sum;
		a[undmid+1]=L1-mid-1,b[undmid+1]=b[undmid];
		}
			for(int i=1,j=r;i<j;)
		{
			if(a[i]>a[j])
			{
				a[i]-=a[j];
				if(b[i]==b[j])
				{
					ans-=a[j];
				}
				j--;
			}
			if(a[j]>a[i])
			{
				a[j]-=a[i];
				if(b[i]==b[j]){
					ans-=a[i];
				}
				i++;
			}
			if(a[i]==a[j])
			{
				if(b[i]==b[j])
				{
					ans-=a[j];
				}
				i++,j--;
			}
			if(j<i)break;
	}
	cout<<ans;
	return 0;
 } 
