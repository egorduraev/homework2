//Autor Egor Duraev, Homework 2
#include <iostream>

using namespace std;

int main()
{
    //Exersize 1
    //Создание идентификаторов.
    int i0;
    char c0;
    long l0;
    long long ll0;
    float f0;
    double d0;
    bool b0;
    char c1;
    //Инициализация идентификаторов.
    i0 = 10;
    c0 = 'f';
    l0 = 25;
    ll0 = 12;
    f0 = 2.21;
    d0 = 512.256;
    b0 = 1;
    c1 = 'A';
    //Константа.
    const float constanta = 9.8;
    //Exersize 2
    //Создание перечисления с возможными вариантами символов для игры в крестики-нолики.
    enum TTT{X, O, E, C}; //E - empty, C - crossed.
    //Exersize 3
    //Создание массива способного содержать значения такого перечисления.
    enum TTT Player[4];
    //Инициализация массива.
    Player[0] = X;
    Player[1] = O;
    Player[2] = E;
    Player[3] = C;
    //Exersize 4
    //Создание структуры данных (!Свойства добавил те, что пришли в голову "отсебятина"!)
    typedef enum TTT ttt;
    struct fieldTTT {
        ttt F[3][3]; //Значения элементов поля.
        int process : 2; //00-начало, 01-ход игры, 10-победа крестиков, 11-победа ноликов.
        bool W; //0-результат хождения крестиков; 1-результат хождения ноликов.
        int count; //Счет хода.
    };
    //Exersize 5
    //Создание объединения способного принимать значения 3 разных типов данных.
    union types {
        char Type_char;
        int Type_int;
        float Type_float;
    };
    //Создание структуры, содержащего идентификатор объединения, а также битовые флаги указывающие какой тип данных имеет идентификатор.
    struct anything1 {
        union types x;
        int type_char : 1; //тип данных идентификатора x char
        int type_int : 1; //тип данных идентификатора x int
        int type_float : 1; //тип данных идентификатора x float
    };
    return 0;
}
