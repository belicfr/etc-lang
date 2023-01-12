#include <iostream>
#include "core/interpreter.h"
using namespace std;

int main() {
    string line,
           lineToLower;

    interpreter interpreterInstance;

    cout << "ETC-language shell." << endl
         << "2023 © all rights reserved." << endl;

    do {
        lineToLower = "";

        cin >> line;

        for (char& c: line) {
            lineToLower += tolower(c, locale());
        }

        interpreterInstance.line = line;
        interpreterInstance.run();
    } while (lineToLower != "/exit");
}