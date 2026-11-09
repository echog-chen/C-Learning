#include<stdio.h>
void printMenu() { /* 打印菜单 */ }
void inputData() { /* 录入信息 */ }
void calculate() { /* 计算成绩 */ }
void sortData() { /* 排序 */ }

int main() {
    int choice;
    while (1) {
        printMenu();
        scanf("%d", &choice);
        
        if (choice == 1) {
            inputData();
        } else if (choice == 2) {
            calculate();
        } else if (choice == 3) {
            sortData();
        } else if (choice == 4) {
            break;
        }
    }
    return 0;
}