
#include "header.h"

int Registro(void){
    int newpin = 1, pin, flag = 0;
    char horae[30], horas[30], dias[40];
    FILE *fichero;
    fichero = fopen("system.txt", "a");
    if (fichero == NULL){
        printf("Error: No se creo el fichero\n");
    }
    else{
        while (1){
            if (checkPines(newpin)){
                newpin++;
            }
            else{
                break;
            }
        }

        fichero = fopen("system.txt", "a");
        printf("El nuevo pin es : %d\n", newpin);
      
        printf("Introduce los dias que trabajara, sin espacio alguno.\n");
        fflush(stdin);
      
        scanf("%s", dias);
        printf("Introduce la hora de entrada\n");
      
        fflush(stdin);
        scanf("%s", horae);
      
        printf("Introduce la hora de salida\n");
        fflush(stdin);
      
        scanf("%s", horas);
        fprintf(fichero, "c%d e%s s%s d%s\n", newpin, horae, horas, dias);
        printf("Agregado con éxito\n");
      
        fflush(fichero);
        fclose(fichero);
        fichero = fopen("times.txt", "a");
        fprintf(fichero, "%d 0 \n", newpin);
        fflush(fichero);
        fclose(fichero);
        printf("\n");
    }
}

int checkPines(int pin){
    int pines[9], j = 0;
    int c;
    FILE *fichero;
    fichero = fopen("system.txt", "r");
    if (fichero == NULL){
        printf("Error: No se ha podido crear el fichero\n");
    }
  
    else{
        while ((c = fgetc(fichero)) != EOF){
            if (c == 'c'){
                c = fgetc(fichero);
                pines[j] = c - '0';
                if (pin == pines[j]){
                    fflush(fichero);
                    fclose(fichero);
                    return 1;
                }
                j = +1;
            }
        }
    }
    fflush(fichero);
    fclose(fichero);
}

int verAsistencias(int pin){
    int c, asistencias = 0;
    FILE *fichero;
    fichero = fopen("log.txt", "r");
    while ((c = fgetc(fichero)) != EOF){
        if (c == 's'){
            c = fgetc(fichero) - '0';
            if (c == pin){
                asistencias++;
            }
        }
    }
    fflush(fichero);
    fclose(fichero);
    printf("\nEl usuario %d tiene : %d asistencias\n", pin, asistencias);
}

int TiempoWork(int pin){
    char tiempo1[20], tiempo2[20];
    int t1, t2, tiempo;
    int c, asistencias = 0;
    FILE *fichero;
    fichero = fopen("log.txt", "r");
    while ((c = fgetc(fichero)) != EOF){
        if (c == 'e'){
            c = fgetc(fichero) - '0';
            if (c == pin){
                c = fgetc(fichero) - '0';
                fgets(tiempo1, 11, fichero);
                t1 = atoi(tiempo1);
            }
        }
    }
    tiempo = (unsigned long)time(NULL) - t1;
    fflush(fichero);
    fclose(fichero);
    return tiempo;
}
int HorasLab(int pin){
    int horas, c, pinarch;
    FILE *fichero;
    fichero = fopen("times.txt", "r");
    while (1){
        fscanf(fichero, "%d %d", &pinarch, &horas);
        if (pinarch == pin){
            return horas;
            break;
        }
    }
}
/* Hecho con ayuda a los repos de AbnerlO y AntonioCG2002/*
