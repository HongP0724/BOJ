#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}

    bool operator>(Point& a)
    {
        return (y > a.y) || (y == a.y && x > a.x);
    }

    bool operator<(Point& a)
    {
        return a > *this;
    }
};

int main(void)
{
    vector<Point> vec;
    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        vec.push_back(Point(a, b));
    }
    sort(vec.begin(),vec.end());
    for(auto i = vec.begin();i!=vec.end();i++)
    {
        cout << i->x << " " << i->y << '\n';
    }
}