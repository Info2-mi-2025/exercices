#include <stdio.h>

int main(int argc, char* argv[]) {

    if(argc < 2)
        return 1;

    char line[256];
    FILE* file = fopen(argv[1], "r");
    
    double sum = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        double val;
        if( sscanf(line, "%lf", &val) == 1 ){
            sum += val;
        }
    }
    fclose(file);

    printf("La somme vaut : %.2lf\n", sum);
    return 0;
}