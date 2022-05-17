#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (!st.empty())
        {
            if ((arr[i] + st.top()) % 2 == 0)
            {
                st.pop();
            }
            else
                st.push(arr[i]);
        }
        else
            st.push(arr[i]);
    }
    cout << st.size();
}