#include <iostream>

using namespace std;

int main()
{
    cout << "=========================================================";
    srand(time(NULL));
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 11";
    cout << "\n\n\n\n";

    int min_number_11 = -30;
    int max_number_11 = 20;
    const int num_11 = 10;

    int number_eleven[num_11] = {};

    for (int q = 0; q < num_11; q++)
    {
        number_eleven[q] = rand() % (max_number_11 - min_number_11 + 1) + min_number_11;
    }

    cout << "Number : ";

    for (int q = 0; q < num_11; q++)
    {
        cout << number_eleven[q] << ",";
    }

    int __num__11 = 0;
    bool f_p = false;

    for (int q = 0; q < num_11; q++) {
        if (number_eleven[q] > 0) {
            f_p = true;
            for (int w = q + 1; w < num_11; w++) {
                __num__11 += number_eleven[w];
            }
            break;
        }
    }
    cout << "\n";
    if (f_p) {
        cout << "Answer : " << __num__11;
    }
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 12";
    cout << "\n\n\n\n";

    int min_number_12 = 1;
    int max_number_12 = 100;
    const int num_12 = 20;
    int number_twelve[num_12] = {};

    for (int e = 0; e < num_12; e++)
    {
        number_twelve[e] = rand() % (max_number_12 - min_number_12 + 1) + min_number_12;
    }

    cout << "Number : ";

    for (int e = 0; e < num_12; e++)
    {
        cout << number_twelve[e] << ",";
    }
    int min_index = 0;
    int max_index = 0;
    int min_num = number_twelve[0];
    int max_num = number_twelve[0];


    for (int e = 1; e < num_12; e++)
    {
        if (number_twelve[e] < min_num)
        {
            min_num = number_twelve[e];
            min_index = e;
        }
        if (number_twelve[e] > max_num)
        {
            max_num = number_twelve[e];
            max_index = e;
        }
    }
    cout << "\n";
    cout << "\tMin - number : " << min_num << "\tMin - Index - " << min_index << endl;
    cout << "\tMax - number : " << max_num << "\tMax - Index - " << max_index << endl;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 14";
    cout << "\n\n\n\n";

    int min_number_14 = 1;
    int max_number_14 = 200;
    const int num_14 = 20;
    int number_fourteen[num_14] = {};

    for (int t = 0; t < num_14; t++)
    {
        number_fourteen[t] = rand() % (max_number_14 - min_number_14 + 1) + min_number_14;
    }

    cout << "Number : ";

    for (int t = 0; t < num_14; t++)
    {
        cout << number_fourteen[t] << ",";
    }

    cout << "\n";

    int three_digits_number = 0;
    int two_digits_number = 0;
    int one_digits_number = 0;


    for (int t = 0; t < num_14; t++)
    {
        if (number_fourteen[t] >= 100 && number_fourteen[t] <= 999)
        {
            three_digits_number++;
        }
        else if (number_fourteen[t] >= 10 && number_fourteen[t] <= 99)
        {
            two_digits_number++;
        }
        else if (number_fourteen[t] >= 0 && number_fourteen[t] <= 9)
        {
            one_digits_number++;
        }

    }
    cout << "\tThree digits number : " << three_digits_number << "\n";
    cout << "\tTwo digits number : " << two_digits_number << "\n";
    cout << "\tOne digits number : " << one_digits_number;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 15";
    cout << "\n\n\n\n";

    int min_number_15 = 2;
    int max_number_15 = 200;
    const int num_15 = 20;
    int number_fifteen[num_15] = {};

    for (int y = 0; y < num_15; y++)
    {
        number_fifteen[y] = rand() % (max_number_15 - min_number_15 + 1) + min_number_15;
    }

    cout << "Number : ";

    for (int y = 0; y < num_15; y++)
    {
        cout << number_fifteen[y] << ",";
    }
    for (int y = 0; y < num_15; y++)
    {
        int num = number_fifteen[y];
        bool bol = true;

        if (num <= 1)
        {
            bol = false;
        }
        else if (num <= 3)
        {
            bol = true;
        }
        else if (num % 2 == 0 || num % 3 == 0) 
        {
            bol = false;
        }
        else {
            for (int i = 5; i * i <= num; i += 6) 
            {
                if (num % i == 0 || num % (i + 2) == 0)
                {
                    bol = false;
                    break;
                }
            }
        }
        cout << "\n";
        if (bol) 
        {
            cout << "Answer : ";
            cout << num << " ";
        }
    }
    cout << endl;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 16";
    cout << "\n\n\n\n";

    int min_number_16 = 1;
    int max_number_16 = 100;
    const int num_16 = 10;
    int number_sixteen[num_16] = {};

    for (int a = 0; a < num_16; a++)
    {
        number_sixteen[a] = rand() % (max_number_16 - min_number_16 + 1) + min_number_16;
    }
    cout << "Number : ";
    for (int a = 0; a < num_16; a++)
    {
        cout << number_sixteen[a] << ",";
    }

    for (int a = 0; a < num_16 / 2; ++a) {
        int temp = number_sixteen[a];
        number_sixteen[a] = number_sixteen[num_16 - a - 1];
        number_sixteen[num_16 - a - 1] = temp;
    }
    cout << "\n";
    cout << "Reserved Number : ";
    for (int a = 0; a < num_16; ++a) {
        cout << number_sixteen[a] << " ";
    }
    cout << endl;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 17";
    cout << "\n\n\n\n";

    int min_number_17 = 1;
    int max_number_17 = 100;
    const int num_17 = 10;
    int number_seventeen[num_17] = {};

    for (int d = 0; d < num_17; d++)
    { 
        number_seventeen[d] = rand() % (max_number_17 - min_number_17 + 1) + min_number_17;
    }
    cout << "Number : ";
    for (int d = 0; d < num_17; d++)
    {
        cout << number_seventeen[d] << ",";
    }
    cout << "\n";
    for (int d = 0; d < num_17 - 1; d += 2) {
        int temp = number_seventeen[d];
        number_seventeen[d] = number_seventeen[d + 1];
        number_seventeen[d + 1] = temp;
    }
    cout << "Reserved Number : ";
    for (int d = 0; d < num_17; ++d) {
        cout << number_seventeen[d] << ",";
    }
    cout << endl;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 18";
    cout << "\n\n\n\n";

    int min_number_18 = 1;
    int max_number_18 = 100;
    const int num_18 = 5;
    int number_A[num_18] = {};
    int number_B[num_18] = {};
    int number_C[2 * num_18] = {};

    for (int n = 0; n < num_18; n++)
    {
        number_A[n] = rand() % (max_number_18 - min_number_18 + 1) + min_number_18;
    }
    for (int n = 0; n < num_18; n++) 
    {
        number_B[n] = rand() % (max_number_18 - min_number_18 + 1) + min_number_18;
    }
    for (int n = 0; n < num_18; n++)
    {
        cout << "A - " << number_A[n] << ",";
    }
    cout << "\n";
    for (int n = 0; n < num_18; n++)
    {
        cout << "B - " << number_B[n] << ",";
    }
    for (int n = 0; n < num_18; n++)
    {
        number_C[2 * n] = number_A[n];
        number_C[2 * n + 1] = number_B[n]; 
    }
    cout << "\n";
    for (int n = 0; n < 2 * num_18; n++) 
    {
        cout << "C - " << number_C[n] << " ";
    }
    cout << endl;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 19";
    cout << "\n\n\n\n";

    int min_number_19 = -100;
    int max_number_19 = 100;
    const int num_19 = 15;
    int number_nineteen[num_19] = {};
    int copy_number[3 * num_19] = {};

    for (int c = 0; c < num_19; c++) {
        number_nineteen[c] = rand() % (max_number_19 - min_number_19 + 1) + min_number_19;
    }
    cout << "Number: ";
    for (int c = 0; c < num_19; c++) {
        cout << number_nineteen[c] << " ";
    }
    cout << endl;

    int neg_num = 0;
    int zer_num = 0;
    int pos_num = 0;

    for (int c = 0; c < num_19; c++) {
        if (number_nineteen[c] < 0) {
            copy_number[neg_num++] = number_nineteen[c];
        }
        else if (number_nineteen[c] == 0) {
            copy_number[num_19 + zer_num++] = number_nineteen[c];
        }
        else {
            copy_number[2 * num_19 + pos_num++] = number_nineteen[c];
        }
    }
    cout << "Copy Number: ";
    for (int c = 0; c < neg_num + zer_num + pos_num; c++) {
        cout << copy_number[c] << " ";
    }
    cout << endl;
    cout << "\n\n\n";
    cout << "=========================================================";
}