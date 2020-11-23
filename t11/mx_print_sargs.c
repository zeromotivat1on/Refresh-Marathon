int mx_strcmp(const char *s1, const char *s2);
int mx_printstr(const char *s);
void mx_printchar(char c);
void sort_strings(int num, char **s);

void sort_strings(int num, char **s){
    for (int i = 1; i < num; ++i)
        for (int j = i; j > 0 && mx_strcmp(s[j - 1], s[j]) > 0; --j){
            char *temp = s[j - 1];
            s[j - 1] = s[j];
            s[j] = temp;
        }
}

int main(int argc, char* argv[]){
    sort_strings(argc - 1, argv + 1);
      for(int i = 1; i < argc; ++i){
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
