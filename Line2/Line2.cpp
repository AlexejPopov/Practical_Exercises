#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;

/* ����� �� ����� ��������� ���������� �������� (i--), ��������� ���������� �������� ��� �������� (��� ��������������� ��������). �� ���� ��� ���������� ��� ���-��
�������� ������������, �� ������� ����� ������� ��������. */

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "-------------------------------------���������, ��������� �� ����� ����� �� �������� � �������� �����������!-------------------------------------" << endl;
    char Symbol = '+';
    int Obsch_kolicestvo = 0;

    do
    {
        cout << "������� ������: "; cin >> Symbol;
        do
        {
            cout << "������� ���������� �������� ������ ����: "; cin >> Obsch_kolicestvo;
            if (Obsch_kolicestvo <= 0)cout << "���������� �������� ������ ���� ������ ����! ��������� ����." << endl;
        } while (Obsch_kolicestvo <= 0);

        while (Obsch_kolicestvo > 0)
        {
            cout << Symbol;
            Obsch_kolicestvo--;
        }
        cout << "\n��� ������ ������� 0, ��� ����������� ������� ����� ������!" << endl;
        cin >> Symbol;

        system("cls");
    } while (Symbol != '0');
}