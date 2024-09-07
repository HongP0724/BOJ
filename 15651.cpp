    #include <bits/stdc++.h>
    using namespace std;

    int n,m;
    int arr[10];

    void solution(int k)
    {
        if(k==m)
        {
            for(int i=0;i<m;i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
            return;
        }

        for(int i=0;i<n;i++)
        {
            arr[k] = i+1;
            solution(k+1);
        }
    }

    int main(void)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cin >> n >> m;
        solution(0);
    }