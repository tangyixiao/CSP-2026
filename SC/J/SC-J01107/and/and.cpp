#include<bits/stdc++.h>
using namespace std;
int a[200005],f[2000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int s;
	if(m==1){
		s=a[n];
	}
	else if(m==n){
		s=a[1];
		for(int i=2;i<=n;i++){
			s=s&a[i];
		}
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				f[i*j]=a[i]&a[j];
			}
		}
		sort(f+1,f+n*n+1);
		s=f[n*n];
	}
	else if(a[n]<=4){
		int q1=0,q2=0,q3=0,q4=0;
		for(int i=n;i>=1;i--){
			if(a[i]==4) q4++;
			else if(a[i]==3) q3++;
			else if(a[i]==2) q2++;
			else if(a[i]==1) q1++;
		}
		if(q4>=m) s=4;
		else if(q3>=m) s=3;
		else if(q2>=m) s=2;
		else if(q1>=m) s=1;
		else s=0;
	}
	else cout<<0;
	cout<<s;
}