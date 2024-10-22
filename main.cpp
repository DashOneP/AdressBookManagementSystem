#include <iostream>
#include  <time.h>
#include "swap.h"
using namespace std;

// int max1(int a, int b);
struct Student {
    string name;
    double score;
};

struct Teacher {
    string name;
    Student student[5];
};
void allocateInfo(Teacher teacher[], int num) {
    // int num = sizeof(teacher) / sizeof(teacher[0]);
    string nameSeed = "ABCDEFGHIJK";
    for (int i = 0; i < num; i++) {
        teacher[i].name = "Teacher_";
        teacher[i].name += nameSeed[i];
        for (int j = 0; j < 5; j++) {
            teacher[i].student[j].name = "Student_";
            teacher[i].student[j].name += nameSeed[j];
            teacher[i].student[j].score = 60;

        }
    }
}

void printInfo(Teacher teacher[], int num) {
    // int num = sizeof(teacher) / sizeof(teacher[0]);
    for (int i = 0; i < num; i++) {
        cout << teacher[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t" <<teacher[i].student[j].name <<"  ";
            cout << teacher[i].student[j].score << endl;
        }
    }
}
int main() {
    Teacher teacher[3];
    int num = sizeof(teacher) / sizeof(teacher[0]);
    allocateInfo(teacher, num);
    printInfo(teacher, num);
    // 99乘法表
    // for (int i = 1; i < 10; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << i << " x " << j << " = " << i * j << "\t";
    //     }
    //     cout << endl;
    // }

    // // 元素逆置
    // // 方法1（我的方法）
    // int arr[] = {1,2,3,4,5,6};
    // int arrNum = std::size(arr);
    // int exchangeTimes = arrNum / 2 + 1;
    // for (int i = 0; i < exchangeTimes; i++) {
    //     int temp = arr[i];
    //     temp = arr[i];
    //     if (i == arrNum - 1 - i) {
    //         continue;
    //     }
    //     arr[i] = arr[arrNum - 1 - i];
    //     arr[arrNum - 1 - i] = temp;
    // }
    // // 课堂方法
    // int start = 0;
    // int end = arrNum - 1;
    // while (start < end) {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }
    //
    // for (int i = 0; i < arrNum; i++) {
    //     cout << arr[i] << endl;
    // }

    // // 冒泡排序，从小到大
    // int arr[] = {3,4,2,8,60,4100,2,5,3,7};
    // int arrNum = std::size(arr);
    // bool isExchange = true;
    // while (isExchange) {
    //     isExchange = false;
    //     for (int i = 0; i < arrNum - 1; i++) { // 最后一次排序只剩两个元素，无需排序
    //         for (int j = 0; j < arrNum - i - 1; j++) {
    //             if (arr[j] > arr[j + 1] ) {
    //                 int temp = arr[j];
    //                 arr[j] = arr[j + 1];
    //                 arr[j + 1] = temp;
    //                 isExchange = true;
    //             }
    //         }
    //     }
    // }
    //
    // for (int i = 0; i < arrNum; i++) {
    //     cout << arr[i] << endl;
    // }
    // return 0;
}

// int max1(int a, int b) {
//     return a > b ? a : b;
// }
