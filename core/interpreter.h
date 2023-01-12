//
// Created by Jonathan on 13/01/2023.
//

#ifndef ETC_LANG_INTERPRETER_H
#define ETC_LANG_INTERPRETER_H

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class interpreter {
public:
    string line;

    void run() {
        const vector<string> lineComponents = getLineComponents();
    };

    vector<string> getLineComponents() {
        vector<string> lineComponents;

        string currentComponent;

        stringstream ss(line);

        while (getline(ss, currentComponent, ' ')) {
            lineComponents.push_back(currentComponent);
        }

        return lineComponents;
    };

    static vector<string> getReservedExpressions() {
        return {
            "test"
        };
    };

    static bool isReservedExpression(string exp) {
        bool state = false;

        for (string reservedExpression: getReservedExpressions()) {
            state = reservedExpression == exp;
        }

        return state;
    };
};


#endif //ETC_LANG_INTERPRETER_H
