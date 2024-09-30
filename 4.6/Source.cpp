#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, S;
    int n, i;

  
    P = 0; 
    n = 1;
    while (n <= 10) {
        S = 1 + cos(n) * cos(n);
        i = 1;
        double product = 1;
        while (i <= n) {
            product *= sin(i + n);
            i++;
        }
        P += sqrt(S + product);
        n++;
    }
    cout << "Result (while): " << P << endl;

  
    P = 0;
    n = 1;
    do {
        S = 1 + cos(n) * cos(n);
        i = 1;
        double product = 1;
        do {
            product *= sin(i + n);
            i++;
        } while (i <= n);
        P += sqrt(S + product);
        n++;
    } while (n <= 10);
    cout << "Result (do-while): " << P << endl;


    P = 0;
    for (n = 1; n <= 10; n++) {
        S = 1 + cos(n) * cos(n);
        double product = 1;
        for (i = 1; i <= n; i++) {
            product *= sin(i + n);
        }
        P += sqrt(S + product);
    }
    cout << "Result (for): " << P << endl;


    P = 0;
    for (n = 10; n >= 1; n--) {
        S = 1 + cos(n) * cos(n);
        double product = 1;
        for (i = n; i >= 1; i--) {
            product *= sin(i + n);
        }
        P += sqrt(S + product);
    }
    cout << "Result (reverse for): " << P << endl;

    return 0;
}
