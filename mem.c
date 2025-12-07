#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s;
    int stringsize;

    // หาขนาดของคำว่า "hello" (รวม null terminator '\0' ด้วย ดังนั้นขนาดคือ 6)
    stringsize = sizeof("hello");
    printf("size of 'hello' is %d\n", stringsize);

    // จองพื้นที่หน่วยความจำ (Memory Allocation)
    s = (char *)malloc(stringsize);

    // ตรวจสอบว่าจองพื้นที่สำเร็จหรือไม่
    if (s == NULL)
    {
        printf("malloc failed!\n");
        exit(0);
    }

    // จุดที่ต้องระวัง 1: ตอนนี้ s ยังไม่ได้กำหนดค่า (Uninitialized)
    // การ print อาจจะได้ค่าขยะ หรือโปรแกรมอาจ error ได้ถ้าไม่เจอ null terminator
    printf("1. s is now.. %s\n", s);

    // คัดลอกข้อความ "hello" ลงไปใน s
    strncpy(s, "hello", sizeof("hello"));
    printf("2. s is now %s\n", s);

    // เปลี่ยนตัวอักษรตัวแรกเป็น 'c'
    s[0] = 'c';
    printf("3. s is now %s\n", s);

    // คืนพื้นที่หน่วยความจำ (Free memory)
    free(s);

    // จุดที่ต้องระวัง 2: Use After Free
    // การเข้าถึง s หลังจาก free ไปแล้วเป็นสิ่งที่อันตราย (Undefined Behavior)
    // ค่าที่ได้อาจจะเป็นค่าเดิม ค่าขยะ หรือโปรแกรมอาจจะ Crash ได้
    printf("4. s is now %s\n", s);

    return 0;
}