#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>

long long calculate(std::string s) {
    std::istringstream in(s);
    std::stack<long long> nums;
    std::stack<char> ops;
    long long num;
    char op;

    while (in >> num) {
        while (!ops.empty() && (ops.top() == '*' || ops.top() == '/')) {
            long long prev = nums.top();
            nums.pop();
            if (ops.top() == '*') {
                num *= prev;
            } else {
                num = prev / num;
            }
            ops.pop();
        }
        nums.push(num);
        if (!(in >> op)) break;
        ops.push(op);
    }

    long long result = 0;
    while (!ops.empty()) {
        op = ops.top();
        ops.pop();
        num = nums.top();
        nums.pop();
        if (op == '+') {
            result += num;
        } else {
            result -= num;
        }
    }
    result += nums.top();
    return result;
}

bool isValidExpression(const std::string& s) {
    bool expectNumber = true;
    for (size_t i = 0; i < s.size(); ++i) {
        if (expectNumber) {
            if (!isdigit(s[i])) {
                return false;
            }
            if (i + 1 < s.size() && isdigit(s[i + 1])) {
                continue;
            }
            expectNumber = false;
        } else {
            if (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/') {
                return false;
            }
            expectNumber = true;
        }
    }
    return expectNumber == false;
}

int main() {
    std::string s;
    std::cout << "Nhap di em yeu:  ";
    std::getline(std::cin, s);
    if (isValidExpression(s)) {
        long long result = calculate(s);
        std::cout << "Gia tri bieu thuc la:  " << result << std::endl;
    } else {
        std::cout << "Bieu thuc sai roi cung." << std::endl;
    }
    return 0;
}
