#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
char c[N];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int cnt=1;
	int dif=0,da=0;
	char dc;
	int flag=0;
	long long sum=0;
	bool e=1;
	bool x=1;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if ((c[i]!=c[i-1])&&i>=2){
			e=0;
		}
		if ((a[i]!=a[i-1])&&i>=2){
			x=0;
		}
		sum+=a[i];
	}
	if (e){
		cout<<0;
		return 0;
	}
	int now=n;
	if (x){
		for (int i=1;i<=n/2;i++){
			if (c[i]!=c[now]){
				dif++;
			}
			now--;
		}
		ans=dif*a[n];
		cout<<ans;
		return 0;
	}
	string s;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	for (int i=1;i<=s.length()/2;i++){
		if (s[i]!=s[now]){
			ans++;
		}
		now--;
	}
	/*for (int i=1;i<=mid;i++){
		if (flag==1){
			if (c[now]!=dc){
				ans+=da;
			}
			if (c[now]==dc){
				
				if (a[now]>=da){
					a[now]-=da;
					da=0;
				}
				else{
					while (a[now]<da){
						if (c[now]!=dc){
							ans+=da;
						}
						da-=a[now];
						now--;
					}
					da==0;
				}
				continue;
			}
			else{
				
			}
		}
		else if (flag==2){
			if (c[i]!=dc){
				ans+=da;
			}
			if (a[i]>=da){
				a[i]-=da;
				da=0;
			}
			else{
				while (a[i]<da){
					if (c[i]!=dc){
						ans+=da;
					}
					da-=a[i];
					i++;
				}
				da=0;
			}
		}
		if (a[i]==a[now]&&c[i]==c[now]){
			flag=0;
			now--;
			da=0;
			continue;
		}
		if (c[i]==c[now]){
			if (da!=0){
				ans+=da;
			}
			if (a[i]>a[now]){
				da=a[i]-a[now];
				dc=c[i];
				flag=1;
			}
			else{
				da=a[now]-a[i];
				dc=c[i];
				flag=2;
			}
		}
		else{
			if (da==0){
				if (a[i]>a[now]){
					da=a[now];
					dc=c[i];
					flag=1;
				}
				else{
					da=a[i];
					dc=c[now];
					flag=2;
				}
			}
			else{
				ans+=da;
				if (a[i]>a[now]){
					da=a[now];
					dc=c[i];
					flag=1;
				}
				else{
					da=a[i];
					dc=c[now];
					flag=2;
				}
			}
		}
		now--;
	}
	ans+=da;
	if (sum%2!=0){
		ans--;
	}
	cout<<ans;
	*/
	cout<<ans;
	return 0;
}
