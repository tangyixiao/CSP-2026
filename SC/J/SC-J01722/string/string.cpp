#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
struct Hui{
	ll a=0;
	char c;
}a[N]={};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,maxa=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].c;
		maxa=max(maxa,a[i].a);
	}
//	for(int i=1;i<=n;i++){
//		cout<<a[i].c<<" "<<a[i].a<<"\n";
//	}
	Hui cost;
	ll ans=0;
	int f=-1;
	if(maxa<=500){
		//cout<<"tip1:\n";
		string s=" ";
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i].a;j++){
				s+=a[i].c;
			}
		}
		//cout<<s;
		ll l=s.size()-1;
		for(int i=1;i<=l/2+1;i++){
			//cout<<s[i]<<" "<<s[l+1-i]<<"\n";
			if(s[i]!=s[l+1-i]){
				s[l+1-i]=s[i];
				ans++;
			}
		}
		//cout<<"\n"<<s<<"\n";
		cout<<ans;
		return 0;
	}
	//cout<<"tip2:\n";
	for(int l=1,r=n;l<=r;){
		if(cost.a==0){
			if(a[l].c==a[r].c){
				if(a[l].a>a[r].a){
					cost.c=a[l].c;
					cost.a=a[l].a-a[r].a;
					f=1;
					r--;	
				}else if(a[l].a<a[r].a){
					cost.c=a[r].c;
					cost.a=a[r].a-a[l].a;
					f=0;
					l++;
				}else{
					f=-1;
					l++,r--;
				}
			}else{
				if(a[l].a>a[r].a){
					cost.c=a[l].c;
					cost.a=a[l].a-a[r].a;
					ans+=a[r].a;
					f=1;
					r--;	
				}else if(a[l].a<a[r].a){
					ans+=a[l].a;
					cost.c=a[r].c;
					cost.a=a[r].a-a[l].a;
					f=0;
					l++;
				}else{
					cost.a=0;
					ans+=a[l].a;
					f=-1;
					l++,r--;
				}
			}	
		}else{
			if(f==1){
				if(cost.c==a[r].c){
					if(cost.a>a[r].a){
						cost.a=cost.a-a[r].a;
						f=1;
						r--;	
					}else if(cost.a<a[r].a){
						cost.c=a[r].c;
						cost.a=a[r].a-cost.a;
						f=0;
						l++;
					}else{
						cost.a=0;
						f=-1;
						l++,r--;
					}
				}else{
					if(cost.a>a[r].a){
						cost.a=cost.a-a[r].a;
						ans+=a[r].a;
						f=1;
						r--;	
					}else if(cost.a<a[r].a){
						ans+=cost.a;
						cost.c=a[r].c;
						cost.a=a[r].a-cost.a;
						f=0;
						l++;
					}else{
						ans+=cost.a;
						cost.a=0;
						f=-1;
						l++,r--;
					}
				}	
			}else if(f==0){
				if(a[l].c==cost.c){
					if(a[l].a>cost.a){
						cost.c=a[l].c;
						cost.a=a[l].a-cost.a;
						f=1;
						r--;	
					}else if(a[l].a<cost.a){
						cost.c=a[r].c;
						cost.a=cost.a-a[l].a;
						f=0;
						l++;
					}else{
						cost.a=0;
						f=-1;
						l++,r--;
					}
				}else{
					if(a[l].a>cost.a){
						ans+=cost.a;
						cost.c=a[l].c;
						cost.a=a[l].a-cost.a;
						f=1;
						r--;	
					}else if(a[l].a<a[r].a){
						ans+=a[l].a;
						cost.c=a[r].c;
						cost.a=cost.a-a[l].a;
						f=0;
						l++;
					}else{
						cost.a=0;
						ans+=cost.a;
						f=-1;
						l++,r--;
					}
				}	
			}
		}
//		cout<<cost.c<<" "<<cost.a<<" "<<f<<"\n";
//		cout<<a[l].c<<" "<<a[l].a<<" "<<l<<"\n";
//		cout<<a[r].c<<" "<<a[r].a<<" "<<r<<"\n"<<"\n";
	}
	cout<<ans;
	return 0;
} 