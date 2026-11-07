#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<int> a;
    vector<int> answer(m+5,0);
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	a.push_back(x);
	}
	for(int i=0;i<n;i++){
		vector<int> t;
		vector<bool> u(m+5,false);
		for(int j=i;j<n;j++){
			if(u[a[j]]==false){
				t.push_back(a[j]);
				u[a[j]]=true;
				continue;
			}else{
				vector<int> q;
				bool c=false;
				for(int p=0;p<t.size();p++){
					if(c){
						u[t[p]]=false;
						continue;
					}
					q.push_back(t[p]);
					u[t[p]]=true;
					if(t[p]==a[j]){
						c=true;
						continue;
					}
				}
				t=q;
			}
		}
		for(int j=0;j<t.size();j++){
			answer[t[j]]++;
//			cout<<t[j]<<" ";
		}
	}
	for(int i=1;i<=m;i++){
		cout<<answer[i]<<" ";
	}
	return 0;
}