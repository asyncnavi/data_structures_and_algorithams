#include <iostream>
#include "./Vector.h"

using namespace std;


int main()
{

    Vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(12);
    v.push_back(317);
    v.push_back(4);

    cout << v.at(4) << endl;

    cout << v.get_front() << endl;
    cout << v.get_end() << endl;

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for(int i = 0 ; i < v.size(); i++) {
        cout << v[i] << ", ";
    }
    cout << endl;
    return 0;
}