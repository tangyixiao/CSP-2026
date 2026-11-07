#include<bits/stdc++.h>
using namespace std;

int arr[500005];
int stk[500005];
int lst[500005];
int top;
int ans[500005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=1;j<=m;j++){
			lst[j]=INT_MAX;
		}
		top=0;
		for(int j=i;j<n;j++){
			if(lst[arr[j]]<=top&&stk[lst[arr[j]]]==arr[j]){
				top=lst[arr[j]]-1;
			}
			top++;
			stk[top]=arr[j];
			lst[arr[j]]=top;
		}
		for(int j=1;j<=top;j++){
			ans[stk[j]]++;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	
	return 0;
}
/*
窗外的天气 就像是 你多变的表情
下雨了 雨陪我哭泣 看不清 我也不想看清
离开你 我安静地抽离 不忍揭晓的剧情
我的泪流在心里 学会放弃
听雨的声音 一滴滴清晰
你的呼吸 像雨滴渗入我的爱里
真希望雨能下不停 
*/  
