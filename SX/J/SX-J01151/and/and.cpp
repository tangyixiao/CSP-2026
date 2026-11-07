#include<bits/stdc++.h>
using namespace std;
//#define int long long
int a[200005];
string s[200005];
int tong[40];
int cn[200005][40];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        int num=a[i];
        while(num)
        {
            s[i]+=(char)(num%2+'0');
            num/=2;
        }
        reverse(s[i].begin(),s[i].end());
        int qwq=s[i].size();
        mx=max(mx,qwq);
    }
    for(int i=1; i<=n; i++)
    {
        while(s[i].size()<mx)
        {
            s[i]='0'+s[i];
        }
        for(int j=0; j<s[i].size(); j++)
        {
            cn[i][j]=s[i][j]-'0';
            tong[j]+=s[i][j]-'0';
        }
    }
    int len=mx;
    int ans=0;
//	while(len>0){
//	for(int i=1;i<=n;i++){
//		cout<<s[i]<<endl;
//	}
    for(int i=0; i<mx; i++)
    {
//    	cout<<s[i]<<endl;
//		cout<<tong[i]<<endl;
        if(tong[i]>=m)
        {
            ans+=pow(2,mx-i-1);
            for(int j=1; j<=n; j++)
            {
//            	cout<<s[j]<<endl;
                if(s[j][i]=='0')
                {
                    for(int k=i+1; k<mx; k++)
                    {
                        tong[k]-=s[j][k]-'0';
                        s[j][k]='0';
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
