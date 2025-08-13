#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {22, 12, 16, 37, 74, 65, 56, 81, 90};
    int sum = 0;
    for (int i : numbers)
    {
        sum += i;
    }
    int average = sum / sizeof(numbers) / sizeof(numbers[0]);
    cout << "The Sum Of The Numbers Is :" << sum << endl;
    cout << "The Average Of Numbers Is :" << average << endl;
}