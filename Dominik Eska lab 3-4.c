
#include<stdio.h>

int silnia(int liczba);
int potegaSilni(int liczba, int potega);

int main(int argc, char**argv) {
        int liczba = 4;
        int potega = 3;
        printf("Wynik dzialania %d!: %d\n", liczba, silnia(liczba));
        printf("Wynik dzialania (%d!)^%d: %d\n", liczba, potega, potegaSilni(liczba, potega));
}

int silnia(int liczba) {
        if(liczba == 0) { return 1; }
        return silnia(liczba-1)*liczba;
}

int potegaSilni(int liczba, int potega) {
        if(potega == 1){
                return silnia(liczba);
        }
        
        int tmp = potega-1;
        int wynik = silnia(liczba); 
        while(tmp > 0) { 
                wynik *= silnia(liczba);
                tmp--;
        }
        return wynik;
}
