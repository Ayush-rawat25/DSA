#include <bits/stdc++.h>
using namespace std;

static int trap(vector<int> &height)
{
    int n = height.size(), total = 0, l = 0, r = n - 1, lm = 0, rm = 0;
    while (l < r)
    {
        if (height[l] <= height[r])
        {
            if (height[l] < lm)
            {
                total += lm - height[l];
            }
            else
                lm = height[l];
            l++;
        }
        else
        {
            if (height[r] < rm)
            {
                total += rm - height[r];
            }
            else
                rm = height[r];
            r--;
        }
    }

    return total;
}

int main(){
    int n;
    cout<<"Enter lenght of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int total = trap(arr);
    cout<<total;
}