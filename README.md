# String Replacement Problem

![Licencia MIT](https://img.shields.io/badge/licencia-MIT-blue.svg)
![Estado del Proyecto](https://img.shields.io/badge/estado-en%20desarrollo-yellow.svg)
![Versión](https://img.shields.io/badge/versión-1.0.0-brightgreen.svg)

Este proyecto implementa un algoritmo para reemplazar caracteres en una cadena de texto según las posiciones indicadas por un arreglo. Es útil en casos donde se necesita modificar una cadena siguiendo un patrón específico definido por un conjunto de posiciones.

## 📋 Descripción

El **String Replacement Problem** consiste en reemplazar los caracteres de una cadena en las posiciones especificadas por un arreglo, utilizando los primeros caracteres del alfabeto inglés en minúscula. Este programa está diseñado para manejar entradas específicas y generar un resultado acorde a las reglas definidas.

## 🛠️ Tecnologías Utilizadas

- **C**: Lenguaje de programación utilizado para implementar la lógica del sistema.
- **Archivos**: Se utilizan para leer las entradas y escribir los resultados.
- **Validación de entradas**: Para asegurar que los datos proporcionados sean correctos y cumplan con las restricciones.

## 🏗️ Instalación

Para ejecutar este proyecto en tu máquina local, sigue estos pasos:

1. **Clona el repositorio**:
   
   ```bash
   git clone https://github.com/LatinGladiador/String-Replacement-Problem.git
   ```

2. **Navega al directorio del proyecto**:
   
   ```bash
   cd String-Replacement-Problem
   ```

3. **Compila el archivo C**:
   
   ```bash
   gcc main.c -o string_replacement
   ```

4. **Ejecuta el programa**:
   
   ```bash
   ./string_replacement
   ```

## 🖥️ Uso

1. **Crea un archivo** llamado `input.txt` con el formato especificado en la sección de Ejemplos.
2. **Ejecuta el programa** que leerá la entrada desde `input.txt` y generará un archivo `output.txt` con el resultado.

## 📄 Formato de Entrada y Salida

### Entrada

- El archivo `input.txt` debe seguir el siguiente formato:
  1. La primera línea debe contener un entero **N** (2 ≤ **N** ≤ 50) que representa la longitud de la cadena.
  2. La segunda línea debe contener una cadena **S** de longitud **N**.
  3. La tercera línea debe contener un entero **M** (1 ≤ **M** ≤ min(N - 1, 26)) que representa la cantidad de posiciones a modificar.
  4. La cuarta línea debe contener **M** enteros que representan las posiciones en la cadena a modificar.

### Salida

- El archivo `output.txt` contendrá:
  1. Una cadena resultante después de aplicar las modificaciones según las reglas o "Invalid inputs" si alguna entrada no cumple las restricciones.

### Ejemplos

**input.txt**:
```
8
thisismy
3
1 5 7
```

**output.txt**:
```
taisiemg
```

**input.txt**:
```
8
thisismy
3
1 5 8
```

**output.txt**:
```
Invalid inputs
```

**input.txt**:
```
-1
thisismy
3
1 5 8
```

**output.txt**:
```
Invalid inputs
```

## 🤝 Contribuciones

Las contribuciones son bienvenidas. Si deseas contribuir, sigue estos pasos:

1. **Haz un fork del repositorio**.
2. **Crea una nueva rama** para tus cambios:
   
   ```bash
   git checkout -b feature/nueva-caracteristica
   ```

3. **Realiza tus cambios y haz commit**:
   
   ```bash
   git commit -m "Añadida nueva característica"
   ```

4. **Empuja tu rama**:
   
   ```bash
   git push origin feature/nueva-caracteristica
   ```

5. **Abre un Pull Request** en GitHub.

## 👤 Autor

Este proyecto fue creado y es mantenido por [LatinGladiador](https://github.com/LatinGladiador).

## 📜 Licencia

Este proyecto está licenciado bajo la [Licencia MIT](LICENSE).

---

[![MIT License](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

---
