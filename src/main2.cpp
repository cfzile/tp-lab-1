#include "task2.cpp"

int main (){

    setlocale (0, "");

    unsigned long long x;

    cout << "������� �����: ";
    cin >> x;
    cout << "\n" << x << (checkPrime(x) ? " - ������� �����" : " - ��������� �����") << "\n";
    cout << "��������� ��������� ������� ����� ����� " << x << ": " << nextPrime(x) << endl;

    unsigned y;
    cout << "������� ����� �� 1 �� " << INF/10 << ": ";
    cin >> y;
    cout << "\n" << y << " ������� ����� " << nPrime (y);

}
