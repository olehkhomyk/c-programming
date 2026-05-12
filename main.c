#include <stdio.h>

int string_length(char text[]) {
    int length = 0;

    while (text[length] != '\0') {
        length++;
    }

    return length;
}

int main(void) {
    // 6 chars - h e l l o \0 - 1 char always is 1 byte.
    char text[] = "hello";
    char oneChar = 'a'; // single quotes one char
    char doubleChat[] = "a"; // [ a, \0 ] double quotes string list.

    printf("sizeof(oneChar) = %zu\n", sizeof(oneChar));
    printf("sizeof(doubleChat) = %zu\n", sizeof(doubleChat));


    printf("text = %s\n", text);
    printf("sizeof(text) = %zu\n", sizeof(text));

    // char text[] = "hi"; same as:  char text[] = {'h', 'i', '\0'};

    // char name[10] = "Oleh"; => value:  'O'  'l'  'e'  'h'   '\0'   '\0'   '\0'   '\0'   '\0'   '\0'

    char word[10] = "cataclysm";

    printf("%s\n", word);

    int strLengthBefore = string_length(word);

    printf("Length of array before cut %d\n", strLengthBefore);

    // By assigning \0 we say string end at that index.
    word[3] = '\0';

    printf("%s\n", word);

    int strLengthAfter = string_length(word);

    printf("Length of array after cut %d\n", strLengthAfter);

    return 0;
}
