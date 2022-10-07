#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb push_back
#define fast_cin()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
// FEEL IT STILL
// FLY ON
//static_cast<char>

int32_t main()
{
	fast_cin();
    ll t;
    cin>>t;
    ll mod = pow(10,9);
    mod +=7;
    while(t--)
    {
        ll n;
        cin>>n;
        ll maxm = INT_MIN;
        vector<ll> arr;
        ll z = n;
        while(z--)
        {
            int temp;
            cin>>temp;
            arr.pb(temp);
            if(temp > maxm)
            maxm = temp;
        }
        int i=0;
        vector<ll>a,b;
        if(maxm == arr[i])
        {
            cout<<"-1\n";
            continue;
        }
        else
        {
            while(arr[i]<maxm)
            {
                a.pb(arr[i]);
                i++;
            }
            while(i < n)
            {
                b.pb(arr[i]);
                i++;
            }
            cout<<a.size()<<"\n";
            for(auto x:a)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
            cout<<b.size()<<"\n";
            for(auto x:b)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }

    }       
    
    return 0;

}