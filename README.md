# ft_printf

![Result](./result.png)

Implémentation minimaliste de `printf` en C, conforme à l'esprit du projet 42. La bibliothèque statique générée est `libftprintf.a` et expose la fonction `ft_printf`.

## Fonctionnalités
- Formats pris en charge : `%%`, `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`
- Valeur de retour : nombre de caractères écrits, ou `-1` en cas d'entrée invalide (par ex. chaîne nulle ou `%` final isolé)

## Compilation
- Construire la bibliothèque:
  ```sh
  make
  ```
- Nettoyer les objets:
  ```sh
  make clean
  ```
- Nettoyage complet (lib + objets):
  ```sh
  make fclean
  ```
- Recompiler depuis zéro:
  ```sh
  make re
  ```

La compilation produit `libftprintf.a` et un dossier d'objets `obj/`.

## Utilisation
Inclure l'en-tête et lier la bibliothèque statique.

Exemple minimal `main.c`:
```c
#include "ft_printf.h"

int main(void)
{
    int n = ft_printf("Hello %s %d\n", "world", 42);
    ft_printf("printed: %d chars\n", n);
    return 0;
}
```

Compilation et exécution:
```sh
cc main.c -L. -lftprintf -o demo
./demo
```

## Structure
- `ft_printf.c` / `ft_printf.h` : API et logique centrale
- `ft_putstr.c`, `ft_putnbr.c`, `ft_putnbr_hexa.c` : fonctions d'affichage
- `Makefile` : règles `all`, `clean`, `fclean`, `re`

## Limites
- Pas de gestion des drapeaux, largeur, précision ou longueur (`hh`, `l`, etc.)
- Conçu pour les besoins du projet et une utilisation simple
