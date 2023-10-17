#nclude "main.h"

int custom_printf(const char *format, ...);

int print_reversed_string(va_list args) {
    char *str = va_arg(args, char *);
    int len = strlen(str)
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s", str);

    return len;
}

int custom_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int printed_chars = 0;
    const char *format_ptr = format;

    while (*format_ptr) {
        if (*format_ptr == '%' && *(format_ptr + 1) == 'r') {
            format_ptr++;
            format_ptr++;
            printed_chars += print_reversed_string(args);
        } else {
            putchar(*format_ptr);
            printed_chars++;
        }
        format_ptr++;
    }

    va_end(args);
    return printed_chars;
}

int main() {
    char myString[] = "Hello, World!";

    custom_printf("Original: %s\n", myString);
    custom_printf("Reversed: %r\n", myString);

    return 0;
}

