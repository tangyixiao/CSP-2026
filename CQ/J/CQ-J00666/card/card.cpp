#include <iostream>
#include <stack>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int n,m;
    cin>>n>>m;
    int cd[n+1];
    int ans[m+1];
    for(int i=1;i<=m;i++)ans[i]=0;
    cd[0]=0;
    stack<int> gs;
    for(int i=1;i<=n;i++)cin>>cd[i];
    for(int k=1;k<=n;k++){
        bool tp[m+1];
        for(int j=1;j<=m;j++)tp[j]=0;
        for(int j=k;j<=n;j++){
            if(!tp[cd[j]]){
            	gs.push(cd[j]);
            	tp[gs.top()]=1;
			}else while(gs.top()!=cd[j]){
                tp[gs.top()]=0;
                gs.pop();
            }
        }
        for(int j=1;j<=m;j++)if(tp[j])ans[j]++;
    }
    for(int j=1;j<=m;j++)printf("%d ",ans[j]);
    return 0; 
}
