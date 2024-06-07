#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define nl cout << endl
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(x) x.begin(),x.end()
using namespace std;
void ss(){
 ll n,m;
 cin>>n>>m;
 vector<ll>a(n),b(m);
 for(ll i=0;i<n;i++) cin>>a[i];
 for(ll i=0;i<m;i++) cin>>b[i];

 multiset<ll>ms;
 for(ll i=0;i<n;i++){
    ms.insert(a[i]);
 }
 for(ll i=0;i<m;i++){
    auto it=ms.upper_bound(b[i]);
    if(it==ms.begin()) cout<<-1<<endl;
    else {
            --it;
        cout<<*it<<endl;
        ms.erase(it);
    }
 }


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ss();
    }
}

