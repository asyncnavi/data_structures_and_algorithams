#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int calc_total_marks(vector<int> marks)
{
    return marks[0] + marks[1] + marks[2];
}

bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2)
{

    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;

    return calc_total_marks(m1) > calc_total_marks(m2);
}

int main()
{

    vector<pair<string, vector<int>>> v = {
        {"Navraj", {30, 45, 56}},
        {"Vikas", {30, 55, 56}},
        {"Neeru", {30, 45, 27}},
    };

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << ", " << calc_total_marks(v[i].second);
    }

    return 0;
}