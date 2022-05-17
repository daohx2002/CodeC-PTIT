#include <bits/stdc++.h>
using namespace std;
struct hanhKhach
{
    int tden;
    int tcan;
};
bool cmp(hanhKhach a, hanhKhach b)
{
    return a.tden < b.tden;
}
int main()
{
    int n;
    cin >> n;
    hanhKhach arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].tden >> arr[i].tcan;
    }
    sort(arr, arr + n, cmp);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max(sum, arr[i].tden);
        sum += arr[i].tcan;
    }
    cout << sum;
}