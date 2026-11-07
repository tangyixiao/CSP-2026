#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n),cnt(m+1,0);
	vector<bool> tcnt(m+1,false);
	stack<int> s;
	for(int i=0;i<n;i++)
        cin>>a[i];
	for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(tcnt[a[j]]>0)
                while(s.top()!=a[j]){
                    tcnt[s.top()]=false;
                    s.pop();
                }
            else{
                tcnt[a[j]]=true;
                s.push(a[j]);
            }
        }
        for(int j=0;j<m;j++)
            if(tcnt[j]){
                cnt[j]++;
                tcnt[j]=false;
            }
	}
	for(int i=1;i<=m;i++)
        cout<<cnt[i]<<' ';
    return 0;
}
