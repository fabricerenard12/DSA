#include <iostream>

class Diagonal {
public:
    Diagonal(int n_);
    int Get(int i, int j);
    void Set(int n, int i, int j);
    void Display();
    ~Diagonal();

private:
    int n;
    int* A;
};

Diagonal::Diagonal(int n_) {
    n = n_;
    A = new int[n];
}

int Diagonal::Get(int i, int j) {
    if (i == j) {
        return A[i - 1];
    } else {
        return 0;
    }
}

void Diagonal::Set(int n, int i, int j) {
    if (i == j) {
        A[i - 1] = n;
    }
}
void Diagonal::Display() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                std::cout << A[i] << " ";
            } else {
                std::cout << "0 ";
            }
        }

        std::cout << std::endl;
    }
}

Diagonal::~Diagonal() {
    delete[] A;
}

int main() {
    Diagonal m = Diagonal(3);
    m.Set(1, 1, 1);
    m.Set(2, 2, 2);
    m.Set(3, 3, 3);
    m.Display();
    return 0;
}