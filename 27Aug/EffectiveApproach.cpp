#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i+1;
    }
    int a;
    cin>>a;
    long long v=0, p=0;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        v+=mp[x];
        p+=(n-mp[x]+1);
    }
    cout<<v<<" "<<p;
}