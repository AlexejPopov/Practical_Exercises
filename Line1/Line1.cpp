#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;

/* ���������� �� �������� ����� while � do_while. ������� ���������, ������������ �� ������ ����� �� ��������� ���������� ��������.
����� ����� ����� while � do_while ������� �� ������ ������ ���������. ���� ������������ ���������� ��������������� ���������� ��� ������� ���� ���, �� ����� ��������-
���� ���� do_while ����� ������� ���-�� �������, � ����� �������� ������������ ���������� �� �������� ��� ���. ����� ����� ������ ��������� �����-�� ������� � ����� ��-
������ � ����� (while). */

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "-----------------------------------���������, ��������� �� ����� ����� �� �������� � �������� �����������!---------------------------------------" << endl;
    char Symbol = '+';
    int i = 0, Obsch_kolicestvo = 0;                                   // ������� ����� ������� ���-�� �������� (������� �������� � �����!)

    while (Symbol != '0')                                              // ������� ���� ��������� ������ ��������� (��� ����� do_while, �� ������� while ��� ��������)
    {
        cout << "������� ������: "; cin >> Symbol;
        do
        {
            cout << "������� ���������� �������� ������ ����: "; cin >> Obsch_kolicestvo;
            if (Obsch_kolicestvo <= 0)cout << "���������� �������� ������ ���� ������ ����! ��������� ����." << endl;
        } while (Obsch_kolicestvo <= 0);

        while (i < Obsch_kolicestvo)
        {
            cout << Symbol;
            i++;
        }
        cout << "\n��� ������ ������� 0, ��� ����������� ������� ����� ������!" << endl;
        cin >> Symbol;

        // ����� �����, ��� ��������� ������ ����� ��������� ��� ����� �������� ����� � �������� ������� i � ��������� ��������� (��������), �.�. �� ������ �� � �����.
        i = 0;
        system("cls");
    }
}
/* ���� ��� ������� - ��������� ���������� �������� (i--), ��������� ���������� �������� ��� �������� (��� ��������������� ��������). ���������� ��� � Line2.0.
�� ���� ��� ���������� ��� ���-�� �������� ������������, �� ������� ����� ������� ��������. */