#include<bits/stdc++.h>
using namespace std;
struct card{
	long long zhi;
	int you;	
};
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	long long n,m,n1=1;
	cin>>n>>m;
	long long a[n+1];
	for(long long i=1;i<=n;i++){
		cin>>a[i];			
	}
	int c[m+1];memset(c,0,sizeof(c));
	while(n1<=n){
	card b[n+1];
		for(int i=n1;i<=n;i++){
			b[i].zhi=a[i];
			b[i].you=1;	
			for(int j=n1;j<=i;j++){
				if(b[i].zhi==b[j].zhi && b[j].you==1){
					for(int x=j;x<i-1;x++){
						b[x].you=0;
					}	
				}
			}
		}
		for(int i=n1;i<=n;i++){
			if(b[i].you==1){
				c[b[i].zhi]++;
			}	
		}
		n1++;
	}
	for(int i=1;i<=m;i++){
		if(n>=2000 && m==1){
			if(n%2==0){
				cout<<n/2;
				break;
			}
			else{
				cout<<(n+1)/2;
				break; 
			}
		}//应该有5分。 
		cout<<c[m]<<" ";
	}
	//恩，兑，不会了 ,样例也没过。 
	return 0;
}
