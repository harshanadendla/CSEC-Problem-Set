#ifndef ONLINE_JUDGE
    #include "./stdc++.h"
#else
    #include<bits/stdc++.h>
#endif
using namespace std;

#define int long long

const int N=1e5+5;

void solve() {
    int n;
    cin>>n;
    while (n > 1) {
        cout<<n<<" ";
        if (n%2) {
            n=3*n+1;
        } else {
            n/=2;
        }
    }
    cout<<n<<" ";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif
    int t=1;
    //cin>>t;
    for (int i=1;i<=t;i++) {
        solve();
    }
    return 0;
}
