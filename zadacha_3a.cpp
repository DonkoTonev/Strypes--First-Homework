#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R, H;
    const double PI = 3.14159;

    cout << "Въведете радиуса на основата (R): ";
    cin >> R;
    cout << "Въведете височината на варела (H): ";
    cin >> H;

    double volume = PI * pow(R, 2) * H;

    cout << "Обемът на водата във варела е: " << volume << " куб. метра" << endl;

    return 0;
}
