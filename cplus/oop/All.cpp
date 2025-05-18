#include <iostream>
using namespace std;

// template <typename T>
// return_type function_name(T param) {
// code....
// }

// T is a placeholder for a data type...int, string or other


template <typename T>
T sum(T a, T b) {
    return a + b;
}

template <typename T1, typename T2>
class Pair {
    public:
        T1 first;
        T2 second;

        Pair(T1 x, T2 y) {
            first = x;
            second = y;
        }
    
        void DisplayPair() {
            cout << "First: " << first << ", Second: " << second << endl;
        }

    private:
        void TestPair() {
            cout << "This is a private method.";
        };
};

int main()
{
    cout << sum<double>(1.2, 2) << endl;

    Pair<string, int> person("Tawan", 26);
    Pair<int, int> test(1, 2);

    person.DisplayPair();
    test.DisplayPair();

    return 0;
}