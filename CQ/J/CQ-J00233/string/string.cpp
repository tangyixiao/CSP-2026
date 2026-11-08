#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int n;long long ans;
int num[MAXN];char lett[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %c",&num[i],&lett[i]);
	}
	int i=1,j=n;
	while(i<j){
		if(lett[i]==lett[j]){
			if(num[i] >= num[j]) {
				num[i]-=num[j];
				j--;
			}
			else{
				num[j]-=num[i];
				i++;
			}
		}
		else{
			if(num[i] >= num[j]) {
				num[i]-=num[j];
				ans+=num[j];
				j--;
			}
			else{
				num[j]-=num[i];
				ans+=num[i];
				i++;
			}
		}
	}
	printf("%lld",ans);
	return 0;
} 
