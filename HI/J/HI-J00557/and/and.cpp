#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ma;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)cin >> a[i];
	if(m==1)
	{
		for(int i=1;i<=n;i++)if(i>ma)ma=i;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int x=a[i]&a[j];
				if(x>ma)ma=x;
			}	
		}
	}
	else if(m==3)
	{
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					int x=a[i]&a[j]&a[k];
					if(x>ma)ma=x;
				}
					
			}	
		}
	}
	else if(m==4)
	{
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++)
					{
						int x=a[i]&a[j]&a[k]&a[l];
						if(x>ma)ma=x;
					}
				}
				
			}	
		}
	}
	else if(m==5)
	{
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int z=l+1;z<=n;z++){
						int x=a[i]&a[j]&a[k]&a[l]&a[z];
						if(x>ma)ma=x;
						}
					}
				}
				
			}	
		}
	}
	cout << ma;
	return 0;
}
