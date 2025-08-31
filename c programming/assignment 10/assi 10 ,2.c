#include <stdio.h>
#include <ctype.h>

// -------------------- USER DEFINED STRING FUNCTIONS --------------------
char* mystrcpy(char* dest, const char* src) {
    char* d = dest;
    while ((*d++ = *src++));
    return dest;
}

int mystrlen(const char* str) {
    int len = 0;
    while (*str++) len++;
    return len;
}

int mystrcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) { s1++; s2++; }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}

char* mystrcat(char* dest, const char* src) {
    char* d = dest + mystrlen(dest);
    while ((*d++ = *src++));
    return dest;
}

char* mystrncpy(char* dest, const char* src, int n) {
    char* d = dest;
    while (n-- && (*src)) *d++ = *src++;
    *d = '\0';
    return dest;
}

char* mystrupper(char* str) {
    for (char* s = str; *s; s++) *s = toupper(*s);
    return str;
}

char* mystrlower(char* str) {
    for (char* s = str; *s; s++) *s = tolower(*s);
    return str;
}

char* mystrrev(char* str) {
    int i = 0, j = mystrlen(str) - 1;
    while (i < j) {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++; j--;
    }
    return str;
}

char* mystrstr(const char* hay, const char* needle) {
    if (!*needle) return (char*)hay;
    for (; *hay; hay++) {
        const char *h = hay, *n = needle;
        while (*h && *n && *h == *n) { h++; n++; }
        if (!*n) return (char*)hay;
    }
    return NULL;
}

int mystrcasecmp(const char* s1, const char* s2) {
    while (*s1 && *s2) {
        char c1 = tolower(*s1), c2 = tolower(*s2);
        if (c1 != c2) return c1 - c2;
        s1++; s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

char* mystrchr(const char* str, int c) {
    while (*str) {
        if (*str == (char)c) return (char*)str;
        str++;
    }
    return (c == 0) ? (char*)str : NULL;
}

char* mystrrchr(const char* str, int c) {
    const char* last = NULL;
    while (*str) {
        if (*str == (char)c) last = str;
        str++;
    }
    return (char*)last;
}

int mystrncmp(const char* s1, const char* s2, int n) {
    while (n-- && *s1 && (*s1 == *s2)) { s1++; s2++; }
    return (n < 0) ? 0 : (*(unsigned char*)s1 - *(unsigned char*)s2);
}

char* mystrnstr(const char* hay, const char* needle, int n) {
    int len = mystrlen(needle);
    if (!len) return (char*)hay;
    for (int i = 0; i <= n - len; i++) {
        if (mystrncmp(hay + i, needle, len) == 0) return (char*)(hay + i);
    }
    return NULL;
}

char* mystrncat(char* dest, const char* src, int n) {
    char* d = dest + mystrlen(dest);
    while (n-- && *src) *d++ = *src++;
    *d = '\0';
    return dest;
}

int mystrncasecmp(const char* s1, const char* s2, int n) {
    while (n-- && *s1 && *s2) {
        char c1 = tolower(*s1), c2 = tolower(*s2);
        if (c1 != c2) return c1 - c2;
        s1++; s2++;
    }
    return 0;
}

// -------------------- MAIN DEMO --------------------
int main() {
    char a[100] = "Hello";
    char b[100] = "World";
    char c[100];

    printf("Original a: %s, b: %s\n\n", a, b);

    printf("1. mystrlen(a) = %d\n", mystrlen(a));
    mystrcpy(c, a);
    printf("2. mystrcpy(c,a) = %s\n", c);
    printf("3. mystrcmp(a,b) = %d\n", mystrcmp(a,b));
    mystrcat(a,b);
    printf("4. mystrcat(a,b) = %s\n", a);
    mystrncpy(c,b,3);
    printf("5. mystrncpy(c,b,3) = %s\n", c);
    printf("6. mystrupper(b) = %s\n", mystrupper(b));
    printf("7. mystrlower(b) = %s\n", mystrlower(b));
    printf("8. mystrrev(a) = %s\n", mystrrev(a));
    printf("9. mystrstr(a,\"WORLD\") = %s\n", mystrstr(a,"WORLD"));
    printf("10. mystrcasecmp(\"Hello\",\"hello\") = %d\n", mystrcasecmp("Hello","hello"));
    printf("11. mystrchr(a,'o') = %s\n", mystrchr(a,'o'));
    printf("12. mystrrchr(a,'o') = %s\n", mystrrchr(a,'o'));
    printf("13. mystrncmp(\"abc\",\"abd\",2) = %d\n", mystrncmp("abc","abd",2));
    printf("14. mystrnstr(\"Programming\",\"gram\",11) = %s\n", mystrnstr("Programming","gram",11));
    mystrcpy(a,"Hi");
    mystrncat(a,"Everyone",4);
    printf("15. mystrncat(a,\"Everyone\",4) = %s\n", a);
    printf("16. mystrncasecmp(\"Test\",\"teSt\",4) = %d\n", mystrncasecmp("Test","teSt",4));

    return 0;
}
