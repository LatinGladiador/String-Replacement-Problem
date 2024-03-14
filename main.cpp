#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define private static
//Funcition to replacce a character in string
void remplazar_caracteres(char *cadena, int caracter_remplazante, char nuevo_caracter_remplazo) {
    cadena[caracter_remplazante] = nuevo_caracter_remplazo;
}
//Function to valide if the input is valid
int verificar_validez_entrada(char *S, int N, int M, int *A) {
    int valid = 1;
    //Validate if N & M within valid range and if S is equal to N
    if (N < 2 || N > 50 || M < 1 || M > (N - 1 < 26 ? N - 1 : 26)|| strlen(S) != N)  {
        valid = 0;
    }
    //Validate if the characters in S are valid
    for (int i = 0; i < N && valid; i++) {
        char c = S[i];
        if (!((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57) || strchr("()!*@#$%^&", c) != NULL)) {
            valid = 0;
        }
    }
    //Validate if the values in A are distinct
    for (int i = 0; i < M && valid; i++) {
        if (A[i] < 1 || A[i] >= N || A[i] > 26) {
            valid = 0;
        }
        for (int j = i + 1; j < M; j++) {
            if (A[i] == A[j]) {
                valid = 0;
            }
        }
    }
    return valid;
}

int main() {
    char S[51];
    int N, M;
    int A[26];
    //Open input and output files
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");
    //Read values from file
    fscanf(input_file, "%d", &N);
    fscanf(input_file, "%s", S);
    fscanf(input_file, "%d", &M);
    for (int i = 0; i < M; i++) {
        fscanf(input_file, "%d", &A[i]);
    }
    //Validate is the input is valid
    int es_valida = verificar_validez_entrada(S, N, M, A);

    if (es_valida) {

        for (int i = 0; i < M; i++) {
            S[A[i]] = 'a' + A[i] - 1;
        }
        //Write result to output file
        fprintf(output_file, "%s\n", S);
    } else {
        fprintf(output_file, "Invalid inputs\n");
    }

    //Close files
    fclose(input_file);
    fclose(output_file);

    return 0;
}

