#include <iostream>
#include <string.h>
using namespace std;

void Correct(char str[], int length)
{
    int first = 0, last = length - 1;
    // Xóa dấu trắng đầu chuỗi
    while (first < last && str[first] == ' ')
        first++;
    // Xóa dấu trắng cuối chuỗi
    while (last > first && str[last] == ' ')
        last--;

    // Viết hoa chữ cái đầu tiên
    if (str[first] >= 'a' && str[first] <= 'z')
        str[first] -= 32;
    for (int i = first + 1; i <= last; i++)
    {
        // Đưa hết về chữ thường
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    int first1;
    for (int i = last; i >= first; i--)
    {
        if (str[i] == ' ' && str[i - 1] >= 'a' && str[i - 1] <= 'z')
        {
            first1 = i;
            break;
        }
    }
    for (int i = first; i < first1; i++)
    {
        if (i + 1 <= last)
        {
            // Bỏ dấu trắng thừa ở giữa
            if (str[i] == str[i + 1] && str[i] == ' ')
            {
                continue;
            }
            // Nếu là chữ cái đầu mỗi từ thì viết hoa
            if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] -= 32;
            }
        }
        cout << str[i];
    }
    cout << ",";
    for (int i = first1; i <= last; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        cout << str[i];
    }
}

int main()
{
    char str[100];
    // Nhập chuỗi
    fgets(str, sizeof str, stdin);
    // Do sử dụng fgets nên chuỗi của chúng ta sẽ đọc cả ký tự '\n'.
    // Xóa bỏ nó đi.
    int length = strlen(str);
    Correct(str, length);
    return 0;
}
