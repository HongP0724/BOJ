#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int ph=0,pg=0;
    string s;
    getline(cin,s);
    for(char c : s)
    {
        if(c=='A' ||  c == 'H' || c=='P' || c=='Y')
        {
            ph++;
        }
        if(c=='S' || c =='A' || c=='D')
        {
            pg++;
        }
    }


    cout << fixed;
    cout.precision(2);
    if(ph ==0 && pg==0)
    {
        cout << 50.0;
        return 0;
    }

    int temp = ph * 100 * 1000 / (ph+pg);
    temp = temp / 10 + (temp%10 >=5);
    int share = temp / 100;
    int rem = temp % 100;


    cout << share << '.' << setfill('0') << setw(2) << rem;
}