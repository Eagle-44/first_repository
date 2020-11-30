#include <stdio.h>
#include <stdbool.h>

#define N 32

void exCh(char * symbols,bool* b){
    for(int i = 0; symbols[i] != '\0'; i++) {
        char a = symbols[i];
        if('a' <= a && a <= 'z') {
            *b = true;
            break;
        }
    }
}

int main() {
    char symbols[N];
    char fmt[4] = {'%', (N/10)+'0', (N%10)+'0', 's'};

    bool b = false;
    bool * f = &b;


    printf("Enter Symbols: \n");
    scanf(fmt, symbols);

    exCh(symbols,f);

    if(!b){
        printf("true\n");
    }else{
        printf("false\n");
    }
	cout "Hi" //
    printf("str: %s \n",symbols);
    return 0;
}
