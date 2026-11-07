#include<bits/stdc++.h>
#define endline cout<<"\n"
#define N 200005
using namespace std;
int n,m,f,maxx,cnt;
long long ans;
int a[N];
vector<int> vec[31]; 
set<int> s;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}for(int i=30;i>=0;i--){
		if(maxx>(1<<i)){
			f=i+1;
			break; 
		}
	}sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		for(int j=f;j>=0;j--){
			if(a[i]>=(1<<j)){
				a[i]-=(1<<j);
				vec[j].push_back(i);
			}
		}
	}int ind=-1;
//	for(int i=0;i<=f;i++){
//		cerr<<i<<" "<<vec[i].size();
//		endline;
//	}
	for(int i=f;i>=0;i--){
		if(vec[i].size()<m) continue;
		else{
			ind=i;
			ans+=(1LL<<i);
			cnt=1;
			break;
		}
	}if(ind==-1){
		cout<<0;
		return 0;
	}for(int i=0;i<vec[ind].size();i++) s.insert(vec[ind][i]);
	for(int i=ind-1;i>=0;i--){
		set<int> s2;
		if(vec[i].size()<m) continue;
		for(int j=0;j<vec[i].size();j++){
			if(s.count(vec[i][j]))
				s2.insert(vec[i][j]);
		}if(s2.size()>=m){
			ans+=(1LL<<i);
			s=s2;
			cnt++;
		}
	}cout<<ans;
	return 0;
}