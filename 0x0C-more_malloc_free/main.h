#ifndef _ALX_A_
#define _ALX_A_
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void simple_print_buffer(char *buffer, unsigned int size);
int *array_range(int min, int max);
/*void simple_print_buffer(int *buffer, unsigned int size);*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _print(char *str, int l);
char *mul(char n, char *num, int num_index, char *dest, int dest_index);
int check_for_digits(char **av);
void init(char *str, int l);
int main(int argc, char *argv[]);
int _putchar(char c);
#endif /* _ALX_A_ */
