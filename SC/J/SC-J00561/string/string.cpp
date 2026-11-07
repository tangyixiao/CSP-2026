#include<bits/stdc++.h>
using namespace std;
struct Ans{
	long long s;char q;
}b[200005],b1[200005];
long long n,a[200005],a1[200005],sum,j=1,f,g,ans=0,m,ans1;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];sum+=a[i];
		a1[i]=a[i];
	}
	m=sum/2;
	for(long long i=0,k=1;k<=n;k++){
		if(i>=m) break;
		if(i+a[k]<=sum/2){
			b[j].s=a[k];b[j].q=c[k];
			i+=a[k];j++;g=k+1;
		}
		else if(i+a[k]>sum/2){
			b[j].s=sum/2-i;b[j].q=c[k];
			j++;g=k;f=a[k]-sum/2+i;i=sum/2;
			a[k]=f;
		}
	}
	j--;
	if(sum%2){
		m++;
		a[g]--;
	}
	for(long long i=m,k=g;k<=n;){
		if(i>sum) break;
		if(c[k]!=b[j].q){
			if(a[k]==b[j].s){
				ans+=a[k];
				a[k]=0;b[j].s=0;j--;k++;
			}
			else if(a[k]>b[j].s){
				ans+=b[j].s;
				a[k]-=b[j].s;b[j].s=0;j--;
			}
			else if(a[k]<b[j].s){
				ans+=a[k];
				b[j].s-=a[k];a[k]=0;k++;
			}
		}
		else if(c[k]==b[j].q){
			if(a[k]==b[j].s){
				a[k]=0;b[j].s=0;j--;k++;
			}
			else if(a[k]>b[j].s){
				a[k]-=b[j].s;b[j].s=0;j--;
			}
			else if(a[k]<b[j].s){
				b[j].s-=a[k];a[k]=0;k++;
			}
		}
	}
	//___________________________________________________
	j=0;m=sum/2;
	for(long long i=0,k=n;k>=1;k--){
		if(i>=m) break;
		if(i+a1[k]<=sum/2){
			b1[j].s=a1[k];b1[j].q=c[k];
			i+=a1[k];j++;g=k-1;
		}
		else if(i+a1[k]>sum/2){
			b1[j].s=sum/2-i;b1[j].q=c[k];
			j++;g=k;f=a1[k]-sum/2+i;i=sum/2;
			a1[k]=f;
		}
	}
	j--;
	if(sum%2){
		m++;
		a1[g]--;
	}
	for(long long i=m,k=g;k>=1;){
		if(i>sum) break;
		if(a1[k]==0) k--;
		if(c[k]!=b1[j].q){
			if(a1[k]==b1[j].s){
				ans1+=a1[k];
				a1[k]=0;b1[j].s=0;j--;k--;
			}
			else if(a1[k]>b1[j].s){
				ans1+=b1[j].s;
				a1[k]-=b1[j].s;b1[j].s=0;j--;
			}
			else if(a1[k]<b1[j].s){
				ans1+=a1[k];
				b1[j].s-=a1[k];a1[k]=0;k--;
			}
		}
		else if(c[k]==b1[j].q){
			if(a1[k]==b1[j].s){
				a1[k]=0;b1[j].s=0;j--;k--;
			}
			else if(a1[k]>b1[j].s){
				a1[k]-=b1[j].s;b1[j].s=0;j--;
			}
			else if(a1[k]<b1[j].s){
				b1[j].s-=a1[k];a1[k]=0;k--;
			}
		}
	}
	cout<<min(ans,ans1);
	return 0;
}