#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N],ans=-100;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	if(m==1){
		sort(a+1,a+1+n);
		cout << a[1];
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout << ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
				ans=max(ans,a[i]&a[j]&a[k]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==4){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==5){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
					for(int w=q+1;w<=n;w++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==6){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
					for(int w=q+1;w<=n;w++)
					for(int e=w+1;e<=n;e++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==7){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
					for(int w=q+1;w<=n;w++)
					for(int e=w+1;e<=n;e++)
					for(int r=e+1;r<=n;r++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==8){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
					for(int w=q+1;w<=n;w++)
					for(int e=w+1;e<=n;e++)
					for(int r=e+1;r<=n;r++)
					for(int t=r+1;t<=n;t++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]&a[t]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==9){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
					for(int w=q+1;w<=n;w++)
					for(int e=w+1;e<=n;e++)
					for(int r=e+1;r<=n;r++)
					for(int t=r+1;t<=n;t++)
					for(int y=t+1;y<=n;y++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]&a[t]&a[y]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==10){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
					for(int w=q+1;w<=n;w++)
					for(int e=w+1;e<=n;e++)
					for(int r=e+1;r<=n;r++)
					for(int t=r+1;t<=n;t++)
					for(int y=t+1;y<=n;y++)
					for(int u=y+1;u<=n;u++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]&a[t]&a[y]&a[u]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==11){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
					for(int w=q+1;w<=n;w++)
					for(int e=w+1;e<=n;e++)
					for(int r=e+1;r<=n;r++)
					for(int t=r+1;t<=n;t++)
					for(int y=t+1;y<=n;y++)
					for(int u=y+1;u<=n;u++)
					for(int o=u+1;o<=n;o++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]&a[t]&a[y]&a[u]&a[o]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	if(m==12){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
					for(int w=q+1;w<=n;w++)
					for(int e=w+1;e<=n;e++)
					for(int r=e+1;r<=n;r++)
					for(int t=r+1;t<=n;t++)
					for(int y=t+1;y<=n;y++)
					for(int u=y+1;u<=n;u++)
					for(int o=u+1;o<=n;o++)
					for(int p=o+1;p<=n;p++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]&a[t]&a[y]&a[u]&a[o]&a[p]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	sort(a+1,a+1+n);
	cout << a[n-m+1];
	return 0;
}
