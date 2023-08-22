#include <main.h>

void print_pointer_address(void *ptr)
{
printf("Pointer address: %p\n", ptr);
}

int main() {
int num = 42;
int *ptr = &num;
    
print_pointer_address((void *)ptr);
    
return 0;
}
