# beecrowd

Soluciones en C y C++ para problemas de Beecrowd.

## Estructura

```
.
├── 1-beginner/
├── 2-adhoc/
├── 3-strings/
├── 4-structures/
├── 5-mathematics/
├── 6-paradigms/
├── 7-graph/
├── 8-geometry/
├── 9-sql/
├── Makefile
└── README.md
```

## Requisitos

- `gcc` (soporte C17)
- `g++` (soporte C++20)
- `make`

## Uso

### Compilar y ejecutar un problema
```bash
make run P=1-beginner/1001
```
### O bien
```bash
make run P=1-beginner/1001.c
```
### O bien
```bash
make run P=1-beginner/1001.cpp
```

### Compilar todo
```bash
make
```
Los binarios se compilan en la carpeta `build/` manteniendo la estructura de directorios.

### Limpieza
```bash
make clean
```

### Comandos disponibles
```bash
make help
```
