#include <iostream>
using namespace std;

float calculateBMI(float mass, float height) {
    float bmi = mass / (height * height);
    return bmi;
}

int main() {
    float mass, height;
    
    cout << "Въведете маса в килограми: ";
    cin >> mass;
    
    cout << "Въведете ръст в метри: ";
    cin >> height;

    float bmi = calculateBMI(mass, height);

    cout << "Индекс на телесната маса (BMI): " << bmi << endl;

    return 0;
}
