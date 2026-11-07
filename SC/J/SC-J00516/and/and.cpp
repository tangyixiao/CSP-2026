#include<bits/stdc++.h>
using namespace std;
int a[200006];
vector<int> w[31];
bool cmp(int c_a,int c_b){
	return c_a>c_b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	vector<int>tofind,nextfind;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=31;j++){
			if((a[i]>>j)%2) w[j].push_back(i);
		}
		tofind.push_back(a[i]);
	}
	int answer=0;
	for(int i=30;i>=0;i--){
		if((int)w[i].size()<m) continue;
		int cnt=0;
		for(int j=0;j<(int)tofind.size();j++){
			if((tofind[j]>>j)%2){
				nextfind.push_back(tofind[j]);
				cnt++;
			}
		}
		if(cnt>=m){
			answer+=(1<<i);
			tofind=nextfind;
		}
		nextfind.clear();
	}
	cout<<answer;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*


*/