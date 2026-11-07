#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans,k;
void solve1(){
	for(int i=1;i<=n;i++){
		ans=max(ans,a[i]);
	}
	cout<<ans;
}
void solve2(){
	ans=a[1];
	for(int i=2;i<=n;i++){
		ans&=a[i];
	}
	cout<<ans;
}
void solve3(){
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			ans=max(ans,a[i]&a[j]);
	cout<<ans;
}
void solve4(){
	if(m==3)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					ans=max(ans,a[i]&a[j]&a[k]);
	if(m==4)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						ans=max(ans,a[i]&a[j]&a[k]&a[l]);
	if(m==5)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]);
	if(m==6)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]);
	if(m==7)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]);
	if(m==8)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]);
	if(m==9)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]);
	if(m==10)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]);
	if(m==11)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												for(int u=t+1;u<=n;u++)
													ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]);
	if(m==12)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												for(int u=t+1;u<=n;u++)
													for(int v=u+1;v<=n;v++)
														ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]);
	if(m==13)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												for(int u=t+1;u<=n;u++)
													for(int v=u+1;v<=n;v++)
														for(int w=v+1;w<=n;w++)
															ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]);
	if(m==14)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												for(int u=t+1;u<=n;u++)
													for(int v=u+1;v<=n;v++)
														for(int w=v+1;w<=n;w++)
															for(int x=w+1;x<=n;x++)
																ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]);
	if(m==15)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												for(int u=t+1;u<=n;u++)
													for(int v=u+1;v<=n;v++)
														for(int w=v+1;w<=n;w++)
															for(int x=w+1;x<=n;x++)
																for(int y=x+1;y<=n;y++)
																	ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]);
	if(m==16)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												for(int u=t+1;u<=n;u++)
													for(int v=u+1;v<=n;v++)
														for(int w=v+1;w<=n;w++)
															for(int x=w+1;x<=n;x++)
																for(int y=x+1;y<=n;y++)
																	for(int z=y+1;z<=n;z++)
																		ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]);
	if(m==17)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												for(int u=t+1;u<=n;u++)
													for(int v=u+1;v<=n;v++)
														for(int w=v+1;w<=n;w++)
															for(int x=w+1;x<=n;x++)
																for(int y=x+1;y<=n;y++)
																	for(int z=y+1;z<=n;z++)
																		for(int b=z+1;b<=n;b++)
																			ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]&a[b]);
	if(m==18)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												for(int u=t+1;u<=n;u++)
													for(int v=u+1;v<=n;v++)
														for(int w=v+1;w<=n;w++)
															for(int x=w+1;x<=n;x++)
																for(int y=x+1;y<=n;y++)
																	for(int z=y+1;z<=n;z++)
																		for(int b=z+1;b<=n;b++)
																			for(int c=b+1;c<=n;c++)
																				ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]&a[b]&a[c]);																	
	if(m==19)
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int l=k+1;l<=n;l++)
						for(int o=l+1;o<=n;o++)
							for(int p=o+1;p<=n;p++)
								for(int q=p+1;q<=n;q++)
									for(int r=q+1;r<=n;r++)
										for(int s=r+1;s<=n;s++)
											for(int t=s+1;t<=n;t++)
												for(int u=t+1;u<=n;u++)
													for(int v=u+1;v<=n;v++)
														for(int w=v+1;w<=n;w++)
															for(int x=w+1;x<=n;x++)
																for(int y=x+1;y<=n;y++)
																	for(int z=y+1;z<=n;z++)
																		for(int b=z+1;b<=n;b++)
																			for(int c=b+1;c<=n;c++)
																				for(int d=c+1;d<=n;d++) 
																					ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]&a[b]&a[c]&a[d]);
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		k++;
	}
	if(m==1){
		solve1();
	}
	else if(m==n){
		solve2();
	}
	else if(m==2){
		solve3();
	}
	else if(n<=20){
		solve4();
	}
	else{
		cout<<1;
	}
	return 0;
} 
