#include <stdio.h>

int main() {
    // ประกาศตัวแปร
    char name[3], grade[3];
    int age[3];
    float height[3], weight[3];

    // รับข้อมูลจากผู้ใช้ 3 คน
    for (int i = 0; i < 3; i++) {
        printf("Enter data for person %d:\n", i + 1);
        scanf(" %c %d %f %f %c", &name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // แสดงผลเป็นตาราง
    printf("\n");
    printf("| Name | Age | Height(cm) | Weight(kg) | Grade Code |\n");
    printf("|------|-----|------------|------------|------------|\n");

    for (int i = 0; i < 3; i++) {
        printf("| %c | %3d | %6.1f | %6.1f | %c |\n",
               name[i], age[i], height[i], weight[i], grade[i]);
    }

    return 0;
}