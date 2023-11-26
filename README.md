# FDF

Ce projet, réalisé dans le cadre de l'école 42, consiste à créer une représentation en fil de fer d'un terrain en deux dimensions.

## Description

FDF (Fil De Fer) est un programme qui prend en entrée une carte, représentant l'altitude de points dans un espace en deux dimensions, et qui génère une représentation en fil de fer de ce terrain. Chaque point est représenté par un pixel, et les points sont reliés entre eux par des segments.

## Objectif

L'objectif de ce projet est de lire le fichier représentant la carte, de traiter ses données, et de générer une représentation graphique en fil de fer du terrain. Le programme doit également permettre de déplacer la carte dans l'espace pour visualiser le terrain sous différents angles.

## Utilisation

Le programme prend en entrée un fichier représentant la carte. Il affiche ensuite cette carte en fil de fer dans une fenêtre graphique.

Exemple d'utilisation :
```shell
./fdf maps/map.fdf
```

## Compilation

Compilez le programme avec le Makefile fourni ou en utilisant la commande `make`.

Exemple de compilation : `make`

## Ressources

Pour plus de détails sur le projet FDF, référez-vous au sujet fourni par l'école 42.
