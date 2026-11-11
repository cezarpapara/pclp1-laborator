# PCLP1 – exemple de laborator în C, C++ și Python

Exemplele din îndrumarul de laborator al disciplinei **Programarea calculatoarelor și limbaje de programare 1** (Universitatea „Vasile Alecsandri” din Bacău, Facultatea de Inginerie), autor asist. univ. drd. asoc. Cezar-Marian Papară.

Fiecare exemplu există în trei variante echivalente, așezate în același folder: **C** (`.c`), **C++** (`.cpp`) și **Python** (`.py`). Pentru aceleași date de intrare, cele trei programe afișează exact același rezultat (cu excepția exemplelor care ilustrează tocmai diferențele dintre limbaje: 2.2, 3.2, 8.2 și 13.1).

## Descărcare

Butonul verde **Code** → **Download ZIP**, apoi dezarhivare:

- **Windows:** clic dreapta pe arhivă → *Extract All…* (*Extrage tot…*);
- **macOS:** dublu clic pe arhivă în Finder;
- **Linux:** clic dreapta → *Extract Here* sau `unzip pclp1-laborator-main.zip`.

Cu Git: `git clone https://github.com/cezarpapara/pclp1-laborator.git`

## Structura

| Folder | Laboratorul |
|---|---|
| `lab01-algorithms` | 1. Algoritmi și programe |
| `lab02-variables-types` | 2. Variabile, tipuri de date, citire și afișare |
| `lab03-operators` | 3. Operatori și expresii |
| `lab04-if-statements` | 4. Structura de decizie: instrucțiunea if |
| `lab05-switch-match` | 5. Selecția multiplă: switch și match |
| `lab06-loops` | 6. Structuri repetitive: while, do-while, for |
| `lab07-nested-loops` | 7. Bucle imbricate și algoritmi elementari |
| `lab08-functions` | 8. Funcții |
| `lab09-arrays` | 9. Tablouri unidimensionale |
| `lab10-search-sort` | 10. Complexitatea algoritmilor. Căutare și sortare |
| `lab11-matrices` | 11. Tablouri bidimensionale (matrice) |
| `lab12-strings` | 12. Șiruri de caractere |
| `lab13-pointers-structs` | 13. Pointeri și structuri |
| `lab14-files` | 14. Fișiere text și o aplicație completă |

În fiecare laborator, folderul `e1_…` conține Exemplul 1, `e2_…` Exemplul 2 etc. Exemplele cu fișiere (laboratorul 14) au fișierele de intrare în același folder.

## Compilare și rulare

- **Code::Blocks (Windows, Linux):** *File → Open* pe fișierul `.c` sau `.cpp`, apoi **F9** (*Build and run*).
- **Terminal (macOS, Linux):**

```
gcc -Wall -Wextra program.c -o program && ./program
g++ -Wall -Wextra program.cpp -o program && ./program
python3 program.py
```

Pe Linux, programele C care folosesc `<math.h>` se compilează cu `-lm`. Programele Python necesită Python 3.10 sau o versiune mai nouă (instrucțiunea `match`).

Toate programele au fost compilate fără avertismente cu GCC și Clang (`-std=c17` pentru C, `-std=c++17` pentru C++, `-Wall -Wextra -Wpedantic`).
