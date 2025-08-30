#include <bits/stdc++.h>
using namespace std;

static vector<int> lcmAndGcd(int a, int b)
{
    vector<int> a_arr, b_arr;
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            a_arr.push_back(i);
            gcd = i;
        }
    }
    int lcm = (a * b) / gcd;
    return {lcm, gcd};
}

int main(){
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    vector<int> ans=lcmAndGcd(a,b);
    cout<<"GCD: "<<ans[1];
    cout<<"LCM: "<<ans[0];
}