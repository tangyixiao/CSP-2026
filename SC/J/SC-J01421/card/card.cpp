#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1,0);
	for(int i=1;n>=i;i++){
		cin>>a[i];
	}
	vector<int> ans(m+1,0);
	for(int i=1;n>=i;i++){
		map<int,int> f;
		vector<bool> ok(n+1,false);
		for(int j=i;n>=j;j++){
			if(f.count(a[j])!=0){
				if(f[a[j]]!=-1){
					for(int z=f[a[j]];j>z;z++){
						ok[z]=true;
						f[a[z]]=-1;
					}
					f[a[j]]=j;
				}else{
					f[a[j]]=j;
				}
			}else{
				f[a[j]]=j;
			}
		}
		for(int j=i;n>=j;j++){
			if(ok[j]==false){
				ans[a[j]]++;
			}
		}
	}
	for(int i=1;m>=i;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}