 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     freopen("crystal.in","r",stdin);
     freopen("crystal.out","w",stdout);
      int a[110];
      int n,m,cnt = 0;
      cin>>n>>m;
      for(int i = 0;i<=n;i++)
      {
          cin>>a[n];
      }
for(int j = 1;j <=m;j++)
{
    if(a[n] != a[n])
    {
        a[n] = a[n+1];
        cnt += 1;
    }

}
cout<<cnt;
     return 0;
 }
