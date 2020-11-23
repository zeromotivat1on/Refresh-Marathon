char *mx_strdup(const char *str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char* src);

char *mx_strdup(const char *str){
    return (mx_strcpy(mx_strnew(mx_strlen(str)), str)); 
}
