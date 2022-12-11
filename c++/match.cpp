#include <bits/stdc++.h>

using namespace std;

int main() {
    system("g++ main.cpp -o main.exe -g");
    system("g++ force.cpp -o force.exe -g");
    system("g++ test.cpp -o test.exe -g");
    while (true) {
        system("test.exe > 1.txt");
        system("main.exe < 1.txt > 2.txt");
        system("force.exe < 1.txt > 3.txt");
        if (system("fc /A 2.txt 3.txt")) {
            puts("Error!");
            return 0;
        } else {
            puts("AC");
        }
    }
    return 0;
}