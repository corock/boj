#include <iostream>
#include <array>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 5> ai{ 0, };    
    int sum{ 0 };
    for (auto& element : ai) {
        cin >> element;
        sum += element;
    }
    cout << sum;

    return 0;
}
