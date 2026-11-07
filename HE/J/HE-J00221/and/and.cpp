#include<bits/stdc++.h>
using namespace std;
int a[100001];
int red(int x,int y)
{
	int n=-1,s=0;
	while(x!=0&&y!=0)
	{
		n++;
		if(x%2==y%2&&x%2==1)
		 s+=pow(2,n);
		x/=2;y/=2;
	} 
	return s;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,maxx=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	 cin>>a[i];
		if(a[i]>maxx)
		 maxx=a[i];
	}
	if(m==1){
		cout<<maxx;
		fclose(stdin);
        fclose(stdout);
        return 0;
	}
	maxx=0;
	int c=0,b=0;
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(i!=j){
					maxx=max(maxx,red(a[i],a[j]));
				}
			}
		}
	}
	cout<<maxx;
	fclose(stdin);
	fclose(stdout);
    return 0;
 }
