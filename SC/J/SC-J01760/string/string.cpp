#include<bits/stdc++.h>
using namespace std;
long long n,ans;
struct g{
	char c;
	long long a;
};
vector<g> f;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		char ci;
		long long ai;
		cin>>ai>>ci;
		f.push_back({ci,ai});
	}
	long long l=0,r=f.size()-1;
	while(l<r){
		//cout<<f[l].c<<":"<<f[l].a<<":::::"<<f[r].c<<":"<<f[r].a<<endl;
		if(f[l].c==f[r].c){
			if(f[l].a>f[r].a){
				
				f[l].a-=f[r].a;
				r--;
			}else if(f[l].a==f[r].a){
				l++;
				r--;
			}else{
				
				f[r].a-=f[l].a;
				l++;
				//cout<<"!!!"<<f[r].a<<"-"<<f[l].a<<"ee";
			}
		}else{
			if(f[l].a>f[r].a){
				
				f[l].a-=f[r].a;
				ans+=f[r].a;
				r--;
			}else if(f[l].a==f[r].a){
				
				ans+=f[l].a;
				l++;
				r--;
			}else{
				
				f[r].a-=f[l].a;
				ans+=f[l].a;
				l++;
			}
		}
		//cout<<ans<<endl;
	}
	cout<<ans;
	return 0;
}