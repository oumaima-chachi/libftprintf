# *This project has been created as part of the 42 curriculum by ochachi.*

# ft_printf

## Description

ft_printf est une réimplémentation de la fonction printf de la bibliothèque standard C.

L'objectif principal de ce projet est de découvrir les fonctions variadiques et de comprendre comment une fonction peut recevoir un nombre variable d'arguments.

Le projet consiste à créer une bibliothèque statique contenant la fonction :

```c
int ft_printf(const char *format, ...);
```

Cette fonction reproduit le comportement de printf pour les conversions demandées dans le sujet.

---

## Features

Les conversions obligatoires implémentées sont :

| Conversion | Description                                |
| ---------- | ------------------------------------------ |
| %c         | Affiche un caractère                       |
| %s         | Affiche une chaîne de caractères           |
| %p         | Affiche une adresse mémoire                |
| %d         | Affiche un entier décimal signé            |
| %i         | Affiche un entier                          |
| %u         | Affiche un entier non signé                |
| %x         | Affiche un nombre en hexadécimal minuscule |
| %X         | Affiche un nombre en hexadécimal majuscule |
| %%         | Affiche le caractère %                     |

---

## Compilation

Compiler la bibliothèque :

```bash
make
```

Nettoyer les fichiers objets :

```bash
make clean
```

Supprimer tous les fichiers générés :

```bash
make fclean
```

Recompiler entièrement :

```bash
make re
```

---

## Usage

Inclure le header dans votre programme :

```c
#include "ft_printf.h"
```

Exemple :

```c
ft_printf("Hello %s\n", "42");
ft_printf("Number: %d\n", 42);
ft_printf("Hex: %x\n", 255);
```

---

## Algorithm and Data Structure

### General Principle

La fonction parcourt la chaîne de format caractère par caractère.

* Si le caractère n'est pas `%`, il est affiché directement.
* Si `%` est rencontré, le caractère suivant détermine le type de conversion à effectuer.

Chaque conversion est traitée par une fonction dédiée.

Exemple :

```text
"Age: %d"
      ^
      conversion détectée
```

---

### Variadic Arguments

Le projet utilise les macros de `<stdarg.h>` :

```c
va_start
va_arg
va_end
```

Ces macros permettent de récupérer chaque argument transmis à ft_printf.

Exemple :

```c
ft_printf("%s %d", "test", 42);
```

Les arguments sont récupérés un par un selon le type demandé.

---

### Number Conversion

Les nombres décimaux et hexadécimaux sont convertis à l'aide d'une fonction récursive.

Exemple :

```text
255
↓
15
↓
0
```

Résultat :

```text
ff
```

Cette approche permet d'afficher les chiffres dans le bon ordre sans utiliser de tableau intermédiaire.

---

### Pointer Conversion

Pour `%p`, l'adresse mémoire est affichée en hexadécimal précédée du préfixe :

```text
0x
```

Exemple :

```text
0x7ffe12345678
```

---

## Complexity

### Time Complexity

Affichage d'une chaîne :

```text
O(n)
```

où n représente la longueur de la chaîne.

Conversion d'un nombre :

```text
O(log n)
```

selon la base utilisée.

### Space Complexity

```text
O(1)
```

Aucune structure de données complexe n'est utilisée.

---

## Testing

Tests effectués :

```bash
%c
%s
%p
%d
%i
%u
%x
%X
%%
```

Comparaison systématique avec :

```c
printf()
```

afin de vérifier :

* l'affichage
* la valeur de retour

---

## Resources

### Documentation

* The C Programming Language – Kernighan & Ritchie
* man 3 printf
* man stdarg
* POSIX Documentation
* cppreference.com

### Useful References

* Variadic Functions in C
* printf Documentation
* C Language Reference

---

## AI Usage

L'IA a été utilisée pour :

* clarifier certains concepts liés aux fonctions variadiques
* relire des explications théoriques
* améliorer la rédaction du README

L'implémentation de ft_printf, les fonctions de conversion et les tests ont été réalisés et compris avant validation.

---

## Conclusion

Ce projet m'a permis d'apprendre :

* les fonctions variadiques
* la manipulation des chaînes de caractères
* les conversions numériques
* la création d'une bibliothèque statique

ft_printf constitue désormais une fonction réutilisable dans les projets suivants du cursus 42.
