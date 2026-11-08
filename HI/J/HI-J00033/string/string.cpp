#include<bits/stdc++.h>
using namespace std;
long long len,cnt,f=0;
char s[1000005];
long long a[200005],n,ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		if(a[i]>=1e6)f=1;
		if(f==1)continue;
		len+=a[i];
		for(int j=1;j<=a[i];j++){
			s[++cnt]=c[i];
		}
	}
	if(f==0){
		for(int i=1;i<=len/2;i++){
			if(s[i]!=s[len-i+1])ans++;
		}
		cout << ans;
		return 0;
	}
	char last;
	long long i=1,j=n,l=0;
	bool f=0;
	while(i<=j){
		if(l){
			if(f==0){
				if(c[j]!=last){
					if(l<a[j]){
						ans+=l;
						last=c[j];
						l=a[j]-l;
						f=1;
					}
					else if(a[j]<l){
						ans+=a[j];
						l-=a[j];
					}else{
						l=0;
					}
				}else{
					if(l<a[j]){
						l=a[j]-l;
						f=1;
					}else if(l>a[j]){
						l=l-a[j];
					}else{
						l=0;
					}
				}
				j--;
			}else{
				if(c[i]!=last){
					if(l<a[i]){
						ans+=l;
						last=c[i];
						l=a[i]-l;
						f=1;
					}
					else if(a[i]<l){
						ans+=a[i];
						l-=a[i];
					}else{
						l=0;
					}
				}else{
					if(l<a[i]){
						l=a[i]-l;
						f=0;
					}else if(l>a[i]){
						l=l-a[i];
					}else{
						l=0;
					}
				}
				i++;
			}
		}
		else if(c[i]!=c[j]){
			if(a[i]<a[j]){
				l=a[j]-a[i];
				last=c[j];
				f=1;
			}
			else if(a[j]<a[i]){
				l=a[i]-a[j];
				last=c[i];
				f=0;
			}else{
				l=0;
				f=0;
			}ans+=min(a[i],a[j]);
			i++;
			j--;
		}else{
			l=0;
			if(a[i]!=a[j]){
				l=max(a[i],a[j])-min(a[i],a[j]);
				last=c[i];
			}
			i++;
			j--;
		}
	}
	cout << ans;
	return 0;
}
