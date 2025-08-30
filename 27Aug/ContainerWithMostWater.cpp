#include <bits/stdc++.h>
using namespace std;

static int maxArea(vector<int> &height)
{
    int l = 0, r = height.size() - 1, maxi = 0;
    while (l < r)
    {
        int mini = min(height[l], height[r]);
        maxi = max(maxi, mini * (r - l));
        if (height[l] < height[r])
            l++;
        else
            r--;
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter lenght of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = maxArea(arr);
    cout<<maxi;
}