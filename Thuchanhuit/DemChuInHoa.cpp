#include <iostream>
#include <cctype>
#define MAXN 100
using namespace std;

void NhapChuoi(char hoten[]) {
    std::cin.getline(hoten, MAXN);
}

int DemChuInHoa(char hoten[]) {
    int count = 0;
    for(int i = 0; hoten[i] != '\0'; i++) {
        if(std::isupper(hoten[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char hoten[MAXN];
    NhapChuoi(hoten);
    std::cout << DemChuInHoa(hoten) << std::endl;
    return 0;
}

