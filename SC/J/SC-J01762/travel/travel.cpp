#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define ex exit(0)
#define sinzo return
#define code 0
using namespace std;
const int N=2e6+10;
int a[N],b[N],c[N];
int n,m,k,cnt,mx=-1e18,mn=1e18,sum,ans;
int vis[N],bj[N];
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int T=1;
//	cin>>T;
	while(T--){
		int box1,box2,set1,set2;
		char set11,set12,set21,set22;
		string sset1,sset2;
		char setf1,setf2;
		cin>>box1>>set11>>set12>>setf1;
		
		cin>>box2>>set21>>set22>>setf2;
		
		sset1+=set11;
		sset1+=set12;
		sset2+=set21;
		sset2+=set22;
		
		set1=stoi(sset1);
		set2=stoi(sset2);
		
//		cout<<box1<<' '<<set1<<' '<<setf1<<endl;
//		cout<<box2<<' '<<set2<<' '<<setf2<<endl;
		
		if(box1==box2)cout<<1;
		else cout<<0;
		if(box1==box2&&set1==set2)cout<<1;
		else cout<<0;
		if(box1==box2&&set1==set2&&((setf1<='C'&&setf2<='C')||(setf1>='D'&&setf2>='D')))cout<<1;
		else cout<<0;
		if(box1==box2&&set1==set2&&((setf1<='C'&&setf2<='C')||(setf1>='D'&&setf2>='D'))&&(abs(setf1-setf2)==1||(setf1=='D'&&setf2=='F')||(setf2=='D'&&setf1=='F')))cout<<1;
		else cout<<0;
		
		
		
	}
	
	sinzo code;
	
}
/*
|        _______           |       _____________     
|       /  ___  \          |      /  __________ \    
|      /  /   \  \         |     /  /          \ \   
|     /  /_____\  \        |    /  /            \_\  
|    /   _______   \       |   /  /                  
|   /  /         \  \      |   \  \              _   
|  /  /           \  \     |    \  \            / /  
| /  /             \  \    |     \  \__________/ /   
|/__/               \__\   |      \_____________/    


//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
*/