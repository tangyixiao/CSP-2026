#include<bits/stdc++.h>
using namespace std;
#define int long long
// vector<pair<int,int>>v[500005];
// vector<int>a[500005];
// map<int,int> t[500001];
int x[500005];
map<int,int>v[505];
vector<int>u[500005];
int g[505][505];
int dt[505][505];
signed main(){
	freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
    int c,n,m,d,q;
    cin>>c>>n>>m>>d>>q;
    for(int i=1;i<=m;i++){
        cin>>x[i];
    }
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        map<int,int>op;
        for(int j=1;j<=k;j++){
            int x,y;
            cin>>x>>y;
            op[x]=y;
            u[x].push_back(i);
        }
        v[i]=op;
    }
    for(int i=1;i<=m;i++){
    	//cout<<i<<"[";
        for(int j=0;j<u[i].size();j++){
            for(int k=j+1;k<u[i].size();k++){
                int a=v[u[i][j]][i];
                a+=v[u[i][k]][i];
                //cout<<u[i][j]<<":"<<u[i][k]<<";"<<a<<" ";
                g[u[i][j]][u[i][k]]=a;
                g[u[i][k]][u[i][j]]=a;
            }
        }
        //cout<<endl;
    }
    //cout<<endl<<endl;
    //memset(dt,0x3f,sizeof(dt));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                dt[i][j]=0;
            }else if(g[i][j]==0){
                dt[i][j]=0x3f3f3f3f3f3f3f3f;
            }else{
                dt[i][j]=g[i][j];
            }
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dt[i][j]=min(dt[i][j],dt[i][k]+dt[k][j]);
            }
        }
    }
//    for(int i=1;i<=n;i++){
//    	for(int j=1;j<=n;j++){
//    		cout<<g[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
//    for(int i=1;i<=n;i++){
//    	for(int j=1;j<=n;j++){
//    		cout<<dt[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	//cout<<1;
    while(q--){
    	//cout<<1;
        int s,t;
        cin>>s>>t;
        //cout<<1;
        int mn=0x3f3f3f3f3f3f3f3f;
        for(int i=0;i<u[s].size();i++){
        	//cout<<1;
            for(int j=0;j<u[t].size();j++){
            	//cout<<1;
                mn=min(mn,dt[u[s][i]][u[t][j]]+v[u[s][i]][s]+v[u[t][j]][t]);
            }
        }
        //cout<<mn<<" "<<s<<t; 
        //cout<<1;
        //cout<<mn<<" ";
        mn+=x[s];
        mn+=x[t];
        cout<<mn<<endl;
    }
    // for(int i=1;i<=n;i++){
    //     int k;
    //     cin>>k;
    //     for(int j=1;j<=k;j++){
    //         int x,y;
    //         cin>>x>>y;
    //         a[i].push_back(x);
    //         t[x][i]=y;
    //     }
    //     for(int j=1;j<k;j++){
    //         v[a[i][j]].push_back({a[i][j+1],0});
    //     }
    // }
    // for(int i=1;i<=m;i++){
    //     for(pair<int,int> _:t[i]){
    //         for(pair<int,int> __:t[i]){
    //             if(_.first==__.first){
    //                 continue;
    //             }

    //         }
    //     }
    // }
    return 0;
}
