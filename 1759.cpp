#include <bits/stdc++.h>
using namespace std;

int l, c;
char alpha[20];
int arr[20];

void solve(int k, int v_cnt, int c_cnt)
{
    if (k == l)
    {
        cout << v_cnt << " " << c_cnt << "\n";
        if (v_cnt < 1 || c_cnt < 2)
            return;
        for (int i = 0; i < l; i++)
        {
            cout << alpha[arr[i]];
        }
        cout << "\n";
        return;
    }

    int st = 0;
    if (k != 0)
        st = arr[k - 1] + 1;
    int n_v, n_c;
    int ch;
    for (int i = st; i < c; i++)
    {
        n_v = v_cnt;
        n_c = c_cnt;
        arr[k] = i;
        ch = alpha[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            n_v = v_cnt + 1;
        }
        else
        {
            n_c = c_cnt + 1;
        }
        solve(k + 1, n_v, n_c);
    }
}

int main(void)
{
    cin >> l >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> alpha[i];
    }
    sort(alpha, alpha + c);

    solve(0, 0, 0);
}