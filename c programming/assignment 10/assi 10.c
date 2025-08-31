#include <stdio.h>
#include <string.h>
#include <ctype.h>   // for toupper, tolower

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[100] = "   OpenAI GPT   ";
    char *pos;

    // 1. strlen
    printf("Length of str1: %lu\n", strlen(str1));

    // 2. strcpy
    strcpy(str3, str1);
    printf("After strcpy str3 = %s\n", str3);

    // 3. strncpy
    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("After strncpy str3 = %s\n", str3);

    // 4. strcat
    strcat(str1, str2);
    printf("After strcat str1 = %s\n", str1);

    // 5. strncat
    strncat(str2, "12345", 2);
    printf("After strncat str2 = %s\n", str2);

    // 6. strcmp
    printf("strcmp(Hello, World) = %d\n", strcmp("Hello", "World"));

    // 7. strncmp
    printf("strncmp(Hello, Hell, 4) = %d\n", strncmp("Hello", "Hell", 4));

    // 8. strchr
    pos = strchr("banana", 'n');
    if (pos) printf("strchr: first 'n' at index %ld\n", pos - "banana");

    // 9. strrchr
    pos = strrchr("banana", 'n');
    if (pos) printf("strrchr: last 'n' at index %ld\n", pos - "banana");

    // 10. strstr
    pos = strstr("OpenAI GPT", "GPT");
    if (pos) printf("strstr: 'GPT' found at index %ld\n", pos - "OpenAI GPT");

    // 11. strtok
    char text[50] = "C,Java,Python";
    char *token = strtok(text, ",");
    printf("Tokens:\n");
    while (token) {
        printf("  %s\n", token);
        token = strtok(NULL, ",");
    }

    // 12. strpbrk
    pos = strpbrk("hello", "aeiou");
    if (pos) printf("First vowel in 'hello': %c\n", *pos);

    // 13. strspn
    printf("strspn(\"abcdef\", \"abc\") = %lu\n", strspn("abcdef", "abc"));

    // 14. strcspn
    printf("strcspn(\"abcdef\", \"xdy\") = %lu\n", strcspn("abcdef", "xdy"));

    // 15. memset
    char buf[10];
    memset(buf, '*', 5);
    buf[5] = '\0';
    printf("After memset buf = %s\n", buf);

    // 16. memcpy
    char src[10] = "ABCDEFG";
    char dest[10];
    memcpy(dest, src, 5);
    dest[5] = '\0';
    printf("After memcpy dest = %s\n", dest);

    // 17. memmove
    char moveStr[20] = "12345";
    memmove(moveStr+2, moveStr, 3);
    printf("After memmove: %s\n", moveStr);

    // 18. memcmp
    printf("memcmp(\"abc\", \"abd\", 2) = %d\n", memcmp("abc", "abd", 2));

    // 19. tolower
    printf("tolower('H') = %c\n", tolower('H'));

    // 20. toupper
    printf("toupper('h') = %c\n", toupper('h'));

    // 21. strcat + trim example with strspn/strcspn
    // trimming spaces from str4
    char *start = str4 + strspn(str4, " ");
    char *end = str4 + strlen(str4) - 1;
    while (end > start && *end == ' ') end--;
    *(end+1) = '\0';
    printf("Trimmed string: '%s'\n", start);

    return 0;
}
