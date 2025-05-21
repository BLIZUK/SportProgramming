/*
* Задача номер 1
* Прожектор в ночи
*/
#include <iostream>
#include <cmath>

using namespace std;
    
int main() {
    const double PI = acos(-1.0);
    int beta, t, a;
    cin >> beta >> t >> a;

    double theta_deg = fmod(45.0 + beta * t, 360.0);
    if (theta_deg < 0) theta_deg += 360.0;

    double theta_rad = theta_deg * PI / 180.0;

    double x, y;

    if ((theta_deg >= 315.0) || (theta_deg < 45.0)) {
        x = a;
        y = a * tan(theta_rad);
    }
    else if (theta_deg < 135.0) {
        y = a;
        x = a * (cos(theta_rad) / sin(theta_rad));
    }
    else if (theta_deg < 225.0) {
        x = -a;
        y = -a * tan(theta_rad);
    }
    else {
        y = -a;
        x = -a * (cos(theta_rad) / sin(theta_rad));
    }

    cout.precision(10);
    cout << fixed << x << " " << y << endl;

    return 0;
}