#include <iostream>


// Сортировка слиянием с помощью умных указателей  {ДОДЕЛАТЬ!}
// sotred merge 
void sortedMerge(unsigned n, unsigned m)
{
    /*
    std::unique_ptr<int> arr_a{ std::make_unique<int[]>(n)};
    std::unique_ptr<int> arr_b{ std::make_unique<int[]>(m)};
    std::unique_ptr<int> res{ std::make_unique<int[]>(n + m)};
    */
    std::cin >> n;
    auto arr_a{ std::make_unique<int[]>(n) };
    auto arr_b{ std::make_unique<int[]>(m) };
    auto arr_c{ std::make_unique<int[]>(n + m) };

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr_a[i];
    }



}


// Какая то задача
void task1(unsigned n)
{
    std::cin >> n;
    auto arr_a{ std::make_unique<int[]>(n) };

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr_a[i];
    }

    auto squares{ std::make_unique<long long[]>(n) };

    int I = 0, r = n - 1;

    int ind = n - 1;
    while (I <= 1)
    {
        long long pow1 = arr_a[I] * arr_a[I], pow2 = arr_a[r] * arr_a[r];
        if (pow1 >= pow2)
        {
            squares[ind] = pow1;
            ind--;
            I++;
        }
        else
        {
            squares[ind] = pow2;
            ind--;
            r--;
        }
        for (int i = 0; i < n; i++)
        {
            std::cout << squares[i] << " ";
        }
    }


}


// Задача 2: 
/*
Дан массиы чисел nums

Назовем подъемом ситуацию, когда i < j и nums[i] < nums[j].

Требуется найти максимальную величину подъема определяемую как (j - i).
*/
void task2(unsigned n)
{

}






void process()
{
    unsigned n = 0, m = 0;
    task1(n);

}



int main()
{
    process();
    return 0;
}
