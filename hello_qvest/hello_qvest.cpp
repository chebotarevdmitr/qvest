#include <iostream>
#include <cstddef>
// question 2
void f(void*){
	std::cout<<1;
}

void f(std::nullptr_t){
	std::cout <<2;
}

int main() {
 int* a{};
 f(a);
 f(nullptr);
 f(NULL);
    system("pause>0");
    return 0;
}




