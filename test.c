#include "cintro.h"
#include <stdio.h>
void hello_world();
int main(int argc, const char ** argv){
    cintro_init(*argv);
    void (*hello)() = find_symbol("_test");
    printf("%p\n", hello);
    if(hello){
        hello();
    }
}