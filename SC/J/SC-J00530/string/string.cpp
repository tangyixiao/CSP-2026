#include<bits/stdc++.h>
using namespace std;
long long  n,a[200005],ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int gs=0;
	char yu='*';
	bool zy=0;
	int last=(n+1);
	for(int i=1;i<=last/2;i++){
		if(gs!=0){
			if(zy==0){
				if(gs>=a[last-i]){
					if(yu!=c[last-i])ans+=a[last-i];
					gs-=a[last-i];
					last--;
				}else{
					a[last-i]-=gs;
					if(yu!=c[last-i])ans+=gs;
					gs=0;
				}
			}else{
				if(gs>=a[i]){
					if(yu!=c[i])ans+=a[i];
					gs-=a[i];
					i++;
				}else{
					a[i]-=gs;
					if(yu!=c[i])ans+=gs;
					gs=0;
				}
			}
		}
		if(i>last){
			break;
		}
		if(c[i]!=c[last-i]){
			if(a[i]>a[last-i]){
				gs=a[i]-a[last-i];
				yu=c[i];
				zy=0;
				ans+=a[last-i];		
			}else if(a[i]<a[last-i]){
				gs=a[last-i]-a[i];
				yu=c[last-i];
				zy=1;
				ans+=a[i]; 
			}else{
				gs=0;
				ans+=a[i];
			}
		}else{
			if(a[i]>a[last-i]){
				gs=a[i]-a[last-i];
				yu=c[i];
				zy=0;	
			}else if(a[i]<a[last-i]){
				gs=a[last-i]-a[i];
				yu=c[last-i];
				zy=1;
			}else{
				gs=0;
			}
		}
	}
	cout<<ans;
	return 0;
} 