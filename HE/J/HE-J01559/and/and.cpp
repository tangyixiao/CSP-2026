#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	long long n,t;
	cin>>n>>t;
	long long max=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	if(t==1)
	{
		cout<<max;
		return 0;
	}
	max=0;
	if(t==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int c=a[i]&a[j];
				//cout<<a[i]<<" "<<a[j]<<" "<<c<<endl;
				if(c>max) max=c;
			}
		}
	}
	if(t==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					int c=a[i]&a[j]&a[k];
					//cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<c<<endl;
					if(c>max) max=c;
				}
			}
		}
	}
	if(t==4){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int w=k+1;w<=n;w++){
						int c=a[i]&a[j]&a[k]&a[w];
						if(c>max) max=c;
					}
				}
			}
		}
	}
	if(t==5){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int w=k+1;w<=n;w++){
						for(int p=w+1;p<=n;p++){
						int c=a[i]&a[j]&a[k]&a[w]&a[p];
						if(c>max) max=c;
						}
					}
				}
			}
		}
	}
	cout<<max;
	return 0;
}
