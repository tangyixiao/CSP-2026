#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200005],maxn,max2,max3,max4,max5,max6,max7,ans,x=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
	    cin>>a[i];
	    maxn=max(a[i],maxn);
    }
    if(m==1){
    	cout<<maxn;
    	return 0;
	}
	if(m==2){
		for (int i=2;i<=n;i++)
		    for (int j=1;j<i;j++)
		        max2=max(a[i]&a[j],max2);
		cout<<max2;
		return 0;
	}
	if(m==3){
		for (int i=3;i<=n;i++)
		    for (int j=2;j<i;j++)
			    for (int k=1;k<j;k++)
			        max3=max(a[i]&a[j]&a[k],max3);
		cout<<max3;
		return 0;
	}
	if(m==4){
		for (int i=4;i<=n;i++)
		    for (int j=3;j<i;j++)
			    for (int k=2;k<j;k++)
				    for (int l=1;l<k;l++)
				        max4=max(a[i]&a[j]&a[k]&a[l],max4);
		cout<<max4;
		return 0;
	}
	if(m==5){
		for (int i=5;i<=n;i++)
		    for (int j=4;j<i;j++)
			    for (int k=3;k<j;k++)
				    for (int l=2;l<k;l++)
					    for (int p=1;p<l;p++)
					        max5=max(a[i]&a[j]&a[k]&a[l]&a[p],max5);
		cout<<max5;
		return 0;
	}
	if(m==6){
		for (int i=6;i<=n;i++)
		    for (int j=5;j<i;j++)
			    for (int k=4;k<j;k++)
				    for (int l=3;l<k;l++)
					    for (int p=2;p<l;p++)
						    for (int q=1;q<p;q++)
						        max6=max(a[i]&a[j]&a[k]&a[l]&a[p]&a[q],max6);
		cout<<max6;
		return 0;
	}
	if(m==7){
		for (int i=7;i<=n;i++)
		    for (int j=6;j<i;j++)
			    for (int k=5;k<j;k++)
				    for (int l=4;l<k;l++)
					    for (int p=3;p<l;p++)
						    for (int q=2;q<p;q++)
							    for (int r=1;r<q;r++)
							        max7=max(a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r],max7);
		cout<<max7;
		return 0;
	}
	if(m==n){
		for (int i=1;i<=n;i++)
		    ans&=a[i];
		cout<<ans;
		return 0;
	}
	for (int i=1;i<=m;i++)
	    ans&=a[n-i+1];
	cout<<ans;
	return 0;
}