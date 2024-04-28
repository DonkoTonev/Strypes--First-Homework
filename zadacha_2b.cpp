#include <iostream>
#include <cmath>
using namespace std;

float calculateBMI(float mass, float height) {
    return 1.3 * (mass / pow(height, 2.5));
}

int main() {
    float mass, height;

    cout << "Въведете маса в килограми: ";
    cin >> mass;
    
    cout << "Въведете ръст в метри: ";
    cin >> height;

    float bmi = calculateBMI(mass, height);

    cout << "Индекс на телесната маса (BMI) по новата формула: " << bmi << endl;

    return 0;
}
