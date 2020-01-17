## Laboratorium 1

1. Używając linii poleceń stwórz strukturę katalogów.
    ```sh
     mkdir -p temp/dom
     mkdir -p temp/nauka/{c,logo,pascal}
     mkdir -p temp/praca/{dokumenty,zlecenia}
     mkdir -p temp/praca/zlecenia/{niezrealizowane,zrealizowane}
     cd temp 
     tree
    ```

2. Przejdź do katalogu dom i utwórz katalog wazne-sprawy.
    ```sh
     cd dom
     mkdir wazne-sprawy
    ```

3. Wejdź do katalogu wazne-sprawy i utwórz tam pusty plik rachunki.txt.
    ```sh
     cd wazne-sprawy
     touch rachunki.txt
    ```

4. Będąc w katalogu wazne-sprawy skopiuj plik rachunki.txt do katalogu zrealizowane.
    ```sh
     cp rachunki.txt ../../praca/zlecenia/zrealizowane/rachunki.txt
    ```

5. Przejdź do katalogu zrealizowane i zmień nazwę pliku rachunki.txt na wykonano.txt.
    ```sh 
     cd praca/zlecenia/zrealizowane
     mv rachunki.txt wykonano.txt
    ```

6. Utwórz plik wykonano.txt wielkości 11 bajtów, następnie podziel go pliki wielkości 5 bajtów. W ten sposób otrzymasz 3 pliki. (split)
    ```sh
     cat > wykonano.txt 
     12345678901 (potem wcisnąć Ctrl+D)
     split -b 5 wykonano.txt
    ```

7. Będąc w katalogu logo skopiuj powyżej otrzymane 3 pliki do katalogu dokumenty. 
    ```sh
    cp .../.../praca/zlecenia/zrealizowane/x* .../.../praca/dokumenty
    ```
 
8. Będąc w katalogu dokumenty połącz skopiowane 3 pliki w plik odtworzono.txt, tak aby otrzymać plik o zawartości identycznej z wykonano.txt. Następnie plik odtworzono.txt skopiuj do katalogu wazne-sprawy.
    ```sh

    ```
9. Będąc w katalogu wazne-sprawy sprawdź, czy są jakieś różnice w zawartości plików wykonano.txt i odtworzono.txt.
    ```sh
    diff -a ../../praca/zlecenia/zrealizowane/wykonano.txt odtworzono.txt
    ```
10. Wyświetl kalendarz na październik 2016 r. (cal)
    ```sh
    cal 10 2016
    ```