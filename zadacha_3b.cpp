#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R, L, H;
    const double PI = 3.14159;

    cout << "Въведете радиуса на основата (R): ";
    cin >> R;
    cout << "Въведете пълната височина на варела (L): ";
    cin >> L;
    cout << "Въведете височината на водата във варела (H): ";
    cin >> H;

    double volume = (PI * H * (3 * R - H) * pow(H, 2)) / 3;

    cout << "Обемът на водата във варела е: " << volume << " куб. метра" << endl;

    return 0;
}
