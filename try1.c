#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr_arr = arr; // arr คือ Address ของ arr[0]

    printf("--- ที่อยู่เริ่มต้น ---\n");
    printf("ที่อยู่ของ arr[0]: %p\n", &arr[0]);
    printf("ค่าใน ptr_arr: %p\n", ptr_arr); // ชี้ไปที่ 10

    printf("\n--- การเข้าถึงค่าและเลื่อน Pointer ---\n");
    
    // 1. เข้าถึงค่าแรก
    printf("ค่าแรก (*ptr_arr): %d\n", *ptr_arr); // Output: 10
    
    // 2. เลื่อน Pointer ไปยังสมาชิกตัวถัดไป
    ptr_arr++; // เลื่อนไป +sizeof(int) ไบต์
    
    printf("ที่อยู่ใหม่ของ ptr_arr: %p\n", ptr_arr); 
    // สังเกตว่า Address จะเพิ่มขึ้น 4 (ถ้า int คือ 4 ไบต์)
    
    // 3. เข้าถึงค่าที่สอง
    printf("ค่าที่สอง (*ptr_arr): %d\n", *ptr_arr); // Output: 20
    
    // 4. เลื่อน Pointer อีกครั้ง
    ptr_arr += 1; // ptr_arr++ กับ ptr_arr += 1 ให้ผลเหมือนกัน
    
    // 5. เข้าถึงค่าที่สาม
    printf("ค่าที่สาม (*ptr_arr): %d\n", *ptr_arr); // Output: 30

    ptr_arr += 1;
    printf("ค่าต่อมา (*ptr_arr): %d\n", *ptr_arr); 

    return 0;
}