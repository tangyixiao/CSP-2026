#include<bits/stdc++.h>
using namespace std;
long long a[900000],b[900000];
char c[900000],d[900000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		a[i]+=a[i-1];
	}
	int k=a[n]/2;
	int p=0,q=0;
	for(int i=n;i>0;i--){
		if(a[i]>k){
			q++;
			if(a[i-1]>=k)
			b[q]+=a[n]-a[i-1];
			else
			b[q]+=a[n]-k;
			d[q]=c[i];
		}
		else{
			if(a[i]+1<=k){
				p=i+1;
				a[i+1]=k;
			}
			else
			 p=i;
			break;
		}
	}
	int i=1,j=1;
	while(i<=p||j<=q)
	{
		if(c[i]==d[j]){
			if(a[i]<b[j])
			 i++;
			else if(a[i]>b[j]){
				j++;
			}
			else{
				i++;j++;
			}
		}
		else{
			if(a[i]>=b[j]){
				if(b[j-1]>=a[i-1]){
					s+=b[j]-b[j-1];
				}
				else{
					s+=b[j]-a[i-1];
				}
				if(a[i]==b[j]){
					i++;j++;
				}
				else
				 j++;
			}
			else{
				if(a[i-1]>=b[j]){
					s+=a[i]-a[i-1];
				}
				else{
					s+=a[i]-b[j-1];
				}
				i++;
			}
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
