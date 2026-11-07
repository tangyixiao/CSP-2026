#include<bits/stdc++.h>
using namespace std;
const int N=(1e5+10)*2;
int n;
long long a[N];
char c[N];
long long sum=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	int m=n,i=1;
	while(i<=m){
		int x=int(c[i]);
		int y=int(c[m]);
		if(x==y){
			if(a[i]==a[m]){
				a[i]=0;
				a[m]=0;
				i++;
				m--;
			}
			else{
				if(a[i]>a[m]){
					a[i]-=a[m];
					a[m]=0;
					m--;
				}
				else{
					a[m]-=a[i];
					a[i]=0;
					i++;
				}
			}
		}
		else{
			if(a[i]==a[m]){
				sum+=a[i];
				i++;
				m--;
			}
			else{
				if(a[i]>a[m]){
					sum+=a[m];
					a[i]-=a[m];
					a[m]=0;
					m--;
				}
				else{
					sum+=a[i];
					a[m]-=a[i];
					a[i]=0;	
					i++;
				}
			}
		}
	}
	cout<<sum;
	return 0;
}