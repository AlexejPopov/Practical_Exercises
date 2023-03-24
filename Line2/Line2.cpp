#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;

/* Здесь мы будем уменьшать количество символов (i--), используя количество символов как счентчик (без дополнительного счетчика). Но если нам количество это где-то
придется использовать, то счетчик лучше сделать отдельно. */

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "-------------------------------------Программа, выводящая на экран линию из символов с заданным количеством!-------------------------------------" << endl;
    char Symbol = '+';
    int Obsch_kolicestvo = 0;

    do
    {
        cout << "Введите символ: "; cin >> Symbol;
        do
        {
            cout << "Введите количество символов больше нуля: "; cin >> Obsch_kolicestvo;
            if (Obsch_kolicestvo <= 0)cout << "Количество символов должно быть больше нуля! Повторите ввод." << endl;
        } while (Obsch_kolicestvo <= 0);

        while (Obsch_kolicestvo > 0)
        {
            cout << Symbol;
            Obsch_kolicestvo--;
        }
        cout << "\nДля выхода введите 0, для продолжения введите любой символ!" << endl;
        cin >> Symbol;

        system("cls");
    } while (Symbol != '0');
}