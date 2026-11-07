#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int a[100005];
    int ans[100005];
    string as;
	cin>>as;
	int tt=1;
	for(int i=0;i<=as.size()-1;i++){
		if(as[i]>='0'&&as[i]<='9'){
			a[tt]=as[i]-'0';
			tt++;
		}
	}
    int dq[100005];
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=1;k<=sizeof(dq)-sizeof(dq[0]);k++){
                if(a[j]==dq[k]){
                    for(int s=k;s<=sizeof(dq)-sizeof(dq[0]);s++){
                        dq[s]=0;
                    }
                }
            }
            dq[sizeof(dq)-sizeof(dq[0])]+=a[j];
        }
        for(int r=1;r<=sizeof(dq)-sizeof(dq[0]);r++){
            ans[r]++;
        }
    }
    for(int i=1;i<=sizeof(ans)-sizeof(ans[0]);i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

