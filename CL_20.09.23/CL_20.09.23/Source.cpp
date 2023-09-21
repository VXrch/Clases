#include <iostream>

using namespace std;

void Fill(int arr[], int size) {
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = 10 + rand() % 89;
    }
}

void Print_1(int arr[], int size) {

    for (int i = 0; i < size; i++)
    {
        cout << "Arr [" << i << "] = " << arr[i] << endl;
    }
}

//void QuickSort(int arr[], int B, int E) {
//
//    int i = B, int j = E;
//
//    int temp, p;
//
//    p = arr[(B + E) / 2];
//
//    do
//    {
//        while (arr[i] < p)i++;
//        while (arr[i] > p)j++;
//
//        if (i <= j) {
//
//            temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//            i++;
//            j--;
//        }
//
//    } while (i <= j);
//    if (B < j)QuickSort(arr, B, j);
//    if (E < i)QuickSort(arr, i, E);
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Exponent(int number, int power, int i) {

    if (i == power - 1)
        return number;

    i++;
    return Exponent(number, power, i) * number;
}

void task_1() {

    // 2. Написати рекурсивну функцію знаходження ступеня числа.

    int number, power, result, i = 0;

    cout << "Enter number: "; cin >> number;
    cout << "Enter power: "; cin >> power;

    if (power == 0)
        result = 1;
    else
        result = Exponent(number, power, i);

    cout << number << " in " << power << " = " << result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Stars_output(int i, int number) {

    i++;

    if (i <= number)
        cout << " * ";

    if (i > number)
        return 0;

    return Stars_output(i, number);
}

void task_2() {

    // 3. Написати рекурсивну функцію, яка виводить N зірок
    //    у ряд, число N задає користувач. Проілюструйте ро -
    //    боту функції прикладом.

    int i = 0, number_of_stars;

    cout << "Example:\nIf number of stars = 5: " << endl;
    Stars_output(i, 5); 
    
    cout << "\nEnter number of stars: "; cin >> number_of_stars;

    if (number_of_stars > 0)
        Stars_output(i, number_of_stars);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumOfAllNumbers(int r1, int r2, int i, int sum = 0) {
    
    sum += r1;
    r1++;

    if (r1 > r2)
        return sum;

    return SumOfAllNumbers(r1, r2, i, sum);
}

void task_3() {

    // 4. Написати рекурсивну функцію, яка обчислює суму
    //     всіх чисел у діапазоні від a до b.Користувач вводить
    //     a і b.Проілюструйте роботу функції прикладом.

    int sum, r1, r2, i = 0;

    sum = SumOfAllNumbers(1, 10, i);
    cout << "For example:\nIn range (1 - 10) sum of all numbers = " << sum << endl;

    cout << "Enter range (min): "; cin >> r1;
    cout << "Enter range (max): "; cin >> r2;

    if (r1 > 0 && r1 < r2)
        sum = SumOfAllNumbers(r1, r2, i);

    cout << "Sum of all numbers from " << r1 << " to " << r2 << " = " << sum << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int findMinSumPosition(int arr[], int startIndex = 0, int currentSum = 0, int minSum = 2147483647, int minIndex = 0) {

    if (startIndex == 90) {
        return minIndex;
    }

    int newSum = currentSum + arr[startIndex];

    if (startIndex >= 10) {
        newSum -= arr[startIndex - 10];
    }

    if (newSum < minSum) {

        minSum = newSum;
        minIndex = startIndex - 9;
    }

    return findMinSumPosition(arr, startIndex + 1, newSum, minSum, minIndex);
}

void task_4() {

    // 5. Напишіть рекурсивну функцію, яка приймає однови -
    //     мірний масив зі 100 цілих чисел, заповнених випадко -
    //     вим чином, і знаходить позицію, з якої починається
    //     послідовність з 10 чисел, сума яких мінімальна.

    const int size = 100;
    int arr[size];
    Fill(arr, size);

    int minSumIndex = findMinSumPosition(arr);

    cout << "Result = " << minSumIndex << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main() {

    srand(time(0));

    const int size = 20;
    int arr[size];

    Fill(arr, size);

    int choice = 0;

    cout << "Enter task number (1-4): "; cin >> choice;

    switch (choice) {
    case 1: task_1(); break;
    case 2: task_2(); break;
    case 3: task_3(); break;
    case 4: task_4(); break;
    default: cout << "Wrong choice!" << endl; break;
    }
}