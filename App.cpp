#include "App.h"
#include <random> // Для генерации случайных чисел

using namespace std;

int App::start() {
    // Инициализация генератора случайных чисел
    random_device rd; 
    mt19937 gen(rd()); // Инициализация Mersenne Twister случайным начальным числом
    uniform_int_distribution<int> distribution(1, 100); // Определение диапазона случайных чисел от 1 до 100

    // Создание вектора с 5 случайными числами
    vector<int> nums;
    for (int i = 0; i < 5; ++i) {
        nums.push_back(distribution(gen)); // Генерация случайного числа и добавление в вектор
    }

    // Создание вектора с 7 случайными числами
    vector<int> nums2;
    for (int i = 0; i < 7; ++i) {
        nums2.push_back(distribution(gen)); // Генерация случайного числа и добавление в вектор
    }

    // Создание вектора с 8 случайными числами
    vector<int> nums3;
    for (int i = 0; i < 8; ++i) {
        nums3.push_back(distribution(gen)); // Генерация случайного числа и добавление в вектор
    }

    // Проверка, содержит ли nums хотя бы одно четное число
    bool result1 = my_any_of(nums.begin(), nums.end(), [](int num) {
        return num % 2 == 0;
    });
    cout << "my_any_of result1: " << (result1 ? "true" : "false") << "\n";

    // Проверка, отсортирован ли nums2 в порядке возрастания
    bool result2 = my_is_sorted(nums2.begin(), nums2.end(), less<int>());
    cout << "my_is_sorted result2: " << (result2 ? "true" : "false") << "\n";

    // Поиск первого числа в nums3, отличного от случайного числа из диапазона 1-100
    auto result3 = find_not(nums3.begin(), nums3.end(), distribution(gen));

    // Вывод результата поиска
    if (result3 != nums3.end())
        cout << "find_not result3: Found " << *result3 << " at position " << (result3 - nums3.begin()) << "\n";
    else 
        cout << "find_not result3: Not found" << "\n";

    return 0;
}
