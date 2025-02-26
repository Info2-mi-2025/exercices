#include <stdio.h>

int main(int argc, char* argv[]) {

    if(argc < 2)
        return 1;

    char line[256];
    FILE* file = fopen(argv[1], "r");
    
    double current = 0.0;
    double voltage = 0.0;
    int nbr = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        double c, v;
        if( sscanf(line, "%lf,%lf", &c, &v) == 2 ){
            current += c;
            voltage += v;
            nbr++;
        }
    }
    fclose(file);

    printf("Il y a %d mesures\n", nbr);
    printf("Le courrant vaut : %.2lf\n", current/nbr);
    printf("La tension vaut : %.2lf", voltage/nbr);
    return 0;
}