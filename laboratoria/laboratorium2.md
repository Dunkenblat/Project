## Ćwiczenia

1. Wyświetl na ekran 2 pierwsze wiersze pliku program.c. 
    ```sh
    head --lines 2 program.c
    head -n 2 program.c
    head -2 program.c
    ```

2. Wyświetl na ekran 4 ostatnie wiersze pliku program.c. 
    ```sh
    head -n 4 program.c
    tail -n 4 program.c
    ```

3. W pliku program.c znajdź wszystkie wiersze z wystąpieniem słowa „main”. 
    ```sh
    grep 'main' program.c
    ```

4. Plikowi program.c nadaj następujące uprawnienia: 
właściciel – czytanie, pisanie, grupa – czytanie, pozostali użytkownicy: brak uprawnień.
    ```sh
    chmod 650 program.c
    ```

5. Będąc w katalogu temp przenieś katalog wazne-sprawy do katalogu praca.
    ```sh 
    mv ~/Pulpit/temp/dom/wazne-sprawy ~/Pulpit/temp/praca
    ```

6. Zarchiwizuj cały katalog temp.
    ```sh
    zip -r temp.rar temp
    ```

7. Usuń katalog temp. 
    ```sh
    rm -r temp
    ```
 
8. Odtwórz z archiwum katalog temp.
    ```sh
    unzip temp.rar
    ```
9. Posprzątaj na swoim koncie.
    ```
    cd ~/tmp
    ```

