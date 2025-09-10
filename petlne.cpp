#include <iostream>
using namespace std;

void zad1() {
    cout << "ZAD 1:\n";
    for (int i = 5; i <= 15; ++i) cout << i << ' ';
    cout << "\n\n";
}

void zad2() {
    cout << "ZAD 2:\n";
    for (int i = 20; i >= 10; --i) cout << i << ' ';
    cout << "\n\n";
}

void zad3() {
    cout << "ZAD 3:\n";
    for (int i = 1; i <= 10; ++i) {
        cout << i << ". Ignacy\n";
    }
    cout << "\n";
}

void zad4() {
    cout << "ZAD 4:\n";
    int szerokosc = 10;
    int wysokosc = 5;
    for (int r = 0; r < wysokosc; ++r) {
        for (int c = 0; c < szerokosc; ++c) cout << '*';
        cout << '\n';
    }
    cout << "\n";
}

void zad5() {
    cout << "ZAD 5:\n";
    int x, y;
    cout << "Podaj szerokosc: ";
    cin >> x;
    cout << "Podaj wysokosc: ";
    cin >> y;
    for (int r = 0; r < y; ++r) {
        for (int c = 0; c < x; ++c) cout << '*';
        cout << '\n';
    }
    cout << "\n";
}

void zad6() {
    cout << "ZAD 6:\n";
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            cout << i << "*" << j << "=" << i * j << "  "; 
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
    zad6();
    return 0;
}
#include <iostream>
using namespace std;

void zad1() {
    cout << "ZAD 1:\n";
    for (int i = 5; i <= 15; ++i) cout << i << ' ';
    cout << "\n\n";
}

void zad2() {
    cout << "ZAD 2:\n";
    for (int i = 20; i >= 10; --i) cout << i << ' ';
    cout << "\n\n";
}

void zad3() {
    cout << "ZAD 3:\n";
    for (int i = 1; i <= 10; ++i) {
        cout << i << ". Ignacy\n";
    }
    cout << "\n";
}

void zad4() {
    cout << "ZAD 4:\n";
    int szerokosc = 10;
    int wysokosc = 5;
    for (int r = 0; r < wysokosc; ++r) {
        for (int c = 0; c < szerokosc; ++c) cout << '*';
        cout << '\n';
    }
    cout << "\n";
}

void zad5() {
    cout << "ZAD 5:\n";
    int x, y;
    cout << "Podaj szerokosc: ";
    cin >> x;
    cout << "Podaj wysokosc: ";
    cin >> y;
    for (int r = 0; r < y; ++r) {
        for (int c = 0; c < x; ++c) cout << '*';
        cout << '\n';
    }
    cout << "\n";
}

void zad6() {
    cout << "ZAD 6:\n";
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            cout << i << "*" << j << "=" << i * j << "  "; 
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
    zad6();
    return 0;
}
