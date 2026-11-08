#include<bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 5;
int a[N] = {};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans = 0;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(m == 1){
		for(int i=1;i<=n;i++){
			ans = max(ans,a[i]);
		}
		printf("%d",ans);
		fclose(stdin);
		fclose(stdout);
		return 0;
	}else if(m == 2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i == j)
					continue;
				ans = max(ans,a[i] & a[j]);
			}
		}
		printf("%d",ans);
		fclose(stdin);
		fclose(stdout);
		return 0;
	}else if(m == n - 1){
		for(int i=1;i<=n;i++){
			int num = 0;
			for(int j=1;j<=n;j++){
				if(i == j)
					continue;
				if(num == 0)
					num = a[j];
				else
					num = num & a[j];
			}
			ans = max(ans,num);
		}
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
