#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n,m,x,a[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>x;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            cin>>a[i][j];
    for (ll i=1;i<n;i++)
        for (ll j=i+1;j<=n;j++)
            if (a[j][x]<a[i][x]) swap(a[i][x],a[j][x]);
    for (ll i=1;i<=n;i++){
        for (ll j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
