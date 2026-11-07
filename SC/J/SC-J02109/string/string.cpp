#include<bits/stdc++.h>
using namespace std;
int a[200005];
char b[200005];
long long int nem=0,ans=0;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
        scanf("%d %c",&a[i],&b[i]); 
		nem+=a[i];      
	}
	nem=nem/2;
	int head=1,tail=n;
	while(nem){ 
		if(a[head]>a[tail]){
			nem-=a[tail];
			a[head]-=a[tail];
			if(b[head]!=b[tail])
			{
				if(nem>0)
				ans+=a[tail];
				else{
				ans+=a[tail]+nem;
				break;
				}
				
			}
			tail--;			
		}
		else
		if(a[head]<a[tail]){
			nem-=a[head];
			a[tail]-=a[head];
			if(b[head]!=b[tail])
			{
				if(nem>0)
				ans+=a[head];
				else
				{
					ans+=a[head]+nem;
					break;
				}
				
			}
			head++;			
		}
		else
		if(a[head]==a[tail]){
			nem-=a[head];			
			if(b[head]!=b[tail]){
				if(nem>0)
				ans+=a[head];
				else{
					ans+=a[head]+nem;
					break;
				}
			}
			head++;
			tail--;
		}
		if(head==tail)
		break;
	} 
	cout<<ans;
    return 0;
}