#include <stdio.h>

int main() {
    char name = 'S'; // ประกาศตัวแปรชื่อเป็นตัวอักษรตัวใหญ่
    int age = 18; // อายุของตัวเอง (จำนวนเต็ม)
    float weight = 73.6; // น้ำหนักของตัวเอง (ทศนิยม)

    // แสดงผลออกมาทีละบรรทัด
    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}