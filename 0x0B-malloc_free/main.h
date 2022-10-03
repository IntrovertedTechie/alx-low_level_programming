void simple_print_buffer(char *buffer, unsigned int size);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void print_grid(int **grid, int width, int height);
void free_grid(int **grid, int height);
/*int main(int ac, char *av[]);*/
char *argstostr(int ac, char **av);
void print_tab(char **tab);
char **strtow(char *str);
int wrdcnt(char *s);
