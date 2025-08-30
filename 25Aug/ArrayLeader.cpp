#include <bits/stdc++.h>
using namespace std;

static void replaceElements(vector<int> &arr)
{
    int n = arr.size();
    int maxi = arr[n - 1], temp = arr[n - 1];
    arr[n - 1] = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (temp > maxi)
        {
            maxi = temp;
        }
        temp = arr[i - 1];
        arr[i - 1] = maxi;
    }
}

int main(){
    int n;
    cout<<"Enter Length of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    replaceElements(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}