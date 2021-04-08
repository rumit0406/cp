#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fastio() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define double long double
#define endl "\n"
#define v vector<int>
#define vb vector<bool>
#define vv vector<vector<int>>
#define pii pair<int,int>
#define vp vector<pii>
#define vs vector<string>
#define vd vector<double>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(s) s.begin(),s.end()
#define sz(x) (int)x.size()
#define f(i,n) for(int i = 0; i < n; ++i)
#define ff(i,n) for(int i = 1; i <= n; ++i)
#define frev(i,n) for(int i = n; i >= 0; --i)
#define rep(i, lo, hi, inc) for(int i=lo; i<=hi and inc>0 or i >= hi and inc<0; i+=inc)
#define input(x) for(auto &e:x)cin>>e
#define fa(x) for(auto it:x)
#define far(x) for(auto &it:x)
#define maxele(x) max_element(all(x))
#define minele(x) min_element(all(x))
#define sci(x) int x; cin>>x
#define scii(x,y) int x,y; cin>>x>>y
#define sciii(x,y,z) int x,y,z; cin>>x>>y>>z
#define print(x) fa(x) cout<<it<<" ";cout<<"\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> ordered_set;
int MOD = 1e9 + 7, intmax = LLONG_MAX, intmin = LLONG_MIN;

void printpair(pii a) {
    cout << a.fi << " " << a.se << endl;
}

void solve() {

}

signed main() {
    fastio();
    int t = 1;
    cin >> t;
    ff(i, t) {
        // cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}

