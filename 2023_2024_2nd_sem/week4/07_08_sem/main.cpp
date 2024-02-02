#include <iostream>

int sum(int, int);
int sum(int, int); //прототипировать можно сколько угодно


int main(){
    int n=3, m =5;
    // std::cout << sum(1.2, 2.0); //если видит инт он выведет функцию для инт, флоат -> float, если 1.2, 2 то надо преобразовывать

    // int n; //нельзя, previous definition, аналогично с функциями


    // int* a = new int; //выделяется динамическая памть под интегер область
    // (*a) = 234;
    // std::cout << *a;

    // int* a = new int[10]; //указатель на начало из 10 элементов
    int** array = new int*[n]; //нужно для двухмерных массивов, int** array = new int*[n][m] нельзя
    for (size_t i = 0; i < 5; i++)
    {
        array[i] = new int[m]; //aray[i] -указатели на начала массивов 
        std::cout << array[i] << '\t';
    }

    //НЕЛЬЗЯ задавать так статические массивы
    // int n;
    // std::cin >> n;
    // int a[n];
//n определяется до компиляции, нормальный компилятор даст ошибку, должны бытьопределены во время компиляции

//можно:
    // int* a = new int[10];

}

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}
