#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fastio() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define double long double
#define v vector<int>
#define vb vector<bool>
#define vv vector<vector<int>>
#define pii pair<int,int>
#define vp vector<pii>
#define vs vector<string>
#define vd vector<double>
#define mp make_pair
#define pb push_back
#define popb pop_back()
#define endl "\n"
#define fi first
#define se second
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
#define sz(x) (int)x.size()
#define f(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=1;i<=n;i++)
#define frev(i,n) for(int i=n;i>=0;i--)
#define input(x) for(auto &e:x)cin>>e
#define fa(x) for(auto it:x)
#define far(x) for(auto &it:x)
#define maxi(x) max_element(all(x))-x.begin()
#define mini(x) min_element(all(x))-x.begin()
#define sci(x) int x;cin>>x;
#define scii(x,y) int x,y;cin>>x>>y;
#define sciii(x,y,z) int x,y,z;cin>>x>>y>>z;
#define emp empty()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define MOD 1000000007
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

vector<int> kmp(const string text, const string pat)
{
    //return vector<int> which has indices of occurences of pat in text
    vector<int> ans;
    int n = text.size(), m = pat.size();
    vector<int> lps(m, 0);
    int j = 0;
    int k = 0;
    for (int i = 1; i <= m - 1; ++i)
    {
        while ( j > 0 && pat[i] != pat[j] )
            j = lps[j - 1];
        if ( pat[i] == pat[j] )
            lps[i] = ++j;
    }
    j = 0;
    for (int i = 0; i < n; ++i)
    {
        while ( j > 0 && pat[j] != text[i] )
            j = lps[j - 1];
        if ( pat[j] == text[i] )
        {
            j++;
            if ( j == m )
            {
                j = lps[j - 1];
                //cout << ++k << " : " << i - m + 1 << endl;
                ans.push_back(i - m + 1);
            }
        }
    }
    //fa(lps)
    //cout << it << " ";
    return ans;
}

void solve()
{
    string text, pat;
    cin >> text >> pat;
    int n = sz(text), m = sz(pat);
    v lps(m, 0);
    int j = 0;
    int k = 0;
    ff(i, m - 1)
    {
        while ( j > 0 && pat[i] != pat[j] )
            j = lps[j - 1];
        if ( pat[i] == pat[j] )
            lps[i] = ++j;
    }
    j = 0;
    f(i, n)
    {
        while ( j > 0 && pat[j] != text[i] )
            j = lps[j - 1];
        if ( pat[j] == text[i] )
        {
            j++;
            if ( j == m )
            {
                j = lps[j - 1];
                cout << ++k << " : " << i - m + 1 << endl;
            }
        }
    }
    fa(lps)
    cout << it << " ";
}

signed main()
{
    fastio();
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}