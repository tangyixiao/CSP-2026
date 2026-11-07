#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int num;
	char c;
};
int n,maxx=0,sum=0;
vector<node> a;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		int x;
		char cc;
		cin >> x >> cc;
		if(a.size()>0&&cc==a[a.size()-1].c){
			a[a.size()-1].num+=x;
		}
		else{
			a.push_back({x,cc});
		}
		maxx=max(maxx,x);
		sum+=x;
	}
	if(a.size()==0){
		cout << 0;
	}
	else if(maxx<=500){
		int l=0,r=a.size()-1;
		int lres=a[0].num,rres=a[a.size()-1].num;
		int ans=0;
		sum/=2;
		while(sum>0){
			if(a[l].c!=a[r].c){
				ans++;
			}
			lres--,rres--;
			if(lres==0){
				l++;
				lres=a[l].num;
			}
			if(rres==0){
				r--;
				rres=a[r].num;
			}
			sum--;
		}
		cout << ans;
	}
	else{
		int l=0,r=a.size()-1,lres=0,rres=0;
		int ans=0;
		while(l<r){
			if(lres>0){
				if(lres>a[r].num){
					if(a[l].c!=a[r].c){
						ans+=a[r].num;
					}
					lres-=a[r].num;
					r--;
				}
				else if(lres==a[r].num){
					if(a[l].c!=a[r].c){
						ans+=lres;
					}
					l++;
					r--;
				}
				else if(lres<a[r].num){
					if(a[l].c!=a[r].c){
						ans+=lres;
					}
					rres=a[r].num-lres;
					lres=0;
					l++;
				}
			}
			else if(rres>0){
				if(rres>a[l].num){
					if(a[l].c!=a[r].c){
						ans+=a[l].c;
					}
					rres-=a[l].num;
					l++;
				}
				else if(rres==a[l].num){
					if(a[l].c!=a[r].c){
						ans+=rres;
					}
					l++;
					r--;
				}
				else if(rres<a[l].num){
					if(a[l].c!=a[r].c){
						ans+=rres;
					}
					lres=a[l].num-rres;
					rres=0;
					r--;
				}
			}
			else{
				if(a[l].num<a[r].num){
					if(a[l].c!=a[r].c){
						ans+=a[l].num;
					}
					rres=a[r].num-a[l].num;
					l++;
				}
				else if(a[l].num==a[r].num){
					if(a[l].c!=a[r].c){
						ans+=a[l].num;
					}
					l++;
					r--;
				}
				else if(a[l].num>a[r].num){
					if(a[l].c!=a[r].c){
						ans+=a[r].num;
					}
					lres=a[l].num-a[r].num;
					r--;
				}
			}
		}
		cout << ans;
	}
	
	
	return 0;
}
