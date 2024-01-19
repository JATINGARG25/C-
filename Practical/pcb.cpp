#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);

    try
    {
        vec.at(2);
    }
    catch (exception &ex)
    {
        cout << "Exception occurred!" << endl;
    }
    return 0;
}
