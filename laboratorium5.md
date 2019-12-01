## Laboratorium 5

1. Znajdź w swoim katalogu domowym (bez podkatalogów) wszystkie pliki, które zostały zmodyfikowane w ciągu ostatnich 
dziesięciu dni i wyświetl ich nazwy.
    ```sh
    find ~/ -maxdepth 1 -type f -mtime -10
    ```

2. Znajdź wszystkie pliki zwykłe w systemie, które mają w nazwie ciąg znaków „conf” i wyświetl ich nazwy na ekranie.
    ```sh
    find -type f -name "*conf*" -print
    ```

3. Znajdź w swoim katalogu domowym wszystkie pliki, które nie były używane w ciągu ostatnich 20 dni.
    ```sh 
    find ~/ -atime 20 
    ```

4. Znajdź w katalogu /etc wszystkie niepuste podkatalogi i pliki o nazwach zaczynających się na literę „a”.
    ```sh
    find /etc -size +0k -name 'a*'
    ```
    
